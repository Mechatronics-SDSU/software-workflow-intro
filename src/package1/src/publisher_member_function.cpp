#include <chrono>
#include <memory>
#include <ctime>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "time_types/msg/time.hpp"              // Custom message types defined in time_types package
#include "time_types/srv/convert_time.hpp"


using namespace std::chrono_literals;


/** Node Subclass will act as talker and use std::bind() with timer to periodically send/request info 
 *  Responsible for sending unixTime to Node2 and printing the date that is sent back
**/
class PublisherClient : public rclcpp::Node
{

public:
    PublisherClient() : Node("timepublisher") 
    {
        /** 
         * Constructor creates publisher that sends int64 data (epoch time) 
         * and a timer that calls callback every 5 seconds 
        **/
        publisher_ = this->create_publisher<time_types::msg::Time>("unix_epoch_time", 10);
        timer_ = this->create_wall_timer(
        5000ms, std::bind(&PublisherClient::timer_callback, this));
    }

private:
    /** 
     * PublisherClient() node subclass I made up must declare pointers to a timer, publisher, and client object
    **/
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<time_types::msg::Time>::SharedPtr publisher_;
    rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client_;


    long UnixEpochTime()
    /** 
     * Helper function to return seconds passed since epoch - 0
     **/
    {
        return (long)std::time(0); 
    }

    auto publishMessage() 
    {
    /** 
    * First the publisher builds its message to send node2 by calling UnixEpochTime()
    * Also return message to be used in next step for client request
    **/
        auto message = time_types::msg::Time();
        message.time = this->UnixEpochTime();
        RCLCPP_INFO(this->get_logger(), "Publishing Unix Epoch Time");     
        RCLCPP_INFO(rclcpp::get_logger("timepublisher"), "Expect To Recieve Human Readable Time\n");
        publisher_->publish(message);
        return message;
    }

    std::shared_ptr<rclcpp::Node> tempNode()
    /** 
     * must temporarily spin a node (spin_until_future_completed) to successfully send/accept response from 
     * the service node. If not, the program will just stall; I imagine this happens due to some conflict
     * with the async request and the timer (maybe something about threads)
    **/
    {
        std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("convert_time");
        return node;
    }

    rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr buildClient(std::shared_ptr<rclcpp::Node> node) 
    /** 
     * Node will have client functionality to send/accept request 
    **/
    {
        rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client_ =
        node->create_client<time_types::srv::ConvertTime>("convert_time"); 
        return client_;
    }

    void acceptRequest(rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client_ ) 
    /** 
     * client will wait for the service and update the user of its progress
    **/
    {
        while (!client_->wait_for_service(1s)) 
        {
            if (!rclcpp::ok()) 
            {
                RCLCPP_ERROR(rclcpp::get_logger("timepublisher"), "Interrupted while waiting for the service. Exiting.");
            }
            RCLCPP_INFO(rclcpp::get_logger("timepublisher"), "service not available, waiting again...");
        }
    }


    void timer_callback()
    /** 
     * Function called from clock every five seconds
     * Executes helper functions to publish message, and then send/accept request for unix to human time conversion
    **/
    {
        
        auto message = publishMessage();

        std::shared_ptr<rclcpp::Node> node = tempNode();
        
        rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client_ = buildClient(node);

        auto request = std::make_shared<time_types::srv::ConvertTime::Request>();
        request->unixtime = message.time;

        auto result = client_->async_send_request(request);
        acceptRequest(client_);
        
        if (rclcpp::spin_until_future_complete(node, result) ==
            rclcpp::FutureReturnCode::SUCCESS)
        {
            RCLCPP_INFO(rclcpp::get_logger("timepublisher"), "Human Time Generated");
            RCLCPP_INFO(rclcpp::get_logger("timepublisher"), "Date/Time: %s\n", result.get()->humantime.c_str());
        } else 
        {
            RCLCPP_ERROR(rclcpp::get_logger("timepublisher"), "Failed to call ConvertTime service");
        }
        }
};


int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PublisherClient>()); // simply call constructor of PublisherClient Node
  rclcpp::shutdown();
  return 0;
}
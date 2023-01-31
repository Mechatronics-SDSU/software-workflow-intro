#include <chrono>
#include <memory>
#include <ctime>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "time_types/msg/time.hpp"              // Custom message types defined in time_types package
#include "time_types/srv/convert_time.hpp"


using namespace std::chrono_literals;


/** Node Subclass will act as talker and use std::bind() with timer to periodically send/request info 
 *  Responsible for sending unixTime to Node2 and printing the Human-Readable date that is sent back
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
     * PublisherClient() node subclass I made up must declare pointer fields to a timer and publisher object
    **/
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<time_types::msg::Time>::SharedPtr publisher_;

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
    * First the publisher builds its message to send node2 by calling UnixEpochTime() (will look something like 160234897)
    * Also return message to be used by other functions that will make the request for conversion
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
     * Must instantiate client functionality to send/accept request (this is different from publisher functionality)
    **/
    {
        rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client =
        node->create_client<time_types::srv::ConvertTime>("convert_time"); 
        return client;
    }

    template<typename T>
    auto makeRequest(rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client, T message) 
    /** 
     * request containing unixtime will be built from message as they are identical, request sent to Node2
     * client will wait for the service (Node 2) to convert unixtime to a date and capture response
     * Returns this response to print later.
    **/
    {
        auto request = std::make_shared<time_types::srv::ConvertTime::Request>();
        request->unixtime = message.time;
        while (!client->wait_for_service(1s)) 
        {
            if (!rclcpp::ok()) 
            {
                RCLCPP_ERROR(rclcpp::get_logger("timepublisher"), "Interrupted while waiting for the service. Exiting.");
            }
            RCLCPP_INFO(rclcpp::get_logger("timepublisher"), "service not available, waiting again...");
        }
        auto result = client->async_send_request(request);
        return result;
    }

    template<typename T>
    void processResponse(std::shared_ptr<rclcpp::Node> node, T result) 
    /** 
     * If Node 1 successfully recieves response from Node 2, it will print the response string
    **/
    {
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

    void timer_callback()
    /** 
     * Function called from clock every five seconds
     * Executes helper functions to publish message, and then send/accept request for unix to human time conversion
    **/
    {
        // Step 1: Node 1 sends unixtime to Node 2 to be printed
        auto message = publishMessage();

        // Step 2: Node 1 spins up temporary node with client that will make request and listen for the response
        std::shared_ptr<rclcpp::Node> node = tempNode();
        rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client = buildClient(node);
        
        // Step 3: Node 1 makes request to Node 2 and notes response
        auto request = makeRequest(client, message);

        // Step 4: If Node 1 recieves info from Node 2 successfully it will print the response
        processResponse(node, request);
    }
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PublisherClient>()); // simply call constructor of PublisherClient Node
  rclcpp::shutdown();
  return 0;
}
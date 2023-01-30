#include <memory>
#include <string>
#include <ctime>
#include <unistd.h>
#include <iostream>
#include <chrono>
#include <iomanip>

#include "rclcpp/rclcpp.hpp"
#include "time_types/msg/time.hpp"          // Custom message types defined in time_types package
#include "time_types/srv/convert_time.hpp"

using std::placeholders::_1;
using std::placeholders::_2;


/** Node sublcass will act as the listener/responder of our node pair that will wait for talker 
 *  Responsible for printing unixTime and converting to humanTime, then sending date back to Node1
**/
class SubscriberServer : public rclcpp::Node
{

public:
  /** 
   * Create a subscriber to our unixTime messages from Node1 and a service that will convert unixTime to humanTime 
  **/
  SubscriberServer(): Node("timesubscriber")
  {
    subscription_ = this->create_subscription<time_types::msg::Time>
    ("unix_epoch_time", 10, std::bind(&SubscriberServer::topic_callback, this, _1));
    service_ = this->create_service<time_types::srv::ConvertTime>("convert_time", std::bind(&SubscriberServer::send_response_message, this, _1, _2));
  }

private:

  rclcpp::Subscription<time_types::msg::Time>::SharedPtr subscription_;
  rclcpp::Service<time_types::srv::ConvertTime>::SharedPtr service_;

  void topic_callback(const time_types::msg::Time::SharedPtr msg) const
  /** 
   * Subscriber binded function prints the unixTime whenever the publisher from Node1 sends it.
  **/ 
  {
    RCLCPP_INFO(this->get_logger(), "Received Epoch Time: %ld", msg->time);
  }

  std::string HumanTime(long unixEpochTime) 
  /** 
   * Helper Function takes in unixTime and uses put_time to format and return a string with a normal date. This will output
   * a std::_Put_time<char> struct that we will have to format to a string. We do this using ostringstream and .str() methods
  **/
  {
    std::_Put_time<char> humantime = std::put_time(std::localtime(&unixEpochTime), "%D %H:%M");
    std::ostringstream stream;
    stream << humantime;
    std::string dateString = stream.str();
    return dateString;
  }

  void send_response_message(const std::shared_ptr<time_types::srv::ConvertTime::Request> request,
          std::shared_ptr<time_types::srv::ConvertTime::Response> response)
  /** 
   * Service binded function that passes request info from Node1 to our HumanTime() helper function and 
   *  stores the result to response. This response will automatically be sent back to Node1.
  **/ 
  {
    response->humantime = HumanTime(request.get()->unixtime);
    RCLCPP_INFO(rclcpp::get_logger("timesubscriber"), "Request To Translate Epoch to Human Time",
                request->unixtime);
    RCLCPP_INFO(rclcpp::get_logger("timesubscriber"), "Sending Back Human Time: [%s]\n", response->humantime.c_str());
  }  
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SubscriberServer>()); // simply call SubscriberServer constructor
  rclcpp::shutdown();
  return 0;
}

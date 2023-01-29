// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <chrono>
#include <memory>
#include <ctime>
#include <iostream>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "time_types/msg/time.hpp"
#include "time_types/srv/convert_time.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class PublisherClient : public rclcpp::Node
{
public:
  PublisherClient()
  : Node("timepublisher"), count_(0)
  {
    publisher_ = this->create_publisher<time_types::msg::Time>("unix_epoch_time", 10);
    client_ = this->create_client<time_types::srv::ConvertTime>("convert_time");
    timer_ = this->create_wall_timer(
      5000ms, std::bind(&PublisherClient::timer_callback, this));
  }

private:
  long UnixEpochTime() 
  {
     return (long)std::time(0); //Returns UTC in Seconds
  }
    
  void timer_callback()
  {
    // publisher
    auto message = time_types::msg::Time();
    // std::time_t unixEpochTime = UnixEpochTime();
    message.time = this->UnixEpochTime();
    RCLCPP_INFO(this->get_logger(), "Publishing: Unix Epoch Time");
    publisher_->publish(message);

    //client
    auto request = std::make_shared<time_types::srv::ConvertTime::Request>();
    request->unixtime = message.time;
    auto result = client_->async_send_request(request);

    
    RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Date/Time: %ld", result.get()->humantime);

    // if (rclcpp::spin_until_future_complete(Node, result) ==
    //     rclcpp::FutureReturnCode::SUCCESS)
    // {
    //     RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Date/Time: %ld", result.get()->humantime);
    // } 
    // else 
    // {
    //     RCLCPP_ERROR(rclcpp::get_logger("rclcpp"), "Failed to call service add_two_ints");
    // }
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<time_types::msg::Time>::SharedPtr publisher_;
  rclcpp::Client<time_types::srv::ConvertTime>::SharedPtr client_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<PublisherClient>());
  rclcpp::shutdown();
  return 0;
}
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

#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "time_types/msg/time.hpp"
using std::placeholders::_1;

class SubscriberServer : public rclcpp::Node
{
public:
  SubscriberServer()
  : Node("timesubscriber")
  {
    subscription_ = this->create_subscription<time_types::msg::Time>(
      "unix_epoch_time", 10, std::bind(&SubscriberServer::topic_callback, this, _1));
    server_ = this->create_service<time_types::msg::Time>("convert_time", std::bind(&PublisherClient::send_response_message))

  }

private:
  void send_response_message(const std::shared_ptr<time_types::srv::ConvertTime::Request> request,
          std::shared_ptr<time_types::srv::ConvertTime::Response>      response) 
  {

  }
 

  void topic_callback(const time_types::msg::Time::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "Unix Epoch Time: %ld", msg->time);
  }
  rclcpp::Subscription<time_types::msg::Time>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<SubscriberServer>());
  rclcpp::shutdown();
  return 0;
}

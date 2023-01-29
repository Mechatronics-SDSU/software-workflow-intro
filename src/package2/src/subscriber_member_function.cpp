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
using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
public:
  MinimalSubscriber()
  : Node("timesubscriber")
  {
    subscription_ = this->create_subscription<std_msgs::msg::String>(
      "unix_epoch_time", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
  }

private:
  void ConvertToHumanTime(long int UnixEpochTime) 
  {
    long year = 1970 + (UnixEpochTime / 31536000);
    long month = 1 + ((UnixEpochTime / 2628288) % 12);
    long day = 1 + ((UnixEpochTime / 86400) % 30);
    long hour = 0 + ((UnixEpochTime / 3600) % 24 );
    long minute = 0 + ((UnixEpochTime / 60) % 60 );

    printf("The Date Is: %ld/%ld/%ld and the time is %ld:%ld", year, month, day, hour, minute); 
  }
  void topic_callback(const std_msgs::msg::String::SharedPtr msg) const
  {
    RCLCPP_INFO(this->get_logger(), "Unix Epoch Time: '%ld'", msg->data);
    // ConvertToHumanTime(msg);
  }
  rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}

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

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("timepublisher"), count_(0)
  {
    publisher_ = this->create_publisher<std_msgs::msg::String>("unix_epoch_time", 10);
    timer_ = this->create_wall_timer(
      5000ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  long UnixEpochTime() 
  {
     return (long)std::time(0); //Returns UTC in Seconds
  }
  void ConvertToHumanTime(long int UnixEpochTime) 
  {
    long year = 1970 + (UnixEpochTime / 31536000);
    long month = 1 + ((UnixEpochTime / 2628288) % 12);
    long day = 1 + ((UnixEpochTime / 86400) % 30);
    long hour = 0 + ((UnixEpochTime / 3600) % 24 );
    long minute = 0 + ((UnixEpochTime / 60) % 60 );

    printf("The Date Is: %ld/%ld/%ld and the time is %ld:%ld", year, month, day, hour, minute); 
  }
  void timer_callback()
  {
    auto message = std_msgs::msg::String();
    message.data = UnixEpochTime();
    RCLCPP_INFO(this->get_logger(), "Publishing: Unix Epoch Time");
>>>>>>> parent of 7aa59ed... client/server branch initial commit
    publisher_->publish(message);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
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
#include <iostream>
#include <ctime>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */
 

const auto p1 = std::chrono::system_clock::now();
long int sec = 
(std::chrono::duration_cast<std::chrono::seconds>(p1.time_since_epoch()).count()) + 5;

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
  : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<std_msgs::msg::String>("topic", 10);
    timer_ = this->create_wall_timer(
      5000ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = std_msgs::msg::String();
    message.data = std::to_string(sec);
    sec = sec + 5;
    RCLCPP_INFO(this->get_logger(), "Unix Epoch Time in seconds: '%s'", message.data.c_str());
    long int yrsRem = (sec % 31556926) + 2629743 + 172800 + 32400 + 120 + 40;
    long int mnthsRem = yrsRem % 2629743;
    long int wksRem = mnthsRem % 604800;
    long int dayRem = wksRem % 86400;
    long int hrsRem = dayRem % 3600;
    long int minsRem = hrsRem % 60;
    message.data = std::to_string(sec / 31556926) + " years " + ": " + std::to_string(yrsRem / 2629743) + " months " + ": " + std::to_string(mnthsRem / 604800) + " weeks " + ": " + std::to_string(wksRem / 86400) + " days " + ": " + std::to_string(dayRem / 3600) + " hrs " + ": " + std::to_string(hrsRem / 60) + " min " + ": " + std::to_string(minsRem) + " secs";
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

#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "custom_interfaces/msg/read_time.hpp"
#include "custom_interfaces/msg/unix_time.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class timepublisher : public rclcpp::Node
{
  public:
    timepublisher()
    : Node("timepublisher"), count_(0)
    {
    subscription_ = this->create_subscription<custom_interfaces::msg::ReadTime>(          // 
      "readdate_topic", 10, std::bind(&timepublisher::topic_callback, this, std::placeholders::_1));
      publisher_ = this->create_publisher<custom_interfaces::msg::UnixTime>("unix_ep_time", 10);
      timer_ = this->create_wall_timer(
      5s, std::bind(&timepublisher::timer_callback, this));
    }

  private:
void topic_callback(const custom_interfaces::msg::ReadTime::SharedPtr msg) const
    {
    	RCLCPP_INFO(this->get_logger(), "In topic_callback");
        RCLCPP_INFO(this->get_logger(), "I heard: '%s'", msg->readable_time.c_str());
    }
    void timer_callback()
    {
      auto message = custom_interfaces::msg::UnixTime();
      message.unixepoch_date =  std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
      RCLCPP_INFO(this->get_logger(), "Publishing: '%d'seconds from epoch", message.unixepoch_date);
      publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<custom_interfaces::msg::UnixTime>::SharedPtr publisher_;
    rclcpp::Subscription<custom_interfaces::msg::ReadTime>::SharedPtr subscription_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<timepublisher>());
  rclcpp::shutdown();
  return 0;
}

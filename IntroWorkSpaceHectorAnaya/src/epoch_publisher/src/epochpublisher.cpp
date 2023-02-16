#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "custom_interfaces/msg/send_epoch_time.hpp"
#include "custom_interfaces/msg/send_read_date.hpp"

using namespace std::chrono_literals;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class epochpublisher : public rclcpp::Node
{
  public:
    epochpublisher()
    : Node("time_publisher"), count_(0)
    {
        subscription_ = this->create_subscription<custom_interfaces::msg::SendReadDate>(
        "date_topic", 10, std::bind(&epochpublisher::topic_callback, this, std::placeholders::_1));
        publisher_ = this->create_publisher<custom_interfaces::msg::SendEpochTime>("epoch_topic", 10);
        timer_ = this->create_wall_timer(5s, std::bind(&epochpublisher::timer_callback, this));
    }

  private:
    void topic_callback(const custom_interfaces::msg::SendReadDate::SharedPtr msg) const
    {
        RCLCPP_INFO(this->get_logger(), "Today is %s", msg->readable_date.c_str());
    }
    void timer_callback()
    {
        auto message = custom_interfaces::msg::SendEpochTime();
        message.epoch_date = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        publisher_->publish(message);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<custom_interfaces::msg::SendEpochTime>::SharedPtr publisher_;
    rclcpp::Subscription<custom_interfaces::msg::SendReadDate>::SharedPtr subscription_;
    size_t count_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<epochpublisher>());
  rclcpp::shutdown();
  return 0;
}
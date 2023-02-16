#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "custom_interfaces/msg/send_epoch_time.hpp"
#include "custom_interfaces/msg/send_read_date.hpp"
using std::placeholders::_1;

class datepublisher : public rclcpp::Node
{
  public:
    datepublisher()
    : Node("time_subscriber")
    {
      publisher_ = this->create_publisher<custom_interfaces::msg::SendReadDate>("date_topic", 10);
      subscription_ = this->create_subscription<custom_interfaces::msg::SendEpochTime>(
      "epoch_topic", 10, std::bind(&datepublisher::topic_callback, this, _1));
    }

  private:

    void currMonth()
    {
      if((yrs+1970)%4 == 0)
        leapday = 1;
      else
        leapday = 0;

      if(days < 31){
        months = 1;
        return;
      }if(days < 59 + leapday){
        months = 2;
        days = days - 31;
        return;
      }if(days < 90 + leapday){
        months = 3;
        days = days - 59 - leapday;
        return;
      }if(days < 120 + leapday){
        months = 4;
        days = days - 90 - leapday;
        return;
      }if(days < 151 + leapday){
        months = 5;
        days = days - 120 - leapday;
        return;
      }if(days < 181 + leapday){
        months = 6;
        days = days - 151 - leapday;
        return;
      }if(days < 212 + leapday){
        months = 7;
        days = days - 181 - leapday;
        return;
      }if(days < 243 + leapday){
        months = 8;
        days = days - 212 - leapday;
        return;
      }if(days < 273 + leapday){
        months = 9;
        days = days - 243 - leapday;
        return;
      }if(days < 304 + leapday){
        months = 10;
        days = days - 273 - leapday;
        return;
      }if(days < 334 + leapday){
        months = 11;
        days = days - 304 - leapday;
        return;
      }if(days < 365 + leapday){
        months = 12;
        days = days - 334 - leapday;
        return;
      }
    }

    void convert_epoch_time(long seconds)
    {
      yrs = std::floor(seconds/31536000);
      secs = seconds % 60;
      mins = (seconds/60)% 60;
      hrs = ((seconds/3600)-8)%12;
      days = (((seconds/3600)-8)/24) - (yrs*365) - 12;
      currMonth();
      sprintf(toReturn, "%d/%d/%d %d:%d:%d", months, days, yrs+1970, hrs, mins, secs);
    }

    void topic_callback(const custom_interfaces::msg::SendEpochTime::SharedPtr msg)
    {
      auto message = custom_interfaces::msg::SendReadDate();
      convert_epoch_time(msg->epoch_date);
      message.readable_date = toReturn;
      RCLCPP_INFO(this->get_logger(), "%d seconds since epoch", msg->epoch_date);
      publisher_ -> publish(message);
    }
    rclcpp::Subscription<custom_interfaces::msg::SendEpochTime>::SharedPtr subscription_;
    rclcpp::Publisher<custom_interfaces::msg::SendReadDate>::SharedPtr publisher_;
    char toReturn[100];
    int yrs;
    int months;
    int days;
    int hrs;
    int mins;
    int secs;
    int leapday;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<datepublisher>());
  rclcpp::shutdown();
  return 0;
}

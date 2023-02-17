#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "custom_interfaces/msg/read_time.hpp"
#include "custom_interfaces/msg/unix_time.hpp"
using std::placeholders::_1;

class time_subscriber : public rclcpp::Node
{
public:
  time_subscriber()
  : Node("time_subscriber")
  {
     publisher_ = this->create_publisher<custom_interfaces::msg::ReadTime>("readdate_topic", 10);
      subscription_ = this->create_subscription<custom_interfaces::msg::UnixTime>(
      "unix_ep_time", 10, std::bind(&time_subscriber::topic_callback, this, _1));
  }

private:
void currMonth()
    {
      if((years+1970)%4 == 0)
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
      years = std::floor(seconds/31536000);
      se = seconds % 60;
      minutes = (seconds/60)% 60;
      hours = ((seconds/3600)-8)%12;
      days = (((seconds/3600)-8)/24) - (years*365) - 12;
      currMonth();
      sprintf(toReturn, "%d/%d/%d %d:%d:%d", months, days, years+1970, hours, minutes, se);
    }
    
    
  void topic_callback(const custom_interfaces::msg::UnixTime::SharedPtr msg) 
  {
   RCLCPP_INFO(this->get_logger(), "In topic callback: ");
    auto message = custom_interfaces::msg::ReadTime();
      convert_epoch_time(msg->unixepoch_date);
      message.readable_time = toReturn;
      RCLCPP_INFO(this->get_logger(), "I heard: '%d'", msg->unixepoch_date);
      RCLCPP_INFO(this->get_logger(), "Sending: '%s'", message.readable_time.c_str());
      publisher_ -> publish(message);
  }
 
rclcpp::Subscription<custom_interfaces::msg::UnixTime>::SharedPtr subscription_;
    rclcpp::Publisher<custom_interfaces::msg::ReadTime>::SharedPtr publisher_;
    char toReturn[100];
    int years;
    int months;
    int days;
    int hours;
    int minutes;
    int se;
    int leapday;     
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<time_subscriber>());
  rclcpp::shutdown();
  return 0;
}

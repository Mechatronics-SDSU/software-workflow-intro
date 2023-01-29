#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <memory>
#include <vector>

//request->UnixTime will be seconds 140876390

vector<long> convert(long UnixEpochTIme) { 
    long year = 1970 + (UnixEpochTime / 31536000);
    long month = 1 + ((UnixEpochTime / 2628288) % 12);
    long day = 1 + ((UnixEpochTime / 86400) % 30);
    long hour = 0 + ((UnixEpochTime / 3600) % 24 );
    long minute = 0 + ((UnixEpochTime / 60) % 60 );

    vector<long> HumanTime = {year, month, day, hour, minute};
}


void UnixToHumanTime(const std::shared_ptr<example_interfaces::srv::convertTime::Request> request,
          std::shared_ptr<example_interfaces::srv::convertTime::Response> response)
{
  response->HumanTime = convert(request->UnixTime);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld",
                request->UnixTime);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->HumanTime);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("convert_time_server");

  rclcpp::Service<example_interfaces::srv::convertTime>::SharedPtr service =
    node->create_service<example_interfaces::srv::convertTime>("convert_time", &UnixToHumanTime);

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to convert time.");

  rclcpp::spin(node);
  rclcpp::shutdown();
}
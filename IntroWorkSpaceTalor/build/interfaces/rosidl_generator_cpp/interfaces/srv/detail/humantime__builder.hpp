// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:srv/Humantime.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__SRV__DETAIL__HUMANTIME__BUILDER_HPP_
#define INTERFACES__SRV__DETAIL__HUMANTIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/srv/detail/humantime__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Humantime_Request_unixtime
{
public:
  Init_Humantime_Request_unixtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Humantime_Request unixtime(::interfaces::srv::Humantime_Request::_unixtime_type arg)
  {
    msg_.unixtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Humantime_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Humantime_Request>()
{
  return interfaces::srv::builder::Init_Humantime_Request_unixtime();
}

}  // namespace interfaces


namespace interfaces
{

namespace srv
{

namespace builder
{

class Init_Humantime_Response_humantime
{
public:
  Init_Humantime_Response_humantime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::srv::Humantime_Response humantime(::interfaces::srv::Humantime_Response::_humantime_type arg)
  {
    msg_.humantime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::srv::Humantime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::srv::Humantime_Response>()
{
  return interfaces::srv::builder::Init_Humantime_Response_humantime();
}

}  // namespace interfaces

#endif  // INTERFACES__SRV__DETAIL__HUMANTIME__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from time_types:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__SRV__DETAIL__CONVERT_TIME__BUILDER_HPP_
#define TIME_TYPES__SRV__DETAIL__CONVERT_TIME__BUILDER_HPP_

#include "time_types/srv/detail/convert_time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace time_types
{

namespace srv
{

namespace builder
{

class Init_ConvertTime_Request_unixtime
{
public:
  Init_ConvertTime_Request_unixtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::time_types::srv::ConvertTime_Request unixtime(::time_types::srv::ConvertTime_Request::_unixtime_type arg)
  {
    msg_.unixtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_types::srv::ConvertTime_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_types::srv::ConvertTime_Request>()
{
  return time_types::srv::builder::Init_ConvertTime_Request_unixtime();
}

}  // namespace time_types


namespace time_types
{

namespace srv
{

namespace builder
{

class Init_ConvertTime_Response_humantime
{
public:
  Init_ConvertTime_Response_humantime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::time_types::srv::ConvertTime_Response humantime(::time_types::srv::ConvertTime_Response::_humantime_type arg)
  {
    msg_.humantime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_types::srv::ConvertTime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_types::srv::ConvertTime_Response>()
{
  return time_types::srv::builder::Init_ConvertTime_Response_humantime();
}

}  // namespace time_types

#endif  // TIME_TYPES__SRV__DETAIL__CONVERT_TIME__BUILDER_HPP_

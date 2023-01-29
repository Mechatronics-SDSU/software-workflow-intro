// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from package2:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE2__SRV__DETAIL__CONVERT_TIME__BUILDER_HPP_
#define PACKAGE2__SRV__DETAIL__CONVERT_TIME__BUILDER_HPP_

#include "package2/srv/detail/convert_time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace package2
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
  ::package2::srv::ConvertTime_Request unixtime(::package2::srv::ConvertTime_Request::_unixtime_type arg)
  {
    msg_.unixtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package2::srv::ConvertTime_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::package2::srv::ConvertTime_Request>()
{
  return package2::srv::builder::Init_ConvertTime_Request_unixtime();
}

}  // namespace package2


namespace package2
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
  ::package2::srv::ConvertTime_Response humantime(::package2::srv::ConvertTime_Response::_humantime_type arg)
  {
    msg_.humantime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package2::srv::ConvertTime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::package2::srv::ConvertTime_Response>()
{
  return package2::srv::builder::Init_ConvertTime_Response_humantime();
}

}  // namespace package2

#endif  // PACKAGE2__SRV__DETAIL__CONVERT_TIME__BUILDER_HPP_

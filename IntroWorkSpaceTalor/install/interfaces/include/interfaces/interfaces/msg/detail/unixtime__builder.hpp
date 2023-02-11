// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Unixtime.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__UNIXTIME__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__UNIXTIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/unixtime__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Unixtime_unixtime
{
public:
  Init_Unixtime_unixtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces::msg::Unixtime unixtime(::interfaces::msg::Unixtime::_unixtime_type arg)
  {
    msg_.unixtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Unixtime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Unixtime>()
{
  return interfaces::msg::builder::Init_Unixtime_unixtime();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__UNIXTIME__BUILDER_HPP_

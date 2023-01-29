// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from time_types:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__MSG__DETAIL__TIME__BUILDER_HPP_
#define TIME_TYPES__MSG__DETAIL__TIME__BUILDER_HPP_

#include "time_types/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace time_types
{

namespace msg
{

namespace builder
{

class Init_Time_time
{
public:
  Init_Time_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::time_types::msg::Time time(::time_types::msg::Time::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::time_types::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::time_types::msg::Time>()
{
  return time_types::msg::builder::Init_Time_time();
}

}  // namespace time_types

#endif  // TIME_TYPES__MSG__DETAIL__TIME__BUILDER_HPP_

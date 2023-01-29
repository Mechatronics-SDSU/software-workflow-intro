// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from package1:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE1__MSG__DETAIL__TIME__BUILDER_HPP_
#define PACKAGE1__MSG__DETAIL__TIME__BUILDER_HPP_

#include "package1/msg/detail/time__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace package1
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
  ::package1::msg::Time time(::package1::msg::Time::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::package1::msg::Time msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::package1::msg::Time>()
{
  return package1::msg::builder::Init_Time_time();
}

}  // namespace package1

#endif  // PACKAGE1__MSG__DETAIL__TIME__BUILDER_HPP_

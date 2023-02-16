// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:msg/SendReadDate.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__BUILDER_HPP_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__BUILDER_HPP_

#include "custom_interfaces/msg/detail/send_read_date__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces
{

namespace msg
{

namespace builder
{

class Init_SendReadDate_readable_date
{
public:
  Init_SendReadDate_readable_date()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::msg::SendReadDate readable_date(::custom_interfaces::msg::SendReadDate::_readable_date_type arg)
  {
    msg_.readable_date = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::msg::SendReadDate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::msg::SendReadDate>()
{
  return custom_interfaces::msg::builder::Init_SendReadDate_readable_date();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__BUILDER_HPP_

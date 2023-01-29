// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from time_types:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__MSG__DETAIL__TIME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TIME_TYPES__MSG__DETAIL__TIME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "time_types/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "time_types/msg/detail/time__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace time_types
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
cdr_serialize(
  const time_types::msg::Time & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  time_types::msg::Time & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
get_serialized_size(
  const time_types::msg::Time & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace time_types

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_types, msg, Time)();

#ifdef __cplusplus
}
#endif

#endif  // TIME_TYPES__MSG__DETAIL__TIME__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

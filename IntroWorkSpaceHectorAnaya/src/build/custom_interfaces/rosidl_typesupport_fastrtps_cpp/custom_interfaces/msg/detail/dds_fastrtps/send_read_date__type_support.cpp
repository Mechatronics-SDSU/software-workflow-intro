// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from custom_interfaces:msg/SendReadDate.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/send_read_date__rosidl_typesupport_fastrtps_cpp.hpp"
#include "custom_interfaces/msg/detail/send_read_date__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace custom_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_serialize(
  const custom_interfaces::msg::SendReadDate & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: readable_date
  cdr << ros_message.readable_date;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  custom_interfaces::msg::SendReadDate & ros_message)
{
  // Member: readable_date
  cdr >> ros_message.readable_date;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
get_serialized_size(
  const custom_interfaces::msg::SendReadDate & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: readable_date
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.readable_date.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_custom_interfaces
max_serialized_size_SendReadDate(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: readable_date
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _SendReadDate__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const custom_interfaces::msg::SendReadDate *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SendReadDate__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<custom_interfaces::msg::SendReadDate *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SendReadDate__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const custom_interfaces::msg::SendReadDate *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SendReadDate__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SendReadDate(full_bounded, 0);
}

static message_type_support_callbacks_t _SendReadDate__callbacks = {
  "custom_interfaces::msg",
  "SendReadDate",
  _SendReadDate__cdr_serialize,
  _SendReadDate__cdr_deserialize,
  _SendReadDate__get_serialized_size,
  _SendReadDate__max_serialized_size
};

static rosidl_message_type_support_t _SendReadDate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SendReadDate__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace custom_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_custom_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<custom_interfaces::msg::SendReadDate>()
{
  return &custom_interfaces::msg::typesupport_fastrtps_cpp::_SendReadDate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, custom_interfaces, msg, SendReadDate)() {
  return &custom_interfaces::msg::typesupport_fastrtps_cpp::_SendReadDate__handle;
}

#ifdef __cplusplus
}
#endif

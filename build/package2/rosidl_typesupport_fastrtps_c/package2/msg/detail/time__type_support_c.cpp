// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from package2:msg/Time.idl
// generated code does not contain a copyright notice
#include "package2/msg/detail/time__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "package2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "package2/msg/detail/time__struct.h"
#include "package2/msg/detail/time__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Time__ros_msg_type = package2__msg__Time;

static bool _Time__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Time__ros_msg_type * ros_message = static_cast<const _Time__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr << ros_message->time;
  }

  return true;
}

static bool _Time__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Time__ros_msg_type * ros_message = static_cast<_Time__ros_msg_type *>(untyped_ros_message);
  // Field name: time
  {
    cdr >> ros_message->time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_package2
size_t get_serialized_size_package2__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Time__ros_msg_type * ros_message = static_cast<const _Time__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Time__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_package2__msg__Time(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_package2
size_t max_serialized_size_package2__msg__Time(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Time__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_package2__msg__Time(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Time = {
  "package2::msg",
  "Time",
  _Time__cdr_serialize,
  _Time__cdr_deserialize,
  _Time__get_serialized_size,
  _Time__max_serialized_size
};

static rosidl_message_type_support_t _Time__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Time,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, package2, msg, Time)() {
  return &_Time__type_support;
}

#if defined(__cplusplus)
}
#endif

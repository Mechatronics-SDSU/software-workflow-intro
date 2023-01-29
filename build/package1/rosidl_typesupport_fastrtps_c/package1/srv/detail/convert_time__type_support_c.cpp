// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from package1:srv/ConvertTime.idl
// generated code does not contain a copyright notice
#include "package1/srv/detail/convert_time__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "package1/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "package1/srv/detail/convert_time__struct.h"
#include "package1/srv/detail/convert_time__functions.h"
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


using _ConvertTime_Request__ros_msg_type = package1__srv__ConvertTime_Request;

static bool _ConvertTime_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConvertTime_Request__ros_msg_type * ros_message = static_cast<const _ConvertTime_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: unixtime
  {
    cdr << ros_message->unixtime;
  }

  return true;
}

static bool _ConvertTime_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConvertTime_Request__ros_msg_type * ros_message = static_cast<_ConvertTime_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: unixtime
  {
    cdr >> ros_message->unixtime;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_package1
size_t get_serialized_size_package1__srv__ConvertTime_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConvertTime_Request__ros_msg_type * ros_message = static_cast<const _ConvertTime_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name unixtime
  {
    size_t item_size = sizeof(ros_message->unixtime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConvertTime_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_package1__srv__ConvertTime_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_package1
size_t max_serialized_size_package1__srv__ConvertTime_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: unixtime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ConvertTime_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_package1__srv__ConvertTime_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConvertTime_Request = {
  "package1::srv",
  "ConvertTime_Request",
  _ConvertTime_Request__cdr_serialize,
  _ConvertTime_Request__cdr_deserialize,
  _ConvertTime_Request__get_serialized_size,
  _ConvertTime_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConvertTime_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConvertTime_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, package1, srv, ConvertTime_Request)() {
  return &_ConvertTime_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "package1/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "package1/srv/detail/convert_time__struct.h"
// already included above
// #include "package1/srv/detail/convert_time__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


using _ConvertTime_Response__ros_msg_type = package1__srv__ConvertTime_Response;

static bool _ConvertTime_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ConvertTime_Response__ros_msg_type * ros_message = static_cast<const _ConvertTime_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: humantime
  {
    cdr << ros_message->humantime;
  }

  return true;
}

static bool _ConvertTime_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ConvertTime_Response__ros_msg_type * ros_message = static_cast<_ConvertTime_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: humantime
  {
    cdr >> ros_message->humantime;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_package1
size_t get_serialized_size_package1__srv__ConvertTime_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ConvertTime_Response__ros_msg_type * ros_message = static_cast<const _ConvertTime_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name humantime
  {
    size_t item_size = sizeof(ros_message->humantime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ConvertTime_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_package1__srv__ConvertTime_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_package1
size_t max_serialized_size_package1__srv__ConvertTime_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: humantime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _ConvertTime_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_package1__srv__ConvertTime_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ConvertTime_Response = {
  "package1::srv",
  "ConvertTime_Response",
  _ConvertTime_Response__cdr_serialize,
  _ConvertTime_Response__cdr_deserialize,
  _ConvertTime_Response__get_serialized_size,
  _ConvertTime_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConvertTime_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ConvertTime_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, package1, srv, ConvertTime_Response)() {
  return &_ConvertTime_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "package1/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "package1/srv/convert_time.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ConvertTime__callbacks = {
  "package1::srv",
  "ConvertTime",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, package1, srv, ConvertTime_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, package1, srv, ConvertTime_Response)(),
};

static rosidl_service_type_support_t ConvertTime__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ConvertTime__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, package1, srv, ConvertTime)() {
  return &ConvertTime__handle;
}

#if defined(__cplusplus)
}
#endif

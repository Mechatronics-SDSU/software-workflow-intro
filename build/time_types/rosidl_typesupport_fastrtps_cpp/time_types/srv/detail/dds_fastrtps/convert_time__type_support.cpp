// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from time_types:srv/ConvertTime.idl
// generated code does not contain a copyright notice
#include "time_types/srv/detail/convert_time__rosidl_typesupport_fastrtps_cpp.hpp"
#include "time_types/srv/detail/convert_time__struct.hpp"

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

namespace time_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
cdr_serialize(
  const time_types::srv::ConvertTime_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: unixtime
  cdr << ros_message.unixtime;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  time_types::srv::ConvertTime_Request & ros_message)
{
  // Member: unixtime
  cdr >> ros_message.unixtime;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
get_serialized_size(
  const time_types::srv::ConvertTime_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: unixtime
  {
    size_t item_size = sizeof(ros_message.unixtime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
max_serialized_size_ConvertTime_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: unixtime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ConvertTime_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const time_types::srv::ConvertTime_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConvertTime_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<time_types::srv::ConvertTime_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConvertTime_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const time_types::srv::ConvertTime_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConvertTime_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConvertTime_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _ConvertTime_Request__callbacks = {
  "time_types::srv",
  "ConvertTime_Request",
  _ConvertTime_Request__cdr_serialize,
  _ConvertTime_Request__cdr_deserialize,
  _ConvertTime_Request__get_serialized_size,
  _ConvertTime_Request__max_serialized_size
};

static rosidl_message_type_support_t _ConvertTime_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConvertTime_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace time_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_time_types
const rosidl_message_type_support_t *
get_message_type_support_handle<time_types::srv::ConvertTime_Request>()
{
  return &time_types::srv::typesupport_fastrtps_cpp::_ConvertTime_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_types, srv, ConvertTime_Request)() {
  return &time_types::srv::typesupport_fastrtps_cpp::_ConvertTime_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace time_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
cdr_serialize(
  const time_types::srv::ConvertTime_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: humantime
  cdr << ros_message.humantime;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  time_types::srv::ConvertTime_Response & ros_message)
{
  // Member: humantime
  cdr >> ros_message.humantime;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
get_serialized_size(
  const time_types::srv::ConvertTime_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: humantime
  {
    size_t item_size = sizeof(ros_message.humantime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_time_types
max_serialized_size_ConvertTime_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: humantime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _ConvertTime_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const time_types::srv::ConvertTime_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ConvertTime_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<time_types::srv::ConvertTime_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ConvertTime_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const time_types::srv::ConvertTime_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ConvertTime_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_ConvertTime_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _ConvertTime_Response__callbacks = {
  "time_types::srv",
  "ConvertTime_Response",
  _ConvertTime_Response__cdr_serialize,
  _ConvertTime_Response__cdr_deserialize,
  _ConvertTime_Response__get_serialized_size,
  _ConvertTime_Response__max_serialized_size
};

static rosidl_message_type_support_t _ConvertTime_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConvertTime_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace time_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_time_types
const rosidl_message_type_support_t *
get_message_type_support_handle<time_types::srv::ConvertTime_Response>()
{
  return &time_types::srv::typesupport_fastrtps_cpp::_ConvertTime_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_types, srv, ConvertTime_Response)() {
  return &time_types::srv::typesupport_fastrtps_cpp::_ConvertTime_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace time_types
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _ConvertTime__callbacks = {
  "time_types::srv",
  "ConvertTime",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_types, srv, ConvertTime_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_types, srv, ConvertTime_Response)(),
};

static rosidl_service_type_support_t _ConvertTime__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ConvertTime__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace time_types

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_time_types
const rosidl_service_type_support_t *
get_service_type_support_handle<time_types::srv::ConvertTime>()
{
  return &time_types::srv::typesupport_fastrtps_cpp::_ConvertTime__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, time_types, srv, ConvertTime)() {
  return &time_types::srv::typesupport_fastrtps_cpp::_ConvertTime__handle;
}

#ifdef __cplusplus
}
#endif

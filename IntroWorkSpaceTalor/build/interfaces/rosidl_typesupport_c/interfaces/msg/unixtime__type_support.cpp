// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from interfaces:msg/Unixtime.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "interfaces/msg/detail/unixtime__struct.h"
#include "interfaces/msg/detail/unixtime__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Unixtime_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Unixtime_type_support_ids_t;

static const _Unixtime_type_support_ids_t _Unixtime_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Unixtime_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Unixtime_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Unixtime_type_support_symbol_names_t _Unixtime_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, interfaces, msg, Unixtime)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, interfaces, msg, Unixtime)),
  }
};

typedef struct _Unixtime_type_support_data_t
{
  void * data[2];
} _Unixtime_type_support_data_t;

static _Unixtime_type_support_data_t _Unixtime_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Unixtime_message_typesupport_map = {
  2,
  "interfaces",
  &_Unixtime_message_typesupport_ids.typesupport_identifier[0],
  &_Unixtime_message_typesupport_symbol_names.symbol_name[0],
  &_Unixtime_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Unixtime_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Unixtime_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, interfaces, msg, Unixtime)() {
  return &::interfaces::msg::rosidl_typesupport_c::Unixtime_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from time_types:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "time_types/srv/detail/convert_time__rosidl_typesupport_introspection_c.h"
#include "time_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "time_types/srv/detail/convert_time__functions.h"
#include "time_types/srv/detail/convert_time__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_types__srv__ConvertTime_Request__init(message_memory);
}

void ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_fini_function(void * message_memory)
{
  time_types__srv__ConvertTime_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_member_array[1] = {
  {
    "unixtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_types__srv__ConvertTime_Request, unixtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_members = {
  "time_types__srv",  // message namespace
  "ConvertTime_Request",  // message name
  1,  // number of fields
  sizeof(time_types__srv__ConvertTime_Request),
  ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_member_array,  // message members
  ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_type_support_handle = {
  0,
  &ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime_Request)() {
  if (!ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_type_support_handle.typesupport_identifier) {
    ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConvertTime_Request__rosidl_typesupport_introspection_c__ConvertTime_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "time_types/srv/detail/convert_time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "time_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "time_types/srv/detail/convert_time__functions.h"
// already included above
// #include "time_types/srv/detail/convert_time__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  time_types__srv__ConvertTime_Response__init(message_memory);
}

void ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_fini_function(void * message_memory)
{
  time_types__srv__ConvertTime_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_member_array[1] = {
  {
    "humantime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(time_types__srv__ConvertTime_Response, humantime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_members = {
  "time_types__srv",  // message namespace
  "ConvertTime_Response",  // message name
  1,  // number of fields
  sizeof(time_types__srv__ConvertTime_Response),
  ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_member_array,  // message members
  ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_type_support_handle = {
  0,
  &ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_types
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime_Response)() {
  if (!ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_type_support_handle.typesupport_identifier) {
    ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ConvertTime_Response__rosidl_typesupport_introspection_c__ConvertTime_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "time_types/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "time_types/srv/detail/convert_time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_members = {
  "time_types__srv",  // service namespace
  "ConvertTime",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_Request_message_type_support_handle,
  NULL  // response message
  // time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_Response_message_type_support_handle
};

static rosidl_service_type_support_t time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_type_support_handle = {
  0,
  &time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_time_types
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime)() {
  if (!time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_type_support_handle.typesupport_identifier) {
    time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, time_types, srv, ConvertTime_Response)()->data;
  }

  return &time_types__srv__detail__convert_time__rosidl_typesupport_introspection_c__ConvertTime_service_type_support_handle;
}

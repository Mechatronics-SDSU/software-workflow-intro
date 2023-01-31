// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from time_types:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__SRV__DETAIL__CONVERT_TIME__STRUCT_H_
#define TIME_TYPES__SRV__DETAIL__CONVERT_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ConvertTime in the package time_types.
typedef struct time_types__srv__ConvertTime_Request
{
  int64_t unixtime;
} time_types__srv__ConvertTime_Request;

// Struct for a sequence of time_types__srv__ConvertTime_Request.
typedef struct time_types__srv__ConvertTime_Request__Sequence
{
  time_types__srv__ConvertTime_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_types__srv__ConvertTime_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'humantime'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/ConvertTime in the package time_types.
typedef struct time_types__srv__ConvertTime_Response
{
  rosidl_runtime_c__String humantime;
} time_types__srv__ConvertTime_Response;

// Struct for a sequence of time_types__srv__ConvertTime_Response.
typedef struct time_types__srv__ConvertTime_Response__Sequence
{
  time_types__srv__ConvertTime_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_types__srv__ConvertTime_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIME_TYPES__SRV__DETAIL__CONVERT_TIME__STRUCT_H_

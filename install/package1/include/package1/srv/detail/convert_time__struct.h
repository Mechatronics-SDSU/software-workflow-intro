// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from package1:srv/ConvertTime.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE1__SRV__DETAIL__CONVERT_TIME__STRUCT_H_
#define PACKAGE1__SRV__DETAIL__CONVERT_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ConvertTime in the package package1.
typedef struct package1__srv__ConvertTime_Request
{
  int64_t unixtime;
} package1__srv__ConvertTime_Request;

// Struct for a sequence of package1__srv__ConvertTime_Request.
typedef struct package1__srv__ConvertTime_Request__Sequence
{
  package1__srv__ConvertTime_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package1__srv__ConvertTime_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ConvertTime in the package package1.
typedef struct package1__srv__ConvertTime_Response
{
  int64_t humantime;
} package1__srv__ConvertTime_Response;

// Struct for a sequence of package1__srv__ConvertTime_Response.
typedef struct package1__srv__ConvertTime_Response__Sequence
{
  package1__srv__ConvertTime_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package1__srv__ConvertTime_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PACKAGE1__SRV__DETAIL__CONVERT_TIME__STRUCT_H_

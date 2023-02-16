// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SendReadDate.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'readable_date'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/SendReadDate in the package custom_interfaces.
typedef struct custom_interfaces__msg__SendReadDate
{
  rosidl_runtime_c__String readable_date;
} custom_interfaces__msg__SendReadDate;

// Struct for a sequence of custom_interfaces__msg__SendReadDate.
typedef struct custom_interfaces__msg__SendReadDate__Sequence
{
  custom_interfaces__msg__SendReadDate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SendReadDate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SEND_READ_DATE__STRUCT_H_

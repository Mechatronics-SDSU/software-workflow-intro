// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from time_types:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__MSG__DETAIL__TIME__STRUCT_H_
#define TIME_TYPES__MSG__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Time in the package time_types.
typedef struct time_types__msg__Time
{
  int64_t time;
} time_types__msg__Time;

// Struct for a sequence of time_types__msg__Time.
typedef struct time_types__msg__Time__Sequence
{
  time_types__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} time_types__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIME_TYPES__MSG__DETAIL__TIME__STRUCT_H_

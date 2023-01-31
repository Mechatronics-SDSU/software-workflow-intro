// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from package2:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef PACKAGE2__MSG__DETAIL__TIME__STRUCT_H_
#define PACKAGE2__MSG__DETAIL__TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Time in the package package2.
typedef struct package2__msg__Time
{
  int64_t time;
} package2__msg__Time;

// Struct for a sequence of package2__msg__Time.
typedef struct package2__msg__Time__Sequence
{
  package2__msg__Time * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} package2__msg__Time__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PACKAGE2__MSG__DETAIL__TIME__STRUCT_H_

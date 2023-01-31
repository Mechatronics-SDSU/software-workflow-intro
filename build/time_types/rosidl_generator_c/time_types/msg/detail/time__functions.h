// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from time_types:msg/Time.idl
// generated code does not contain a copyright notice

#ifndef TIME_TYPES__MSG__DETAIL__TIME__FUNCTIONS_H_
#define TIME_TYPES__MSG__DETAIL__TIME__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "time_types/msg/rosidl_generator_c__visibility_control.h"

#include "time_types/msg/detail/time__struct.h"

/// Initialize msg/Time message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * time_types__msg__Time
 * )) before or use
 * time_types__msg__Time__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
bool
time_types__msg__Time__init(time_types__msg__Time * msg);

/// Finalize msg/Time message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
void
time_types__msg__Time__fini(time_types__msg__Time * msg);

/// Create msg/Time message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * time_types__msg__Time__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
time_types__msg__Time *
time_types__msg__Time__create();

/// Destroy msg/Time message.
/**
 * It calls
 * time_types__msg__Time__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
void
time_types__msg__Time__destroy(time_types__msg__Time * msg);

/// Check for msg/Time message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
bool
time_types__msg__Time__are_equal(const time_types__msg__Time * lhs, const time_types__msg__Time * rhs);

/// Copy a msg/Time message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
bool
time_types__msg__Time__copy(
  const time_types__msg__Time * input,
  time_types__msg__Time * output);

/// Initialize array of msg/Time messages.
/**
 * It allocates the memory for the number of elements and calls
 * time_types__msg__Time__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
bool
time_types__msg__Time__Sequence__init(time_types__msg__Time__Sequence * array, size_t size);

/// Finalize array of msg/Time messages.
/**
 * It calls
 * time_types__msg__Time__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
void
time_types__msg__Time__Sequence__fini(time_types__msg__Time__Sequence * array);

/// Create array of msg/Time messages.
/**
 * It allocates the memory for the array and calls
 * time_types__msg__Time__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
time_types__msg__Time__Sequence *
time_types__msg__Time__Sequence__create(size_t size);

/// Destroy array of msg/Time messages.
/**
 * It calls
 * time_types__msg__Time__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
void
time_types__msg__Time__Sequence__destroy(time_types__msg__Time__Sequence * array);

/// Check for msg/Time message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
bool
time_types__msg__Time__Sequence__are_equal(const time_types__msg__Time__Sequence * lhs, const time_types__msg__Time__Sequence * rhs);

/// Copy an array of msg/Time messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_time_types
bool
time_types__msg__Time__Sequence__copy(
  const time_types__msg__Time__Sequence * input,
  time_types__msg__Time__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIME_TYPES__MSG__DETAIL__TIME__FUNCTIONS_H_

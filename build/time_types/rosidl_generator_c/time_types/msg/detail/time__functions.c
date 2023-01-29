// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from time_types:msg/Time.idl
// generated code does not contain a copyright notice
#include "time_types/msg/detail/time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
time_types__msg__Time__init(time_types__msg__Time * msg)
{
  if (!msg) {
    return false;
  }
  // time
  return true;
}

void
time_types__msg__Time__fini(time_types__msg__Time * msg)
{
  if (!msg) {
    return;
  }
  // time
}

bool
time_types__msg__Time__are_equal(const time_types__msg__Time * lhs, const time_types__msg__Time * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  return true;
}

bool
time_types__msg__Time__copy(
  const time_types__msg__Time * input,
  time_types__msg__Time * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  return true;
}

time_types__msg__Time *
time_types__msg__Time__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__msg__Time * msg = (time_types__msg__Time *)allocator.allocate(sizeof(time_types__msg__Time), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_types__msg__Time));
  bool success = time_types__msg__Time__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
time_types__msg__Time__destroy(time_types__msg__Time * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    time_types__msg__Time__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
time_types__msg__Time__Sequence__init(time_types__msg__Time__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__msg__Time * data = NULL;

  if (size) {
    data = (time_types__msg__Time *)allocator.zero_allocate(size, sizeof(time_types__msg__Time), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_types__msg__Time__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_types__msg__Time__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
time_types__msg__Time__Sequence__fini(time_types__msg__Time__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      time_types__msg__Time__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

time_types__msg__Time__Sequence *
time_types__msg__Time__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__msg__Time__Sequence * array = (time_types__msg__Time__Sequence *)allocator.allocate(sizeof(time_types__msg__Time__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = time_types__msg__Time__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
time_types__msg__Time__Sequence__destroy(time_types__msg__Time__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    time_types__msg__Time__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
time_types__msg__Time__Sequence__are_equal(const time_types__msg__Time__Sequence * lhs, const time_types__msg__Time__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!time_types__msg__Time__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
time_types__msg__Time__Sequence__copy(
  const time_types__msg__Time__Sequence * input,
  time_types__msg__Time__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(time_types__msg__Time);
    time_types__msg__Time * data =
      (time_types__msg__Time *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!time_types__msg__Time__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          time_types__msg__Time__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!time_types__msg__Time__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

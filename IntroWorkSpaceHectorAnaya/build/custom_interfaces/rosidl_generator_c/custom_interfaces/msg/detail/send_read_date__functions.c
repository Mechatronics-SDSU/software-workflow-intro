// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/SendReadDate.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/send_read_date__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `readable_date`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_interfaces__msg__SendReadDate__init(custom_interfaces__msg__SendReadDate * msg)
{
  if (!msg) {
    return false;
  }
  // readable_date
  if (!rosidl_runtime_c__String__init(&msg->readable_date)) {
    custom_interfaces__msg__SendReadDate__fini(msg);
    return false;
  }
  return true;
}

void
custom_interfaces__msg__SendReadDate__fini(custom_interfaces__msg__SendReadDate * msg)
{
  if (!msg) {
    return;
  }
  // readable_date
  rosidl_runtime_c__String__fini(&msg->readable_date);
}

bool
custom_interfaces__msg__SendReadDate__are_equal(const custom_interfaces__msg__SendReadDate * lhs, const custom_interfaces__msg__SendReadDate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // readable_date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->readable_date), &(rhs->readable_date)))
  {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__SendReadDate__copy(
  const custom_interfaces__msg__SendReadDate * input,
  custom_interfaces__msg__SendReadDate * output)
{
  if (!input || !output) {
    return false;
  }
  // readable_date
  if (!rosidl_runtime_c__String__copy(
      &(input->readable_date), &(output->readable_date)))
  {
    return false;
  }
  return true;
}

custom_interfaces__msg__SendReadDate *
custom_interfaces__msg__SendReadDate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__SendReadDate * msg = (custom_interfaces__msg__SendReadDate *)allocator.allocate(sizeof(custom_interfaces__msg__SendReadDate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__SendReadDate));
  bool success = custom_interfaces__msg__SendReadDate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__SendReadDate__destroy(custom_interfaces__msg__SendReadDate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__SendReadDate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__SendReadDate__Sequence__init(custom_interfaces__msg__SendReadDate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__SendReadDate * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__SendReadDate *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__SendReadDate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__SendReadDate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__SendReadDate__fini(&data[i - 1]);
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
custom_interfaces__msg__SendReadDate__Sequence__fini(custom_interfaces__msg__SendReadDate__Sequence * array)
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
      custom_interfaces__msg__SendReadDate__fini(&array->data[i]);
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

custom_interfaces__msg__SendReadDate__Sequence *
custom_interfaces__msg__SendReadDate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__SendReadDate__Sequence * array = (custom_interfaces__msg__SendReadDate__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__SendReadDate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__SendReadDate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__SendReadDate__Sequence__destroy(custom_interfaces__msg__SendReadDate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__SendReadDate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__SendReadDate__Sequence__are_equal(const custom_interfaces__msg__SendReadDate__Sequence * lhs, const custom_interfaces__msg__SendReadDate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__SendReadDate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__SendReadDate__Sequence__copy(
  const custom_interfaces__msg__SendReadDate__Sequence * input,
  custom_interfaces__msg__SendReadDate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__SendReadDate);
    custom_interfaces__msg__SendReadDate * data =
      (custom_interfaces__msg__SendReadDate *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__SendReadDate__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__SendReadDate__fini(&data[i]);
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
    if (!custom_interfaces__msg__SendReadDate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

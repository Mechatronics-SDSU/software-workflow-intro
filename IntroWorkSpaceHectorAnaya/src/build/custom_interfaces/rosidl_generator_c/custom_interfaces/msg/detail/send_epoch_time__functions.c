// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_interfaces:msg/SendEpochTime.idl
// generated code does not contain a copyright notice
#include "custom_interfaces/msg/detail/send_epoch_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
custom_interfaces__msg__SendEpochTime__init(custom_interfaces__msg__SendEpochTime * msg)
{
  if (!msg) {
    return false;
  }
  // epoch_date
  return true;
}

void
custom_interfaces__msg__SendEpochTime__fini(custom_interfaces__msg__SendEpochTime * msg)
{
  if (!msg) {
    return;
  }
  // epoch_date
}

bool
custom_interfaces__msg__SendEpochTime__are_equal(const custom_interfaces__msg__SendEpochTime * lhs, const custom_interfaces__msg__SendEpochTime * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // epoch_date
  if (lhs->epoch_date != rhs->epoch_date) {
    return false;
  }
  return true;
}

bool
custom_interfaces__msg__SendEpochTime__copy(
  const custom_interfaces__msg__SendEpochTime * input,
  custom_interfaces__msg__SendEpochTime * output)
{
  if (!input || !output) {
    return false;
  }
  // epoch_date
  output->epoch_date = input->epoch_date;
  return true;
}

custom_interfaces__msg__SendEpochTime *
custom_interfaces__msg__SendEpochTime__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__SendEpochTime * msg = (custom_interfaces__msg__SendEpochTime *)allocator.allocate(sizeof(custom_interfaces__msg__SendEpochTime), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_interfaces__msg__SendEpochTime));
  bool success = custom_interfaces__msg__SendEpochTime__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_interfaces__msg__SendEpochTime__destroy(custom_interfaces__msg__SendEpochTime * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_interfaces__msg__SendEpochTime__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_interfaces__msg__SendEpochTime__Sequence__init(custom_interfaces__msg__SendEpochTime__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__SendEpochTime * data = NULL;

  if (size) {
    data = (custom_interfaces__msg__SendEpochTime *)allocator.zero_allocate(size, sizeof(custom_interfaces__msg__SendEpochTime), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_interfaces__msg__SendEpochTime__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_interfaces__msg__SendEpochTime__fini(&data[i - 1]);
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
custom_interfaces__msg__SendEpochTime__Sequence__fini(custom_interfaces__msg__SendEpochTime__Sequence * array)
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
      custom_interfaces__msg__SendEpochTime__fini(&array->data[i]);
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

custom_interfaces__msg__SendEpochTime__Sequence *
custom_interfaces__msg__SendEpochTime__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_interfaces__msg__SendEpochTime__Sequence * array = (custom_interfaces__msg__SendEpochTime__Sequence *)allocator.allocate(sizeof(custom_interfaces__msg__SendEpochTime__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_interfaces__msg__SendEpochTime__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_interfaces__msg__SendEpochTime__Sequence__destroy(custom_interfaces__msg__SendEpochTime__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_interfaces__msg__SendEpochTime__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_interfaces__msg__SendEpochTime__Sequence__are_equal(const custom_interfaces__msg__SendEpochTime__Sequence * lhs, const custom_interfaces__msg__SendEpochTime__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_interfaces__msg__SendEpochTime__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_interfaces__msg__SendEpochTime__Sequence__copy(
  const custom_interfaces__msg__SendEpochTime__Sequence * input,
  custom_interfaces__msg__SendEpochTime__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_interfaces__msg__SendEpochTime);
    custom_interfaces__msg__SendEpochTime * data =
      (custom_interfaces__msg__SendEpochTime *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_interfaces__msg__SendEpochTime__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_interfaces__msg__SendEpochTime__fini(&data[i]);
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
    if (!custom_interfaces__msg__SendEpochTime__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from time_types:srv/ConvertTime.idl
// generated code does not contain a copyright notice
#include "time_types/srv/detail/convert_time__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
time_types__srv__ConvertTime_Request__init(time_types__srv__ConvertTime_Request * msg)
{
  if (!msg) {
    return false;
  }
  // unixtime
  return true;
}

void
time_types__srv__ConvertTime_Request__fini(time_types__srv__ConvertTime_Request * msg)
{
  if (!msg) {
    return;
  }
  // unixtime
}

bool
time_types__srv__ConvertTime_Request__are_equal(const time_types__srv__ConvertTime_Request * lhs, const time_types__srv__ConvertTime_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // unixtime
  if (lhs->unixtime != rhs->unixtime) {
    return false;
  }
  return true;
}

bool
time_types__srv__ConvertTime_Request__copy(
  const time_types__srv__ConvertTime_Request * input,
  time_types__srv__ConvertTime_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // unixtime
  output->unixtime = input->unixtime;
  return true;
}

time_types__srv__ConvertTime_Request *
time_types__srv__ConvertTime_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__srv__ConvertTime_Request * msg = (time_types__srv__ConvertTime_Request *)allocator.allocate(sizeof(time_types__srv__ConvertTime_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_types__srv__ConvertTime_Request));
  bool success = time_types__srv__ConvertTime_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
time_types__srv__ConvertTime_Request__destroy(time_types__srv__ConvertTime_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    time_types__srv__ConvertTime_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
time_types__srv__ConvertTime_Request__Sequence__init(time_types__srv__ConvertTime_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__srv__ConvertTime_Request * data = NULL;

  if (size) {
    data = (time_types__srv__ConvertTime_Request *)allocator.zero_allocate(size, sizeof(time_types__srv__ConvertTime_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_types__srv__ConvertTime_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_types__srv__ConvertTime_Request__fini(&data[i - 1]);
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
time_types__srv__ConvertTime_Request__Sequence__fini(time_types__srv__ConvertTime_Request__Sequence * array)
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
      time_types__srv__ConvertTime_Request__fini(&array->data[i]);
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

time_types__srv__ConvertTime_Request__Sequence *
time_types__srv__ConvertTime_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__srv__ConvertTime_Request__Sequence * array = (time_types__srv__ConvertTime_Request__Sequence *)allocator.allocate(sizeof(time_types__srv__ConvertTime_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = time_types__srv__ConvertTime_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
time_types__srv__ConvertTime_Request__Sequence__destroy(time_types__srv__ConvertTime_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    time_types__srv__ConvertTime_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
time_types__srv__ConvertTime_Request__Sequence__are_equal(const time_types__srv__ConvertTime_Request__Sequence * lhs, const time_types__srv__ConvertTime_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!time_types__srv__ConvertTime_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
time_types__srv__ConvertTime_Request__Sequence__copy(
  const time_types__srv__ConvertTime_Request__Sequence * input,
  time_types__srv__ConvertTime_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(time_types__srv__ConvertTime_Request);
    time_types__srv__ConvertTime_Request * data =
      (time_types__srv__ConvertTime_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!time_types__srv__ConvertTime_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          time_types__srv__ConvertTime_Request__fini(&data[i]);
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
    if (!time_types__srv__ConvertTime_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
time_types__srv__ConvertTime_Response__init(time_types__srv__ConvertTime_Response * msg)
{
  if (!msg) {
    return false;
  }
  // humantime
  return true;
}

void
time_types__srv__ConvertTime_Response__fini(time_types__srv__ConvertTime_Response * msg)
{
  if (!msg) {
    return;
  }
  // humantime
}

bool
time_types__srv__ConvertTime_Response__are_equal(const time_types__srv__ConvertTime_Response * lhs, const time_types__srv__ConvertTime_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // humantime
  if (lhs->humantime != rhs->humantime) {
    return false;
  }
  return true;
}

bool
time_types__srv__ConvertTime_Response__copy(
  const time_types__srv__ConvertTime_Response * input,
  time_types__srv__ConvertTime_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // humantime
  output->humantime = input->humantime;
  return true;
}

time_types__srv__ConvertTime_Response *
time_types__srv__ConvertTime_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__srv__ConvertTime_Response * msg = (time_types__srv__ConvertTime_Response *)allocator.allocate(sizeof(time_types__srv__ConvertTime_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(time_types__srv__ConvertTime_Response));
  bool success = time_types__srv__ConvertTime_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
time_types__srv__ConvertTime_Response__destroy(time_types__srv__ConvertTime_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    time_types__srv__ConvertTime_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
time_types__srv__ConvertTime_Response__Sequence__init(time_types__srv__ConvertTime_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__srv__ConvertTime_Response * data = NULL;

  if (size) {
    data = (time_types__srv__ConvertTime_Response *)allocator.zero_allocate(size, sizeof(time_types__srv__ConvertTime_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = time_types__srv__ConvertTime_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        time_types__srv__ConvertTime_Response__fini(&data[i - 1]);
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
time_types__srv__ConvertTime_Response__Sequence__fini(time_types__srv__ConvertTime_Response__Sequence * array)
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
      time_types__srv__ConvertTime_Response__fini(&array->data[i]);
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

time_types__srv__ConvertTime_Response__Sequence *
time_types__srv__ConvertTime_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  time_types__srv__ConvertTime_Response__Sequence * array = (time_types__srv__ConvertTime_Response__Sequence *)allocator.allocate(sizeof(time_types__srv__ConvertTime_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = time_types__srv__ConvertTime_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
time_types__srv__ConvertTime_Response__Sequence__destroy(time_types__srv__ConvertTime_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    time_types__srv__ConvertTime_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
time_types__srv__ConvertTime_Response__Sequence__are_equal(const time_types__srv__ConvertTime_Response__Sequence * lhs, const time_types__srv__ConvertTime_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!time_types__srv__ConvertTime_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
time_types__srv__ConvertTime_Response__Sequence__copy(
  const time_types__srv__ConvertTime_Response__Sequence * input,
  time_types__srv__ConvertTime_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(time_types__srv__ConvertTime_Response);
    time_types__srv__ConvertTime_Response * data =
      (time_types__srv__ConvertTime_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!time_types__srv__ConvertTime_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          time_types__srv__ConvertTime_Response__fini(&data[i]);
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
    if (!time_types__srv__ConvertTime_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

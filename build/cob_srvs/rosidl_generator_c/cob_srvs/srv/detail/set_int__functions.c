// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cob_srvs:srv/SetInt.idl
// generated code does not contain a copyright notice
#include "cob_srvs/srv/detail/set_int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
cob_srvs__srv__SetInt_Request__init(cob_srvs__srv__SetInt_Request * msg)
{
  if (!msg) {
    return false;
  }
  // data
  return true;
}

void
cob_srvs__srv__SetInt_Request__fini(cob_srvs__srv__SetInt_Request * msg)
{
  if (!msg) {
    return;
  }
  // data
}

bool
cob_srvs__srv__SetInt_Request__are_equal(const cob_srvs__srv__SetInt_Request * lhs, const cob_srvs__srv__SetInt_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (lhs->data != rhs->data) {
    return false;
  }
  return true;
}

bool
cob_srvs__srv__SetInt_Request__copy(
  const cob_srvs__srv__SetInt_Request * input,
  cob_srvs__srv__SetInt_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  output->data = input->data;
  return true;
}

cob_srvs__srv__SetInt_Request *
cob_srvs__srv__SetInt_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_srvs__srv__SetInt_Request * msg = (cob_srvs__srv__SetInt_Request *)allocator.allocate(sizeof(cob_srvs__srv__SetInt_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_srvs__srv__SetInt_Request));
  bool success = cob_srvs__srv__SetInt_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_srvs__srv__SetInt_Request__destroy(cob_srvs__srv__SetInt_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_srvs__srv__SetInt_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_srvs__srv__SetInt_Request__Sequence__init(cob_srvs__srv__SetInt_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_srvs__srv__SetInt_Request * data = NULL;

  if (size) {
    data = (cob_srvs__srv__SetInt_Request *)allocator.zero_allocate(size, sizeof(cob_srvs__srv__SetInt_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_srvs__srv__SetInt_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_srvs__srv__SetInt_Request__fini(&data[i - 1]);
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
cob_srvs__srv__SetInt_Request__Sequence__fini(cob_srvs__srv__SetInt_Request__Sequence * array)
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
      cob_srvs__srv__SetInt_Request__fini(&array->data[i]);
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

cob_srvs__srv__SetInt_Request__Sequence *
cob_srvs__srv__SetInt_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_srvs__srv__SetInt_Request__Sequence * array = (cob_srvs__srv__SetInt_Request__Sequence *)allocator.allocate(sizeof(cob_srvs__srv__SetInt_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_srvs__srv__SetInt_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_srvs__srv__SetInt_Request__Sequence__destroy(cob_srvs__srv__SetInt_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_srvs__srv__SetInt_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_srvs__srv__SetInt_Request__Sequence__are_equal(const cob_srvs__srv__SetInt_Request__Sequence * lhs, const cob_srvs__srv__SetInt_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_srvs__srv__SetInt_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_srvs__srv__SetInt_Request__Sequence__copy(
  const cob_srvs__srv__SetInt_Request__Sequence * input,
  cob_srvs__srv__SetInt_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_srvs__srv__SetInt_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_srvs__srv__SetInt_Request * data =
      (cob_srvs__srv__SetInt_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_srvs__srv__SetInt_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_srvs__srv__SetInt_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_srvs__srv__SetInt_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
cob_srvs__srv__SetInt_Response__init(cob_srvs__srv__SetInt_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    cob_srvs__srv__SetInt_Response__fini(msg);
    return false;
  }
  return true;
}

void
cob_srvs__srv__SetInt_Response__fini(cob_srvs__srv__SetInt_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
cob_srvs__srv__SetInt_Response__are_equal(const cob_srvs__srv__SetInt_Response * lhs, const cob_srvs__srv__SetInt_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
cob_srvs__srv__SetInt_Response__copy(
  const cob_srvs__srv__SetInt_Response * input,
  cob_srvs__srv__SetInt_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

cob_srvs__srv__SetInt_Response *
cob_srvs__srv__SetInt_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_srvs__srv__SetInt_Response * msg = (cob_srvs__srv__SetInt_Response *)allocator.allocate(sizeof(cob_srvs__srv__SetInt_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_srvs__srv__SetInt_Response));
  bool success = cob_srvs__srv__SetInt_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_srvs__srv__SetInt_Response__destroy(cob_srvs__srv__SetInt_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_srvs__srv__SetInt_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_srvs__srv__SetInt_Response__Sequence__init(cob_srvs__srv__SetInt_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_srvs__srv__SetInt_Response * data = NULL;

  if (size) {
    data = (cob_srvs__srv__SetInt_Response *)allocator.zero_allocate(size, sizeof(cob_srvs__srv__SetInt_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_srvs__srv__SetInt_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_srvs__srv__SetInt_Response__fini(&data[i - 1]);
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
cob_srvs__srv__SetInt_Response__Sequence__fini(cob_srvs__srv__SetInt_Response__Sequence * array)
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
      cob_srvs__srv__SetInt_Response__fini(&array->data[i]);
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

cob_srvs__srv__SetInt_Response__Sequence *
cob_srvs__srv__SetInt_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_srvs__srv__SetInt_Response__Sequence * array = (cob_srvs__srv__SetInt_Response__Sequence *)allocator.allocate(sizeof(cob_srvs__srv__SetInt_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_srvs__srv__SetInt_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_srvs__srv__SetInt_Response__Sequence__destroy(cob_srvs__srv__SetInt_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_srvs__srv__SetInt_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_srvs__srv__SetInt_Response__Sequence__are_equal(const cob_srvs__srv__SetInt_Response__Sequence * lhs, const cob_srvs__srv__SetInt_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_srvs__srv__SetInt_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_srvs__srv__SetInt_Response__Sequence__copy(
  const cob_srvs__srv__SetInt_Response__Sequence * input,
  cob_srvs__srv__SetInt_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_srvs__srv__SetInt_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_srvs__srv__SetInt_Response * data =
      (cob_srvs__srv__SetInt_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_srvs__srv__SetInt_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_srvs__srv__SetInt_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_srvs__srv__SetInt_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

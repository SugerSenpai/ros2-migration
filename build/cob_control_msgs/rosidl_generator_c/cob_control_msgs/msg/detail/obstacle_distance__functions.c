// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cob_control_msgs:msg/ObstacleDistance.idl
// generated code does not contain a copyright notice
#include "cob_control_msgs/msg/detail/obstacle_distance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "cob_control_msgs/msg/detail/header__functions.h"
// Member `link_of_interest`
// Member `obstacle_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `frame_vector`
// Member `nearest_point_frame_vector`
// Member `nearest_point_obstacle_vector`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
cob_control_msgs__msg__ObstacleDistance__init(cob_control_msgs__msg__ObstacleDistance * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!cob_control_msgs__msg__Header__init(&msg->header)) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
    return false;
  }
  // link_of_interest
  if (!rosidl_runtime_c__String__init(&msg->link_of_interest)) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
    return false;
  }
  // obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->obstacle_id)) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
    return false;
  }
  // distance
  // frame_vector
  if (!geometry_msgs__msg__Vector3__init(&msg->frame_vector)) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
    return false;
  }
  // nearest_point_frame_vector
  if (!geometry_msgs__msg__Vector3__init(&msg->nearest_point_frame_vector)) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
    return false;
  }
  // nearest_point_obstacle_vector
  if (!geometry_msgs__msg__Vector3__init(&msg->nearest_point_obstacle_vector)) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
    return false;
  }
  return true;
}

void
cob_control_msgs__msg__ObstacleDistance__fini(cob_control_msgs__msg__ObstacleDistance * msg)
{
  if (!msg) {
    return;
  }
  // header
  cob_control_msgs__msg__Header__fini(&msg->header);
  // link_of_interest
  rosidl_runtime_c__String__fini(&msg->link_of_interest);
  // obstacle_id
  rosidl_runtime_c__String__fini(&msg->obstacle_id);
  // distance
  // frame_vector
  geometry_msgs__msg__Vector3__fini(&msg->frame_vector);
  // nearest_point_frame_vector
  geometry_msgs__msg__Vector3__fini(&msg->nearest_point_frame_vector);
  // nearest_point_obstacle_vector
  geometry_msgs__msg__Vector3__fini(&msg->nearest_point_obstacle_vector);
}

bool
cob_control_msgs__msg__ObstacleDistance__are_equal(const cob_control_msgs__msg__ObstacleDistance * lhs, const cob_control_msgs__msg__ObstacleDistance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!cob_control_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // link_of_interest
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link_of_interest), &(rhs->link_of_interest)))
  {
    return false;
  }
  // obstacle_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obstacle_id), &(rhs->obstacle_id)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // frame_vector
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->frame_vector), &(rhs->frame_vector)))
  {
    return false;
  }
  // nearest_point_frame_vector
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->nearest_point_frame_vector), &(rhs->nearest_point_frame_vector)))
  {
    return false;
  }
  // nearest_point_obstacle_vector
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->nearest_point_obstacle_vector), &(rhs->nearest_point_obstacle_vector)))
  {
    return false;
  }
  return true;
}

bool
cob_control_msgs__msg__ObstacleDistance__copy(
  const cob_control_msgs__msg__ObstacleDistance * input,
  cob_control_msgs__msg__ObstacleDistance * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!cob_control_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // link_of_interest
  if (!rosidl_runtime_c__String__copy(
      &(input->link_of_interest), &(output->link_of_interest)))
  {
    return false;
  }
  // obstacle_id
  if (!rosidl_runtime_c__String__copy(
      &(input->obstacle_id), &(output->obstacle_id)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // frame_vector
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->frame_vector), &(output->frame_vector)))
  {
    return false;
  }
  // nearest_point_frame_vector
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->nearest_point_frame_vector), &(output->nearest_point_frame_vector)))
  {
    return false;
  }
  // nearest_point_obstacle_vector
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->nearest_point_obstacle_vector), &(output->nearest_point_obstacle_vector)))
  {
    return false;
  }
  return true;
}

cob_control_msgs__msg__ObstacleDistance *
cob_control_msgs__msg__ObstacleDistance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__msg__ObstacleDistance * msg = (cob_control_msgs__msg__ObstacleDistance *)allocator.allocate(sizeof(cob_control_msgs__msg__ObstacleDistance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cob_control_msgs__msg__ObstacleDistance));
  bool success = cob_control_msgs__msg__ObstacleDistance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cob_control_msgs__msg__ObstacleDistance__destroy(cob_control_msgs__msg__ObstacleDistance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cob_control_msgs__msg__ObstacleDistance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cob_control_msgs__msg__ObstacleDistance__Sequence__init(cob_control_msgs__msg__ObstacleDistance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__msg__ObstacleDistance * data = NULL;

  if (size) {
    data = (cob_control_msgs__msg__ObstacleDistance *)allocator.zero_allocate(size, sizeof(cob_control_msgs__msg__ObstacleDistance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cob_control_msgs__msg__ObstacleDistance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cob_control_msgs__msg__ObstacleDistance__fini(&data[i - 1]);
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
cob_control_msgs__msg__ObstacleDistance__Sequence__fini(cob_control_msgs__msg__ObstacleDistance__Sequence * array)
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
      cob_control_msgs__msg__ObstacleDistance__fini(&array->data[i]);
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

cob_control_msgs__msg__ObstacleDistance__Sequence *
cob_control_msgs__msg__ObstacleDistance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cob_control_msgs__msg__ObstacleDistance__Sequence * array = (cob_control_msgs__msg__ObstacleDistance__Sequence *)allocator.allocate(sizeof(cob_control_msgs__msg__ObstacleDistance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cob_control_msgs__msg__ObstacleDistance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cob_control_msgs__msg__ObstacleDistance__Sequence__destroy(cob_control_msgs__msg__ObstacleDistance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cob_control_msgs__msg__ObstacleDistance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cob_control_msgs__msg__ObstacleDistance__Sequence__are_equal(const cob_control_msgs__msg__ObstacleDistance__Sequence * lhs, const cob_control_msgs__msg__ObstacleDistance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cob_control_msgs__msg__ObstacleDistance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cob_control_msgs__msg__ObstacleDistance__Sequence__copy(
  const cob_control_msgs__msg__ObstacleDistance__Sequence * input,
  cob_control_msgs__msg__ObstacleDistance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cob_control_msgs__msg__ObstacleDistance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cob_control_msgs__msg__ObstacleDistance * data =
      (cob_control_msgs__msg__ObstacleDistance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cob_control_msgs__msg__ObstacleDistance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cob_control_msgs__msg__ObstacleDistance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cob_control_msgs__msg__ObstacleDistance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

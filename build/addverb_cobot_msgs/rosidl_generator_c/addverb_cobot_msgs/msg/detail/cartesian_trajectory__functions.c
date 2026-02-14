// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from addverb_cobot_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory_point__functions.h"

bool
addverb_cobot_msgs__msg__CartesianTrajectory__init(addverb_cobot_msgs__msg__CartesianTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence__init(&msg->points, 0)) {
    addverb_cobot_msgs__msg__CartesianTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__msg__CartesianTrajectory__fini(addverb_cobot_msgs__msg__CartesianTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // points
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(&msg->points);
}

bool
addverb_cobot_msgs__msg__CartesianTrajectory__are_equal(const addverb_cobot_msgs__msg__CartesianTrajectory * lhs, const addverb_cobot_msgs__msg__CartesianTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__msg__CartesianTrajectory__copy(
  const addverb_cobot_msgs__msg__CartesianTrajectory * input,
  addverb_cobot_msgs__msg__CartesianTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__msg__CartesianTrajectory *
addverb_cobot_msgs__msg__CartesianTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__msg__CartesianTrajectory * msg = (addverb_cobot_msgs__msg__CartesianTrajectory *)allocator.allocate(sizeof(addverb_cobot_msgs__msg__CartesianTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__msg__CartesianTrajectory));
  bool success = addverb_cobot_msgs__msg__CartesianTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__msg__CartesianTrajectory__destroy(addverb_cobot_msgs__msg__CartesianTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__msg__CartesianTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__init(addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__msg__CartesianTrajectory * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__msg__CartesianTrajectory *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__msg__CartesianTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__msg__CartesianTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__msg__CartesianTrajectory__fini(&data[i - 1]);
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
addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__fini(addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * array)
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
      addverb_cobot_msgs__msg__CartesianTrajectory__fini(&array->data[i]);
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

addverb_cobot_msgs__msg__CartesianTrajectory__Sequence *
addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * array = (addverb_cobot_msgs__msg__CartesianTrajectory__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__msg__CartesianTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__destroy(addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__are_equal(const addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * lhs, const addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__msg__CartesianTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__msg__CartesianTrajectory__Sequence__copy(
  const addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * input,
  addverb_cobot_msgs__msg__CartesianTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__msg__CartesianTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__msg__CartesianTrajectory * data =
      (addverb_cobot_msgs__msg__CartesianTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__msg__CartesianTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__msg__CartesianTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__msg__CartesianTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

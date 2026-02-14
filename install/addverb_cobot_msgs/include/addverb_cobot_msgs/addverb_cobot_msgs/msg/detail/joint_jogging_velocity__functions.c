// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from addverb_cobot_msgs:msg/JointJoggingVelocity.idl
// generated code does not contain a copyright notice
#include "addverb_cobot_msgs/msg/detail/joint_jogging_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `jvel_scaling_factor`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
addverb_cobot_msgs__msg__JointJoggingVelocity__init(addverb_cobot_msgs__msg__JointJoggingVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // jvel_scaling_factor
  if (!rosidl_runtime_c__double__Sequence__init(&msg->jvel_scaling_factor, 0)) {
    addverb_cobot_msgs__msg__JointJoggingVelocity__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__msg__JointJoggingVelocity__fini(addverb_cobot_msgs__msg__JointJoggingVelocity * msg)
{
  if (!msg) {
    return;
  }
  // jvel_scaling_factor
  rosidl_runtime_c__double__Sequence__fini(&msg->jvel_scaling_factor);
}

bool
addverb_cobot_msgs__msg__JointJoggingVelocity__are_equal(const addverb_cobot_msgs__msg__JointJoggingVelocity * lhs, const addverb_cobot_msgs__msg__JointJoggingVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // jvel_scaling_factor
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->jvel_scaling_factor), &(rhs->jvel_scaling_factor)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__msg__JointJoggingVelocity__copy(
  const addverb_cobot_msgs__msg__JointJoggingVelocity * input,
  addverb_cobot_msgs__msg__JointJoggingVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // jvel_scaling_factor
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->jvel_scaling_factor), &(output->jvel_scaling_factor)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__msg__JointJoggingVelocity *
addverb_cobot_msgs__msg__JointJoggingVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__msg__JointJoggingVelocity * msg = (addverb_cobot_msgs__msg__JointJoggingVelocity *)allocator.allocate(sizeof(addverb_cobot_msgs__msg__JointJoggingVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__msg__JointJoggingVelocity));
  bool success = addverb_cobot_msgs__msg__JointJoggingVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__msg__JointJoggingVelocity__destroy(addverb_cobot_msgs__msg__JointJoggingVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__msg__JointJoggingVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__init(addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__msg__JointJoggingVelocity * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__msg__JointJoggingVelocity *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__msg__JointJoggingVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__msg__JointJoggingVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__msg__JointJoggingVelocity__fini(&data[i - 1]);
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
addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__fini(addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * array)
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
      addverb_cobot_msgs__msg__JointJoggingVelocity__fini(&array->data[i]);
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

addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence *
addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * array = (addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__destroy(addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__are_equal(const addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * lhs, const addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__msg__JointJoggingVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence__copy(
  const addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * input,
  addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__msg__JointJoggingVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__msg__JointJoggingVelocity * data =
      (addverb_cobot_msgs__msg__JointJoggingVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__msg__JointJoggingVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__msg__JointJoggingVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__msg__JointJoggingVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from addverb_cobot_msgs:srv/Gripper.idl
// generated code does not contain a copyright notice
#include "addverb_cobot_msgs/srv/detail/gripper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
addverb_cobot_msgs__srv__Gripper_Request__init(addverb_cobot_msgs__srv__Gripper_Request * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // grasp_force
  return true;
}

void
addverb_cobot_msgs__srv__Gripper_Request__fini(addverb_cobot_msgs__srv__Gripper_Request * msg)
{
  if (!msg) {
    return;
  }
  // position
  // grasp_force
}

bool
addverb_cobot_msgs__srv__Gripper_Request__are_equal(const addverb_cobot_msgs__srv__Gripper_Request * lhs, const addverb_cobot_msgs__srv__Gripper_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // grasp_force
  if (lhs->grasp_force != rhs->grasp_force) {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__srv__Gripper_Request__copy(
  const addverb_cobot_msgs__srv__Gripper_Request * input,
  addverb_cobot_msgs__srv__Gripper_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  output->position = input->position;
  // grasp_force
  output->grasp_force = input->grasp_force;
  return true;
}

addverb_cobot_msgs__srv__Gripper_Request *
addverb_cobot_msgs__srv__Gripper_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__srv__Gripper_Request * msg = (addverb_cobot_msgs__srv__Gripper_Request *)allocator.allocate(sizeof(addverb_cobot_msgs__srv__Gripper_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__srv__Gripper_Request));
  bool success = addverb_cobot_msgs__srv__Gripper_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__srv__Gripper_Request__destroy(addverb_cobot_msgs__srv__Gripper_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__srv__Gripper_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__srv__Gripper_Request__Sequence__init(addverb_cobot_msgs__srv__Gripper_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__srv__Gripper_Request * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__srv__Gripper_Request *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__srv__Gripper_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__srv__Gripper_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__srv__Gripper_Request__fini(&data[i - 1]);
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
addverb_cobot_msgs__srv__Gripper_Request__Sequence__fini(addverb_cobot_msgs__srv__Gripper_Request__Sequence * array)
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
      addverb_cobot_msgs__srv__Gripper_Request__fini(&array->data[i]);
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

addverb_cobot_msgs__srv__Gripper_Request__Sequence *
addverb_cobot_msgs__srv__Gripper_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__srv__Gripper_Request__Sequence * array = (addverb_cobot_msgs__srv__Gripper_Request__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__srv__Gripper_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__srv__Gripper_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__srv__Gripper_Request__Sequence__destroy(addverb_cobot_msgs__srv__Gripper_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__srv__Gripper_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__srv__Gripper_Request__Sequence__are_equal(const addverb_cobot_msgs__srv__Gripper_Request__Sequence * lhs, const addverb_cobot_msgs__srv__Gripper_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__srv__Gripper_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__srv__Gripper_Request__Sequence__copy(
  const addverb_cobot_msgs__srv__Gripper_Request__Sequence * input,
  addverb_cobot_msgs__srv__Gripper_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__srv__Gripper_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__srv__Gripper_Request * data =
      (addverb_cobot_msgs__srv__Gripper_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__srv__Gripper_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__srv__Gripper_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__srv__Gripper_Request__copy(
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
addverb_cobot_msgs__srv__Gripper_Response__init(addverb_cobot_msgs__srv__Gripper_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    addverb_cobot_msgs__srv__Gripper_Response__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__srv__Gripper_Response__fini(addverb_cobot_msgs__srv__Gripper_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
addverb_cobot_msgs__srv__Gripper_Response__are_equal(const addverb_cobot_msgs__srv__Gripper_Response * lhs, const addverb_cobot_msgs__srv__Gripper_Response * rhs)
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
addverb_cobot_msgs__srv__Gripper_Response__copy(
  const addverb_cobot_msgs__srv__Gripper_Response * input,
  addverb_cobot_msgs__srv__Gripper_Response * output)
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

addverb_cobot_msgs__srv__Gripper_Response *
addverb_cobot_msgs__srv__Gripper_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__srv__Gripper_Response * msg = (addverb_cobot_msgs__srv__Gripper_Response *)allocator.allocate(sizeof(addverb_cobot_msgs__srv__Gripper_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__srv__Gripper_Response));
  bool success = addverb_cobot_msgs__srv__Gripper_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__srv__Gripper_Response__destroy(addverb_cobot_msgs__srv__Gripper_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__srv__Gripper_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__srv__Gripper_Response__Sequence__init(addverb_cobot_msgs__srv__Gripper_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__srv__Gripper_Response * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__srv__Gripper_Response *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__srv__Gripper_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__srv__Gripper_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__srv__Gripper_Response__fini(&data[i - 1]);
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
addverb_cobot_msgs__srv__Gripper_Response__Sequence__fini(addverb_cobot_msgs__srv__Gripper_Response__Sequence * array)
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
      addverb_cobot_msgs__srv__Gripper_Response__fini(&array->data[i]);
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

addverb_cobot_msgs__srv__Gripper_Response__Sequence *
addverb_cobot_msgs__srv__Gripper_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__srv__Gripper_Response__Sequence * array = (addverb_cobot_msgs__srv__Gripper_Response__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__srv__Gripper_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__srv__Gripper_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__srv__Gripper_Response__Sequence__destroy(addverb_cobot_msgs__srv__Gripper_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__srv__Gripper_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__srv__Gripper_Response__Sequence__are_equal(const addverb_cobot_msgs__srv__Gripper_Response__Sequence * lhs, const addverb_cobot_msgs__srv__Gripper_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__srv__Gripper_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__srv__Gripper_Response__Sequence__copy(
  const addverb_cobot_msgs__srv__Gripper_Response__Sequence * input,
  addverb_cobot_msgs__srv__Gripper_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__srv__Gripper_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__srv__Gripper_Response * data =
      (addverb_cobot_msgs__srv__Gripper_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__srv__Gripper_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__srv__Gripper_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__srv__Gripper_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

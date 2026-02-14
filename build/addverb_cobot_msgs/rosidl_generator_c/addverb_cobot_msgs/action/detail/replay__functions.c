// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from addverb_cobot_msgs:action/Replay.idl
// generated code does not contain a copyright notice
#include "addverb_cobot_msgs/action/detail/replay__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `label`
#include "rosidl_runtime_c/string_functions.h"

bool
addverb_cobot_msgs__action__Replay_Goal__init(addverb_cobot_msgs__action__Replay_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__init(&msg->label)) {
    addverb_cobot_msgs__action__Replay_Goal__fini(msg);
    return false;
  }
  // iterations
  return true;
}

void
addverb_cobot_msgs__action__Replay_Goal__fini(addverb_cobot_msgs__action__Replay_Goal * msg)
{
  if (!msg) {
    return;
  }
  // label
  rosidl_runtime_c__String__fini(&msg->label);
  // iterations
}

bool
addverb_cobot_msgs__action__Replay_Goal__are_equal(const addverb_cobot_msgs__action__Replay_Goal * lhs, const addverb_cobot_msgs__action__Replay_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->label), &(rhs->label)))
  {
    return false;
  }
  // iterations
  if (lhs->iterations != rhs->iterations) {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_Goal__copy(
  const addverb_cobot_msgs__action__Replay_Goal * input,
  addverb_cobot_msgs__action__Replay_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // label
  if (!rosidl_runtime_c__String__copy(
      &(input->label), &(output->label)))
  {
    return false;
  }
  // iterations
  output->iterations = input->iterations;
  return true;
}

addverb_cobot_msgs__action__Replay_Goal *
addverb_cobot_msgs__action__Replay_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Goal * msg = (addverb_cobot_msgs__action__Replay_Goal *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_Goal));
  bool success = addverb_cobot_msgs__action__Replay_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_Goal__destroy(addverb_cobot_msgs__action__Replay_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_Goal__Sequence__init(addverb_cobot_msgs__action__Replay_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Goal * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_Goal *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_Goal__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_Goal__Sequence__fini(addverb_cobot_msgs__action__Replay_Goal__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_Goal__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_Goal__Sequence *
addverb_cobot_msgs__action__Replay_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Goal__Sequence * array = (addverb_cobot_msgs__action__Replay_Goal__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_Goal__Sequence__destroy(addverb_cobot_msgs__action__Replay_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_Goal__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_Goal__Sequence * lhs, const addverb_cobot_msgs__action__Replay_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_Goal__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_Goal__Sequence * input,
  addverb_cobot_msgs__action__Replay_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_Goal * data =
      (addverb_cobot_msgs__action__Replay_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error_code`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
addverb_cobot_msgs__action__Replay_Result__init(addverb_cobot_msgs__action__Replay_Result * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__init(&msg->error_code)) {
    addverb_cobot_msgs__action__Replay_Result__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_Result__fini(addverb_cobot_msgs__action__Replay_Result * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  rosidl_runtime_c__String__fini(&msg->error_code);
}

bool
addverb_cobot_msgs__action__Replay_Result__are_equal(const addverb_cobot_msgs__action__Replay_Result * lhs, const addverb_cobot_msgs__action__Replay_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_code), &(rhs->error_code)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_Result__copy(
  const addverb_cobot_msgs__action__Replay_Result * input,
  addverb_cobot_msgs__action__Replay_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  if (!rosidl_runtime_c__String__copy(
      &(input->error_code), &(output->error_code)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_Result *
addverb_cobot_msgs__action__Replay_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Result * msg = (addverb_cobot_msgs__action__Replay_Result *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_Result));
  bool success = addverb_cobot_msgs__action__Replay_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_Result__destroy(addverb_cobot_msgs__action__Replay_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_Result__Sequence__init(addverb_cobot_msgs__action__Replay_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Result * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_Result *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_Result__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_Result__Sequence__fini(addverb_cobot_msgs__action__Replay_Result__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_Result__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_Result__Sequence *
addverb_cobot_msgs__action__Replay_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Result__Sequence * array = (addverb_cobot_msgs__action__Replay_Result__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_Result__Sequence__destroy(addverb_cobot_msgs__action__Replay_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_Result__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_Result__Sequence * lhs, const addverb_cobot_msgs__action__Replay_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_Result__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_Result__Sequence * input,
  addverb_cobot_msgs__action__Replay_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_Result * data =
      (addverb_cobot_msgs__action__Replay_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
addverb_cobot_msgs__action__Replay_Feedback__init(addverb_cobot_msgs__action__Replay_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // iteration
  // joint_state
  if (!rosidl_runtime_c__double__Sequence__init(&msg->joint_state, 0)) {
    addverb_cobot_msgs__action__Replay_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_Feedback__fini(addverb_cobot_msgs__action__Replay_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // iteration
  // joint_state
  rosidl_runtime_c__double__Sequence__fini(&msg->joint_state);
}

bool
addverb_cobot_msgs__action__Replay_Feedback__are_equal(const addverb_cobot_msgs__action__Replay_Feedback * lhs, const addverb_cobot_msgs__action__Replay_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // iteration
  if (lhs->iteration != rhs->iteration) {
    return false;
  }
  // joint_state
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->joint_state), &(rhs->joint_state)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_Feedback__copy(
  const addverb_cobot_msgs__action__Replay_Feedback * input,
  addverb_cobot_msgs__action__Replay_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // iteration
  output->iteration = input->iteration;
  // joint_state
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->joint_state), &(output->joint_state)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_Feedback *
addverb_cobot_msgs__action__Replay_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Feedback * msg = (addverb_cobot_msgs__action__Replay_Feedback *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_Feedback));
  bool success = addverb_cobot_msgs__action__Replay_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_Feedback__destroy(addverb_cobot_msgs__action__Replay_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_Feedback__Sequence__init(addverb_cobot_msgs__action__Replay_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Feedback * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_Feedback *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_Feedback__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_Feedback__Sequence__fini(addverb_cobot_msgs__action__Replay_Feedback__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_Feedback__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_Feedback__Sequence *
addverb_cobot_msgs__action__Replay_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_Feedback__Sequence * array = (addverb_cobot_msgs__action__Replay_Feedback__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_Feedback__Sequence__destroy(addverb_cobot_msgs__action__Replay_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_Feedback__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_Feedback__Sequence * lhs, const addverb_cobot_msgs__action__Replay_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_Feedback__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_Feedback__Sequence * input,
  addverb_cobot_msgs__action__Replay_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_Feedback * data =
      (addverb_cobot_msgs__action__Replay_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "addverb_cobot_msgs/action/detail/replay__functions.h"

bool
addverb_cobot_msgs__action__Replay_SendGoal_Request__init(addverb_cobot_msgs__action__Replay_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!addverb_cobot_msgs__action__Replay_Goal__init(&msg->goal)) {
    addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(addverb_cobot_msgs__action__Replay_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  addverb_cobot_msgs__action__Replay_Goal__fini(&msg->goal);
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Request__are_equal(const addverb_cobot_msgs__action__Replay_SendGoal_Request * lhs, const addverb_cobot_msgs__action__Replay_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!addverb_cobot_msgs__action__Replay_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Request__copy(
  const addverb_cobot_msgs__action__Replay_SendGoal_Request * input,
  addverb_cobot_msgs__action__Replay_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!addverb_cobot_msgs__action__Replay_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_SendGoal_Request *
addverb_cobot_msgs__action__Replay_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_SendGoal_Request * msg = (addverb_cobot_msgs__action__Replay_SendGoal_Request *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Request));
  bool success = addverb_cobot_msgs__action__Replay_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_SendGoal_Request__destroy(addverb_cobot_msgs__action__Replay_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__init(addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_SendGoal_Request * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_SendGoal_Request *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__fini(addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence *
addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * array = (addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__destroy(addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * lhs, const addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * input,
  addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_SendGoal_Request * data =
      (addverb_cobot_msgs__action__Replay_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
addverb_cobot_msgs__action__Replay_SendGoal_Response__init(addverb_cobot_msgs__action__Replay_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    addverb_cobot_msgs__action__Replay_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_SendGoal_Response__fini(addverb_cobot_msgs__action__Replay_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Response__are_equal(const addverb_cobot_msgs__action__Replay_SendGoal_Response * lhs, const addverb_cobot_msgs__action__Replay_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Response__copy(
  const addverb_cobot_msgs__action__Replay_SendGoal_Response * input,
  addverb_cobot_msgs__action__Replay_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_SendGoal_Response *
addverb_cobot_msgs__action__Replay_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_SendGoal_Response * msg = (addverb_cobot_msgs__action__Replay_SendGoal_Response *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Response));
  bool success = addverb_cobot_msgs__action__Replay_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_SendGoal_Response__destroy(addverb_cobot_msgs__action__Replay_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__init(addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_SendGoal_Response * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_SendGoal_Response *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_SendGoal_Response__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__fini(addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_SendGoal_Response__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence *
addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * array = (addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__destroy(addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * lhs, const addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * input,
  addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_SendGoal_Response * data =
      (addverb_cobot_msgs__action__Replay_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
addverb_cobot_msgs__action__Replay_GetResult_Request__init(addverb_cobot_msgs__action__Replay_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    addverb_cobot_msgs__action__Replay_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_GetResult_Request__fini(addverb_cobot_msgs__action__Replay_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Request__are_equal(const addverb_cobot_msgs__action__Replay_GetResult_Request * lhs, const addverb_cobot_msgs__action__Replay_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Request__copy(
  const addverb_cobot_msgs__action__Replay_GetResult_Request * input,
  addverb_cobot_msgs__action__Replay_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_GetResult_Request *
addverb_cobot_msgs__action__Replay_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_GetResult_Request * msg = (addverb_cobot_msgs__action__Replay_GetResult_Request *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_GetResult_Request));
  bool success = addverb_cobot_msgs__action__Replay_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_GetResult_Request__destroy(addverb_cobot_msgs__action__Replay_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__init(addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_GetResult_Request * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_GetResult_Request *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_GetResult_Request__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__fini(addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_GetResult_Request__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence *
addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * array = (addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__destroy(addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * lhs, const addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * input,
  addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_GetResult_Request * data =
      (addverb_cobot_msgs__action__Replay_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "addverb_cobot_msgs/action/detail/replay__functions.h"

bool
addverb_cobot_msgs__action__Replay_GetResult_Response__init(addverb_cobot_msgs__action__Replay_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!addverb_cobot_msgs__action__Replay_Result__init(&msg->result)) {
    addverb_cobot_msgs__action__Replay_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_GetResult_Response__fini(addverb_cobot_msgs__action__Replay_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  addverb_cobot_msgs__action__Replay_Result__fini(&msg->result);
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Response__are_equal(const addverb_cobot_msgs__action__Replay_GetResult_Response * lhs, const addverb_cobot_msgs__action__Replay_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!addverb_cobot_msgs__action__Replay_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Response__copy(
  const addverb_cobot_msgs__action__Replay_GetResult_Response * input,
  addverb_cobot_msgs__action__Replay_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!addverb_cobot_msgs__action__Replay_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_GetResult_Response *
addverb_cobot_msgs__action__Replay_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_GetResult_Response * msg = (addverb_cobot_msgs__action__Replay_GetResult_Response *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_GetResult_Response));
  bool success = addverb_cobot_msgs__action__Replay_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_GetResult_Response__destroy(addverb_cobot_msgs__action__Replay_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__init(addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_GetResult_Response * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_GetResult_Response *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_GetResult_Response__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__fini(addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_GetResult_Response__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence *
addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * array = (addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__destroy(addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * lhs, const addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * input,
  addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_GetResult_Response * data =
      (addverb_cobot_msgs__action__Replay_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "addverb_cobot_msgs/action/detail/replay__functions.h"

bool
addverb_cobot_msgs__action__Replay_FeedbackMessage__init(addverb_cobot_msgs__action__Replay_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!addverb_cobot_msgs__action__Replay_Feedback__init(&msg->feedback)) {
    addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(addverb_cobot_msgs__action__Replay_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  addverb_cobot_msgs__action__Replay_Feedback__fini(&msg->feedback);
}

bool
addverb_cobot_msgs__action__Replay_FeedbackMessage__are_equal(const addverb_cobot_msgs__action__Replay_FeedbackMessage * lhs, const addverb_cobot_msgs__action__Replay_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!addverb_cobot_msgs__action__Replay_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_FeedbackMessage__copy(
  const addverb_cobot_msgs__action__Replay_FeedbackMessage * input,
  addverb_cobot_msgs__action__Replay_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!addverb_cobot_msgs__action__Replay_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

addverb_cobot_msgs__action__Replay_FeedbackMessage *
addverb_cobot_msgs__action__Replay_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_FeedbackMessage * msg = (addverb_cobot_msgs__action__Replay_FeedbackMessage *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(addverb_cobot_msgs__action__Replay_FeedbackMessage));
  bool success = addverb_cobot_msgs__action__Replay_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
addverb_cobot_msgs__action__Replay_FeedbackMessage__destroy(addverb_cobot_msgs__action__Replay_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__init(addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_FeedbackMessage * data = NULL;

  if (size) {
    data = (addverb_cobot_msgs__action__Replay_FeedbackMessage *)allocator.zero_allocate(size, sizeof(addverb_cobot_msgs__action__Replay_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = addverb_cobot_msgs__action__Replay_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(&data[i - 1]);
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
addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__fini(addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * array)
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
      addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(&array->data[i]);
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

addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence *
addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * array = (addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence *)allocator.allocate(sizeof(addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__destroy(addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__are_equal(const addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * lhs, const addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence__copy(
  const addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * input,
  addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(addverb_cobot_msgs__action__Replay_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    addverb_cobot_msgs__action__Replay_FeedbackMessage * data =
      (addverb_cobot_msgs__action__Replay_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!addverb_cobot_msgs__action__Replay_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          addverb_cobot_msgs__action__Replay_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!addverb_cobot_msgs__action__Replay_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

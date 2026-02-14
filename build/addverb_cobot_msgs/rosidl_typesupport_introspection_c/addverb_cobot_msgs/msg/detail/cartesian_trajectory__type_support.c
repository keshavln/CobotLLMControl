// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from addverb_cobot_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory__rosidl_typesupport_introspection_c.h"
#include "addverb_cobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory__functions.h"
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory__struct.h"


// Include directives for member types
// Member `points`
#include "addverb_cobot_msgs/msg/cartesian_trajectory_point.h"
// Member `points`
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  addverb_cobot_msgs__msg__CartesianTrajectory__init(message_memory);
}

void addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function(void * message_memory)
{
  addverb_cobot_msgs__msg__CartesianTrajectory__fini(message_memory);
}

size_t addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__points(
  const void * untyped_member)
{
  const addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points(
  const void * untyped_member, size_t index)
{
  const addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (const addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points(
  void * untyped_member, size_t index)
{
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__fetch_function__CartesianTrajectory__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const addverb_cobot_msgs__msg__CartesianTrajectoryPoint * item =
    ((const addverb_cobot_msgs__msg__CartesianTrajectoryPoint *)
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points(untyped_member, index));
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint * value =
    (addverb_cobot_msgs__msg__CartesianTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__assign_function__CartesianTrajectory__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint * item =
    ((addverb_cobot_msgs__msg__CartesianTrajectoryPoint *)
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points(untyped_member, index));
  const addverb_cobot_msgs__msg__CartesianTrajectoryPoint * value =
    (const addverb_cobot_msgs__msg__CartesianTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__points(
  void * untyped_member, size_t size)
{
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence * member =
    (addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence *)(untyped_member);
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence__fini(member);
  return addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[1] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addverb_cobot_msgs__msg__CartesianTrajectory, points),  // bytes offset in struct
    NULL,  // default value
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__size_function__CartesianTrajectory__points,  // size() function pointer
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_const_function__CartesianTrajectory__points,  // get_const(index) function pointer
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__get_function__CartesianTrajectory__points,  // get(index) function pointer
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__fetch_function__CartesianTrajectory__points,  // fetch(index, &value) function pointer
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__assign_function__CartesianTrajectory__points,  // assign(index, value) function pointer
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__resize_function__CartesianTrajectory__points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members = {
  "addverb_cobot_msgs__msg",  // message namespace
  "CartesianTrajectory",  // message name
  1,  // number of fields
  sizeof(addverb_cobot_msgs__msg__CartesianTrajectory),
  addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array,  // message members
  addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle = {
  0,
  &addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_addverb_cobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addverb_cobot_msgs, msg, CartesianTrajectory)() {
  addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addverb_cobot_msgs, msg, CartesianTrajectoryPoint)();
  if (!addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier) {
    addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &addverb_cobot_msgs__msg__CartesianTrajectory__rosidl_typesupport_introspection_c__CartesianTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from addverb_cobot_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "addverb_cobot_msgs/msg/detail/cartesian_point__rosidl_typesupport_introspection_c.h"
#include "addverb_cobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "addverb_cobot_msgs/msg/detail/cartesian_point__functions.h"
#include "addverb_cobot_msgs/msg/detail/cartesian_point__struct.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/vector3.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  addverb_cobot_msgs__msg__CartesianPoint__init(message_memory);
}

void addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_fini_function(void * message_memory)
{
  addverb_cobot_msgs__msg__CartesianPoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[2] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addverb_cobot_msgs__msg__CartesianPoint, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addverb_cobot_msgs__msg__CartesianPoint, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_members = {
  "addverb_cobot_msgs__msg",  // message namespace
  "CartesianPoint",  // message name
  2,  // number of fields
  sizeof(addverb_cobot_msgs__msg__CartesianPoint),
  addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array,  // message members
  addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle = {
  0,
  &addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_addverb_cobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, addverb_cobot_msgs, msg, CartesianPoint)() {
  addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle.typesupport_identifier) {
    addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &addverb_cobot_msgs__msg__CartesianPoint__rosidl_typesupport_introspection_c__CartesianPoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

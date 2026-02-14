// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:srv/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__STRUCT_H_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Gripper in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__srv__Gripper_Request
{
  double position;
  double grasp_force;
} addverb_cobot_msgs__srv__Gripper_Request;

// Struct for a sequence of addverb_cobot_msgs__srv__Gripper_Request.
typedef struct addverb_cobot_msgs__srv__Gripper_Request__Sequence
{
  addverb_cobot_msgs__srv__Gripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__srv__Gripper_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Gripper in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__srv__Gripper_Response
{
  bool success;
  rosidl_runtime_c__String message;
} addverb_cobot_msgs__srv__Gripper_Response;

// Struct for a sequence of addverb_cobot_msgs__srv__Gripper_Response.
typedef struct addverb_cobot_msgs__srv__Gripper_Response__Sequence
{
  addverb_cobot_msgs__srv__Gripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__srv__Gripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__STRUCT_H_

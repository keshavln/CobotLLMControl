// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:msg/JointJoggingVelocity.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__STRUCT_H_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'jvel_scaling_factor'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointJoggingVelocity in the package addverb_cobot_msgs.
/**
  * JointJoggingVelocity.msg
  *
  * This message is used to control the jogging (motion by prefixed velocity) of robot joints.
  *
  * The array 'joint_velocity_scaling_factor' should have a length equal to the number of joints of the robot.
  * Each value in the array represents the velocity scaling factor for the corresponding joint.
  * - By default, all values should be set to 0 (no movement).
  * - To jog a specific joint, set its corresponding value to a positive or negative number.
  *   For example, to move only joint 1 at normal speed: [1, 0, 0, 0, 0, 0]
  *   To move joint 1 faster: [3, 0, 0, 0, 0, 0]
  *   To move joint 2 in the opposite direction: [0, -1, 0, 0, 0, 0]
  * The magnitude of each value acts as a multiplying factor for the joint's jogging speed.
  * Only the joints with non-zero values will move.
 */
typedef struct addverb_cobot_msgs__msg__JointJoggingVelocity
{
  rosidl_runtime_c__double__Sequence jvel_scaling_factor;
} addverb_cobot_msgs__msg__JointJoggingVelocity;

// Struct for a sequence of addverb_cobot_msgs__msg__JointJoggingVelocity.
typedef struct addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence
{
  addverb_cobot_msgs__msg__JointJoggingVelocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__msg__JointJoggingVelocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__STRUCT_H_

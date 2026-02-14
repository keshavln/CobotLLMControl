// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory_point__struct.h"

/// Struct defined in msg/CartesianTrajectory in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__msg__CartesianTrajectory
{
  addverb_cobot_msgs__msg__CartesianTrajectoryPoint__Sequence points;
} addverb_cobot_msgs__msg__CartesianTrajectory;

// Struct for a sequence of addverb_cobot_msgs__msg__CartesianTrajectory.
typedef struct addverb_cobot_msgs__msg__CartesianTrajectory__Sequence
{
  addverb_cobot_msgs__msg__CartesianTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__msg__CartesianTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_H_

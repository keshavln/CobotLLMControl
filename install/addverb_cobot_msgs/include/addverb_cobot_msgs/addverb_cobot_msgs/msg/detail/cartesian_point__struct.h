// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_H_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/CartesianPoint in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__msg__CartesianPoint
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 orientation;
} addverb_cobot_msgs__msg__CartesianPoint;

// Struct for a sequence of addverb_cobot_msgs__msg__CartesianPoint.
typedef struct addverb_cobot_msgs__msg__CartesianPoint__Sequence
{
  addverb_cobot_msgs__msg__CartesianPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__msg__CartesianPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_H_

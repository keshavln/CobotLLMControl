// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:srv/FlexFactor.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__STRUCT_H_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FlexFactor in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__srv__FlexFactor_Request
{
  double flex_factor;
} addverb_cobot_msgs__srv__FlexFactor_Request;

// Struct for a sequence of addverb_cobot_msgs__srv__FlexFactor_Request.
typedef struct addverb_cobot_msgs__srv__FlexFactor_Request__Sequence
{
  addverb_cobot_msgs__srv__FlexFactor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__srv__FlexFactor_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FlexFactor in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__srv__FlexFactor_Response
{
  rosidl_runtime_c__String message;
} addverb_cobot_msgs__srv__FlexFactor_Response;

// Struct for a sequence of addverb_cobot_msgs__srv__FlexFactor_Response.
typedef struct addverb_cobot_msgs__srv__FlexFactor_Response__Sequence
{
  addverb_cobot_msgs__srv__FlexFactor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__srv__FlexFactor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__STRUCT_H_

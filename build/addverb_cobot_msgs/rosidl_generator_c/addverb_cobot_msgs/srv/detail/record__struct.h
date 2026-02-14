// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__STRUCT_H_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Record in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__srv__Record_Request
{
  bool enable;
  rosidl_runtime_c__String label;
  int32_t rate;
} addverb_cobot_msgs__srv__Record_Request;

// Struct for a sequence of addverb_cobot_msgs__srv__Record_Request.
typedef struct addverb_cobot_msgs__srv__Record_Request__Sequence
{
  addverb_cobot_msgs__srv__Record_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__srv__Record_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Record in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__srv__Record_Response
{
  rosidl_runtime_c__String message;
  bool status;
} addverb_cobot_msgs__srv__Record_Response;

// Struct for a sequence of addverb_cobot_msgs__srv__Record_Response.
typedef struct addverb_cobot_msgs__srv__Record_Response__Sequence
{
  addverb_cobot_msgs__srv__Record_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__srv__Record_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__STRUCT_H_

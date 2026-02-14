// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from addverb_cobot_msgs:action/Replay.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__ACTION__DETAIL__REPLAY__STRUCT_H_
#define ADDVERB_COBOT_MSGS__ACTION__DETAIL__REPLAY__STRUCT_H_

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

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_Goal
{
  rosidl_runtime_c__String label;
  int32_t iterations;
} addverb_cobot_msgs__action__Replay_Goal;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_Goal.
typedef struct addverb_cobot_msgs__action__Replay_Goal__Sequence
{
  addverb_cobot_msgs__action__Replay_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'error_code'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_Result
{
  rosidl_runtime_c__String error_code;
} addverb_cobot_msgs__action__Replay_Result;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_Result.
typedef struct addverb_cobot_msgs__action__Replay_Result__Sequence
{
  addverb_cobot_msgs__action__Replay_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_state'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_Feedback
{
  int32_t iteration;
  rosidl_runtime_c__double__Sequence joint_state;
} addverb_cobot_msgs__action__Replay_Feedback;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_Feedback.
typedef struct addverb_cobot_msgs__action__Replay_Feedback__Sequence
{
  addverb_cobot_msgs__action__Replay_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "addverb_cobot_msgs/action/detail/replay__struct.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  addverb_cobot_msgs__action__Replay_Goal goal;
} addverb_cobot_msgs__action__Replay_SendGoal_Request;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_SendGoal_Request.
typedef struct addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence
{
  addverb_cobot_msgs__action__Replay_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} addverb_cobot_msgs__action__Replay_SendGoal_Response;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_SendGoal_Response.
typedef struct addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence
{
  addverb_cobot_msgs__action__Replay_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} addverb_cobot_msgs__action__Replay_GetResult_Request;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_GetResult_Request.
typedef struct addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence
{
  addverb_cobot_msgs__action__Replay_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "addverb_cobot_msgs/action/detail/replay__struct.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_GetResult_Response
{
  int8_t status;
  addverb_cobot_msgs__action__Replay_Result result;
} addverb_cobot_msgs__action__Replay_GetResult_Response;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_GetResult_Response.
typedef struct addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence
{
  addverb_cobot_msgs__action__Replay_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "addverb_cobot_msgs/action/detail/replay__struct.h"

/// Struct defined in action/Replay in the package addverb_cobot_msgs.
typedef struct addverb_cobot_msgs__action__Replay_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  addverb_cobot_msgs__action__Replay_Feedback feedback;
} addverb_cobot_msgs__action__Replay_FeedbackMessage;

// Struct for a sequence of addverb_cobot_msgs__action__Replay_FeedbackMessage.
typedef struct addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence
{
  addverb_cobot_msgs__action__Replay_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} addverb_cobot_msgs__action__Replay_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADDVERB_COBOT_MSGS__ACTION__DETAIL__REPLAY__STRUCT_H_

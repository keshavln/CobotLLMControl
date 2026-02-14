// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from addverb_cobot_msgs:msg/JointJoggingVelocity.idl
// generated code does not contain a copyright notice
#include "addverb_cobot_msgs/msg/detail/joint_jogging_velocity__rosidl_typesupport_fastrtps_cpp.hpp"
#include "addverb_cobot_msgs/msg/detail/joint_jogging_velocity__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace addverb_cobot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addverb_cobot_msgs
cdr_serialize(
  const addverb_cobot_msgs::msg::JointJoggingVelocity & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: jvel_scaling_factor
  {
    cdr << ros_message.jvel_scaling_factor;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addverb_cobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  addverb_cobot_msgs::msg::JointJoggingVelocity & ros_message)
{
  // Member: jvel_scaling_factor
  {
    cdr >> ros_message.jvel_scaling_factor;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addverb_cobot_msgs
get_serialized_size(
  const addverb_cobot_msgs::msg::JointJoggingVelocity & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: jvel_scaling_factor
  {
    size_t array_size = ros_message.jvel_scaling_factor.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.jvel_scaling_factor[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_addverb_cobot_msgs
max_serialized_size_JointJoggingVelocity(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: jvel_scaling_factor
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = addverb_cobot_msgs::msg::JointJoggingVelocity;
    is_plain =
      (
      offsetof(DataType, jvel_scaling_factor) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JointJoggingVelocity__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const addverb_cobot_msgs::msg::JointJoggingVelocity *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JointJoggingVelocity__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<addverb_cobot_msgs::msg::JointJoggingVelocity *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JointJoggingVelocity__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const addverb_cobot_msgs::msg::JointJoggingVelocity *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JointJoggingVelocity__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JointJoggingVelocity(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JointJoggingVelocity__callbacks = {
  "addverb_cobot_msgs::msg",
  "JointJoggingVelocity",
  _JointJoggingVelocity__cdr_serialize,
  _JointJoggingVelocity__cdr_deserialize,
  _JointJoggingVelocity__get_serialized_size,
  _JointJoggingVelocity__max_serialized_size
};

static rosidl_message_type_support_t _JointJoggingVelocity__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JointJoggingVelocity__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace addverb_cobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_addverb_cobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<addverb_cobot_msgs::msg::JointJoggingVelocity>()
{
  return &addverb_cobot_msgs::msg::typesupport_fastrtps_cpp::_JointJoggingVelocity__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, addverb_cobot_msgs, msg, JointJoggingVelocity)() {
  return &addverb_cobot_msgs::msg::typesupport_fastrtps_cpp::_JointJoggingVelocity__handle;
}

#ifdef __cplusplus
}
#endif

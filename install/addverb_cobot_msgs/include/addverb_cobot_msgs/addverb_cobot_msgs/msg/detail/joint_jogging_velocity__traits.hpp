// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from addverb_cobot_msgs:msg/JointJoggingVelocity.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__TRAITS_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "addverb_cobot_msgs/msg/detail/joint_jogging_velocity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace addverb_cobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointJoggingVelocity & msg,
  std::ostream & out)
{
  out << "{";
  // member: jvel_scaling_factor
  {
    if (msg.jvel_scaling_factor.size() == 0) {
      out << "jvel_scaling_factor: []";
    } else {
      out << "jvel_scaling_factor: [";
      size_t pending_items = msg.jvel_scaling_factor.size();
      for (auto item : msg.jvel_scaling_factor) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointJoggingVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: jvel_scaling_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jvel_scaling_factor.size() == 0) {
      out << "jvel_scaling_factor: []\n";
    } else {
      out << "jvel_scaling_factor:\n";
      for (auto item : msg.jvel_scaling_factor) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointJoggingVelocity & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace addverb_cobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use addverb_cobot_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const addverb_cobot_msgs::msg::JointJoggingVelocity & msg,
  std::ostream & out, size_t indentation = 0)
{
  addverb_cobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addverb_cobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const addverb_cobot_msgs::msg::JointJoggingVelocity & msg)
{
  return addverb_cobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<addverb_cobot_msgs::msg::JointJoggingVelocity>()
{
  return "addverb_cobot_msgs::msg::JointJoggingVelocity";
}

template<>
inline const char * name<addverb_cobot_msgs::msg::JointJoggingVelocity>()
{
  return "addverb_cobot_msgs/msg/JointJoggingVelocity";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::msg::JointJoggingVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<addverb_cobot_msgs::msg::JointJoggingVelocity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<addverb_cobot_msgs::msg::JointJoggingVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__TRAITS_HPP_

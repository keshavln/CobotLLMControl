// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from addverb_cobot_msgs:srv/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__TRAITS_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "addverb_cobot_msgs/srv/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace addverb_cobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gripper_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: grasp_force
  {
    out << "grasp_force: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_force, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: grasp_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grasp_force: ";
    rosidl_generator_traits::value_to_yaml(msg.grasp_force, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace addverb_cobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use addverb_cobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const addverb_cobot_msgs::srv::Gripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  addverb_cobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addverb_cobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const addverb_cobot_msgs::srv::Gripper_Request & msg)
{
  return addverb_cobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<addverb_cobot_msgs::srv::Gripper_Request>()
{
  return "addverb_cobot_msgs::srv::Gripper_Request";
}

template<>
inline const char * name<addverb_cobot_msgs::srv::Gripper_Request>()
{
  return "addverb_cobot_msgs/srv/Gripper_Request";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::srv::Gripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<addverb_cobot_msgs::srv::Gripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<addverb_cobot_msgs::srv::Gripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace addverb_cobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gripper_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gripper_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace addverb_cobot_msgs

namespace rosidl_generator_traits
{

[[deprecated("use addverb_cobot_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const addverb_cobot_msgs::srv::Gripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  addverb_cobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addverb_cobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const addverb_cobot_msgs::srv::Gripper_Response & msg)
{
  return addverb_cobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<addverb_cobot_msgs::srv::Gripper_Response>()
{
  return "addverb_cobot_msgs::srv::Gripper_Response";
}

template<>
inline const char * name<addverb_cobot_msgs::srv::Gripper_Response>()
{
  return "addverb_cobot_msgs/srv/Gripper_Response";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::srv::Gripper_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<addverb_cobot_msgs::srv::Gripper_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<addverb_cobot_msgs::srv::Gripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<addverb_cobot_msgs::srv::Gripper>()
{
  return "addverb_cobot_msgs::srv::Gripper";
}

template<>
inline const char * name<addverb_cobot_msgs::srv::Gripper>()
{
  return "addverb_cobot_msgs/srv/Gripper";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::srv::Gripper>
  : std::integral_constant<
    bool,
    has_fixed_size<addverb_cobot_msgs::srv::Gripper_Request>::value &&
    has_fixed_size<addverb_cobot_msgs::srv::Gripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<addverb_cobot_msgs::srv::Gripper>
  : std::integral_constant<
    bool,
    has_bounded_size<addverb_cobot_msgs::srv::Gripper_Request>::value &&
    has_bounded_size<addverb_cobot_msgs::srv::Gripper_Response>::value
  >
{
};

template<>
struct is_service<addverb_cobot_msgs::srv::Gripper>
  : std::true_type
{
};

template<>
struct is_service_request<addverb_cobot_msgs::srv::Gripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<addverb_cobot_msgs::srv::Gripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__TRAITS_HPP_

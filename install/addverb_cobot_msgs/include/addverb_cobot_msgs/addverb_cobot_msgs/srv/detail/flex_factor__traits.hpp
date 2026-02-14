// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from addverb_cobot_msgs:srv/FlexFactor.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__TRAITS_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "addverb_cobot_msgs/srv/detail/flex_factor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace addverb_cobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FlexFactor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: flex_factor
  {
    out << "flex_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.flex_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FlexFactor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: flex_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flex_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.flex_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FlexFactor_Request & msg, bool use_flow_style = false)
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
  const addverb_cobot_msgs::srv::FlexFactor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  addverb_cobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addverb_cobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const addverb_cobot_msgs::srv::FlexFactor_Request & msg)
{
  return addverb_cobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<addverb_cobot_msgs::srv::FlexFactor_Request>()
{
  return "addverb_cobot_msgs::srv::FlexFactor_Request";
}

template<>
inline const char * name<addverb_cobot_msgs::srv::FlexFactor_Request>()
{
  return "addverb_cobot_msgs/srv/FlexFactor_Request";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::srv::FlexFactor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<addverb_cobot_msgs::srv::FlexFactor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<addverb_cobot_msgs::srv::FlexFactor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace addverb_cobot_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FlexFactor_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FlexFactor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

inline std::string to_yaml(const FlexFactor_Response & msg, bool use_flow_style = false)
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
  const addverb_cobot_msgs::srv::FlexFactor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  addverb_cobot_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addverb_cobot_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const addverb_cobot_msgs::srv::FlexFactor_Response & msg)
{
  return addverb_cobot_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<addverb_cobot_msgs::srv::FlexFactor_Response>()
{
  return "addverb_cobot_msgs::srv::FlexFactor_Response";
}

template<>
inline const char * name<addverb_cobot_msgs::srv::FlexFactor_Response>()
{
  return "addverb_cobot_msgs/srv/FlexFactor_Response";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::srv::FlexFactor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<addverb_cobot_msgs::srv::FlexFactor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<addverb_cobot_msgs::srv::FlexFactor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<addverb_cobot_msgs::srv::FlexFactor>()
{
  return "addverb_cobot_msgs::srv::FlexFactor";
}

template<>
inline const char * name<addverb_cobot_msgs::srv::FlexFactor>()
{
  return "addverb_cobot_msgs/srv/FlexFactor";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::srv::FlexFactor>
  : std::integral_constant<
    bool,
    has_fixed_size<addverb_cobot_msgs::srv::FlexFactor_Request>::value &&
    has_fixed_size<addverb_cobot_msgs::srv::FlexFactor_Response>::value
  >
{
};

template<>
struct has_bounded_size<addverb_cobot_msgs::srv::FlexFactor>
  : std::integral_constant<
    bool,
    has_bounded_size<addverb_cobot_msgs::srv::FlexFactor_Request>::value &&
    has_bounded_size<addverb_cobot_msgs::srv::FlexFactor_Response>::value
  >
{
};

template<>
struct is_service<addverb_cobot_msgs::srv::FlexFactor>
  : std::true_type
{
};

template<>
struct is_service_request<addverb_cobot_msgs::srv::FlexFactor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<addverb_cobot_msgs::srv::FlexFactor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__TRAITS_HPP_

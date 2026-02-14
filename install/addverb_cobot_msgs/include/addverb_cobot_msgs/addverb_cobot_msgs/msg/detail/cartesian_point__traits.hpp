// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from addverb_cobot_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__TRAITS_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "addverb_cobot_msgs/msg/detail/cartesian_point__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace addverb_cobot_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const CartesianPoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CartesianPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CartesianPoint & msg, bool use_flow_style = false)
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
  const addverb_cobot_msgs::msg::CartesianPoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  addverb_cobot_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use addverb_cobot_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const addverb_cobot_msgs::msg::CartesianPoint & msg)
{
  return addverb_cobot_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<addverb_cobot_msgs::msg::CartesianPoint>()
{
  return "addverb_cobot_msgs::msg::CartesianPoint";
}

template<>
inline const char * name<addverb_cobot_msgs::msg::CartesianPoint>()
{
  return "addverb_cobot_msgs/msg/CartesianPoint";
}

template<>
struct has_fixed_size<addverb_cobot_msgs::msg::CartesianPoint>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<addverb_cobot_msgs::msg::CartesianPoint>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<addverb_cobot_msgs::msg::CartesianPoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__TRAITS_HPP_

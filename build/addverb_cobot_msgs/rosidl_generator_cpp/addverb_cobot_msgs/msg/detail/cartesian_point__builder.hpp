// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/msg/detail/cartesian_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianPoint_orientation
{
public:
  explicit Init_CartesianPoint_orientation(::addverb_cobot_msgs::msg::CartesianPoint & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::msg::CartesianPoint orientation(::addverb_cobot_msgs::msg::CartesianPoint::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::msg::CartesianPoint msg_;
};

class Init_CartesianPoint_position
{
public:
  Init_CartesianPoint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianPoint_orientation position(::addverb_cobot_msgs::msg::CartesianPoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_CartesianPoint_orientation(msg_);
  }

private:
  ::addverb_cobot_msgs::msg::CartesianPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::msg::CartesianPoint>()
{
  return addverb_cobot_msgs::msg::builder::Init_CartesianPoint_position();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__BUILDER_HPP_

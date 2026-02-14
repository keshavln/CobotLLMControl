// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTrajectory_points
{
public:
  Init_CartesianTrajectory_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::msg::CartesianTrajectory points(::addverb_cobot_msgs::msg::CartesianTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::msg::CartesianTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::msg::CartesianTrajectory>()
{
  return addverb_cobot_msgs::msg::builder::Init_CartesianTrajectory_points();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__BUILDER_HPP_

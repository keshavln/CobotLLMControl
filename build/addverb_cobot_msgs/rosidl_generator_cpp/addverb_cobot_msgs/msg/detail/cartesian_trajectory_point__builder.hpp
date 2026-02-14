// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:msg/CartesianTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianTrajectoryPoint_time_from_start
{
public:
  explicit Init_CartesianTrajectoryPoint_time_from_start(::addverb_cobot_msgs::msg::CartesianTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::msg::CartesianTrajectoryPoint time_from_start(::addverb_cobot_msgs::msg::CartesianTrajectoryPoint::_time_from_start_type arg)
  {
    msg_.time_from_start = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::msg::CartesianTrajectoryPoint msg_;
};

class Init_CartesianTrajectoryPoint_point
{
public:
  Init_CartesianTrajectoryPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianTrajectoryPoint_time_from_start point(::addverb_cobot_msgs::msg::CartesianTrajectoryPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_CartesianTrajectoryPoint_time_from_start(msg_);
  }

private:
  ::addverb_cobot_msgs::msg::CartesianTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::msg::CartesianTrajectoryPoint>()
{
  return addverb_cobot_msgs::msg::builder::Init_CartesianTrajectoryPoint_point();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY_POINT__BUILDER_HPP_

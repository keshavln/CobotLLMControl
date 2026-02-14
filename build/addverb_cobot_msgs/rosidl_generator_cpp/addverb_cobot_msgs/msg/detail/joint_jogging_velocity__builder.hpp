// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:msg/JointJoggingVelocity.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/msg/detail/joint_jogging_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace msg
{

namespace builder
{

class Init_JointJoggingVelocity_jvel_scaling_factor
{
public:
  Init_JointJoggingVelocity_jvel_scaling_factor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::msg::JointJoggingVelocity jvel_scaling_factor(::addverb_cobot_msgs::msg::JointJoggingVelocity::_jvel_scaling_factor_type arg)
  {
    msg_.jvel_scaling_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::msg::JointJoggingVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::msg::JointJoggingVelocity>()
{
  return addverb_cobot_msgs::msg::builder::Init_JointJoggingVelocity_jvel_scaling_factor();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__BUILDER_HPP_

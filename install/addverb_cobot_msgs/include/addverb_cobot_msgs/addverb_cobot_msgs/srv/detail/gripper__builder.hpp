// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:srv/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/srv/detail/gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Gripper_Request_grasp_force
{
public:
  explicit Init_Gripper_Request_grasp_force(::addverb_cobot_msgs::srv::Gripper_Request & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::srv::Gripper_Request grasp_force(::addverb_cobot_msgs::srv::Gripper_Request::_grasp_force_type arg)
  {
    msg_.grasp_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Gripper_Request msg_;
};

class Init_Gripper_Request_position
{
public:
  Init_Gripper_Request_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gripper_Request_grasp_force position(::addverb_cobot_msgs::srv::Gripper_Request::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_Gripper_Request_grasp_force(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Gripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::srv::Gripper_Request>()
{
  return addverb_cobot_msgs::srv::builder::Init_Gripper_Request_position();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Gripper_Response_message
{
public:
  explicit Init_Gripper_Response_message(::addverb_cobot_msgs::srv::Gripper_Response & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::srv::Gripper_Response message(::addverb_cobot_msgs::srv::Gripper_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Gripper_Response msg_;
};

class Init_Gripper_Response_success
{
public:
  Init_Gripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gripper_Response_message success(::addverb_cobot_msgs::srv::Gripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Gripper_Response_message(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Gripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::srv::Gripper_Response>()
{
  return addverb_cobot_msgs::srv::builder::Init_Gripper_Response_success();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__BUILDER_HPP_

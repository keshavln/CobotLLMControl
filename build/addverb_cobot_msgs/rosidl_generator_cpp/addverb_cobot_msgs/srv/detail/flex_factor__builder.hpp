// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:srv/FlexFactor.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/srv/detail/flex_factor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace srv
{

namespace builder
{

class Init_FlexFactor_Request_flex_factor
{
public:
  Init_FlexFactor_Request_flex_factor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::srv::FlexFactor_Request flex_factor(::addverb_cobot_msgs::srv::FlexFactor_Request::_flex_factor_type arg)
  {
    msg_.flex_factor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::FlexFactor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::srv::FlexFactor_Request>()
{
  return addverb_cobot_msgs::srv::builder::Init_FlexFactor_Request_flex_factor();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace srv
{

namespace builder
{

class Init_FlexFactor_Response_message
{
public:
  Init_FlexFactor_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::srv::FlexFactor_Response message(::addverb_cobot_msgs::srv::FlexFactor_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::FlexFactor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::srv::FlexFactor_Response>()
{
  return addverb_cobot_msgs::srv::builder::Init_FlexFactor_Response_message();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__FLEX_FACTOR__BUILDER_HPP_

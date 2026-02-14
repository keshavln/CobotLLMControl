// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/srv/detail/record__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Record_Request_rate
{
public:
  explicit Init_Record_Request_rate(::addverb_cobot_msgs::srv::Record_Request & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::srv::Record_Request rate(::addverb_cobot_msgs::srv::Record_Request::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Record_Request msg_;
};

class Init_Record_Request_label
{
public:
  explicit Init_Record_Request_label(::addverb_cobot_msgs::srv::Record_Request & msg)
  : msg_(msg)
  {}
  Init_Record_Request_rate label(::addverb_cobot_msgs::srv::Record_Request::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Record_Request_rate(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Record_Request msg_;
};

class Init_Record_Request_enable
{
public:
  Init_Record_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Record_Request_label enable(::addverb_cobot_msgs::srv::Record_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_Record_Request_label(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Record_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::srv::Record_Request>()
{
  return addverb_cobot_msgs::srv::builder::Init_Record_Request_enable();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace srv
{

namespace builder
{

class Init_Record_Response_status
{
public:
  explicit Init_Record_Response_status(::addverb_cobot_msgs::srv::Record_Response & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::srv::Record_Response status(::addverb_cobot_msgs::srv::Record_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Record_Response msg_;
};

class Init_Record_Response_message
{
public:
  Init_Record_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Record_Response_status message(::addverb_cobot_msgs::srv::Record_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Record_Response_status(msg_);
  }

private:
  ::addverb_cobot_msgs::srv::Record_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::srv::Record_Response>()
{
  return addverb_cobot_msgs::srv::builder::Init_Record_Response_message();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__BUILDER_HPP_

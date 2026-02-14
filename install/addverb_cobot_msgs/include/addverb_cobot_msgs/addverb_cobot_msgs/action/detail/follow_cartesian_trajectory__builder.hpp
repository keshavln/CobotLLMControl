// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:action/FollowCartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/action/detail/follow_cartesian_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_Goal_trajectory
{
public:
  Init_FollowCartesianTrajectory_Goal_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_Goal trajectory(::addverb_cobot_msgs::action::FollowCartesianTrajectory_Goal::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_Goal>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_Goal_trajectory();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_Result_message
{
public:
  explicit Init_FollowCartesianTrajectory_Result_message(::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result message(::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result msg_;
};

class Init_FollowCartesianTrajectory_Result_success
{
public:
  Init_FollowCartesianTrajectory_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowCartesianTrajectory_Result_message success(::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FollowCartesianTrajectory_Result_message(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_Result>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_Result_success();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_Feedback>()
{
  return ::addverb_cobot_msgs::action::FollowCartesianTrajectory_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_SendGoal_Request_goal
{
public:
  explicit Init_FollowCartesianTrajectory_SendGoal_Request_goal(::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request goal(::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request msg_;
};

class Init_FollowCartesianTrajectory_SendGoal_Request_goal_id
{
public:
  Init_FollowCartesianTrajectory_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowCartesianTrajectory_SendGoal_Request_goal goal_id(::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowCartesianTrajectory_SendGoal_Request_goal(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Request>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_SendGoal_Request_goal_id();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_SendGoal_Response_stamp
{
public:
  explicit Init_FollowCartesianTrajectory_SendGoal_Response_stamp(::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response stamp(::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response msg_;
};

class Init_FollowCartesianTrajectory_SendGoal_Response_accepted
{
public:
  Init_FollowCartesianTrajectory_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowCartesianTrajectory_SendGoal_Response_stamp accepted(::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FollowCartesianTrajectory_SendGoal_Response_stamp(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_SendGoal_Response>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_SendGoal_Response_accepted();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_GetResult_Request_goal_id
{
public:
  Init_FollowCartesianTrajectory_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Request goal_id(::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Request>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_GetResult_Request_goal_id();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_GetResult_Response_result
{
public:
  explicit Init_FollowCartesianTrajectory_GetResult_Response_result(::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response result(::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response msg_;
};

class Init_FollowCartesianTrajectory_GetResult_Response_status
{
public:
  Init_FollowCartesianTrajectory_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowCartesianTrajectory_GetResult_Response_result status(::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FollowCartesianTrajectory_GetResult_Response_result(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_GetResult_Response>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_GetResult_Response_status();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_FollowCartesianTrajectory_FeedbackMessage_feedback
{
public:
  explicit Init_FollowCartesianTrajectory_FeedbackMessage_feedback(::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage feedback(::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage msg_;
};

class Init_FollowCartesianTrajectory_FeedbackMessage_goal_id
{
public:
  Init_FollowCartesianTrajectory_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowCartesianTrajectory_FeedbackMessage_feedback goal_id(::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FollowCartesianTrajectory_FeedbackMessage_feedback(msg_);
  }

private:
  ::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::FollowCartesianTrajectory_FeedbackMessage>()
{
  return addverb_cobot_msgs::action::builder::Init_FollowCartesianTrajectory_FeedbackMessage_goal_id();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__ACTION__DETAIL__FOLLOW_CARTESIAN_TRAJECTORY__BUILDER_HPP_

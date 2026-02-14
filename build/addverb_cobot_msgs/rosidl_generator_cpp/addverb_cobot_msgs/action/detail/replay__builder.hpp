// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from addverb_cobot_msgs:action/Replay.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__ACTION__DETAIL__REPLAY__BUILDER_HPP_
#define ADDVERB_COBOT_MSGS__ACTION__DETAIL__REPLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "addverb_cobot_msgs/action/detail/replay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_Goal_iterations
{
public:
  explicit Init_Replay_Goal_iterations(::addverb_cobot_msgs::action::Replay_Goal & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::Replay_Goal iterations(::addverb_cobot_msgs::action::Replay_Goal::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_Goal msg_;
};

class Init_Replay_Goal_label
{
public:
  Init_Replay_Goal_label()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replay_Goal_iterations label(::addverb_cobot_msgs::action::Replay_Goal::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_Replay_Goal_iterations(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_Goal>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_Goal_label();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_Result_error_code
{
public:
  Init_Replay_Result_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::action::Replay_Result error_code(::addverb_cobot_msgs::action::Replay_Result::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_Result>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_Result_error_code();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_Feedback_joint_state
{
public:
  explicit Init_Replay_Feedback_joint_state(::addverb_cobot_msgs::action::Replay_Feedback & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::Replay_Feedback joint_state(::addverb_cobot_msgs::action::Replay_Feedback::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_Feedback msg_;
};

class Init_Replay_Feedback_iteration
{
public:
  Init_Replay_Feedback_iteration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replay_Feedback_joint_state iteration(::addverb_cobot_msgs::action::Replay_Feedback::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return Init_Replay_Feedback_joint_state(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_Feedback>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_Feedback_iteration();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_SendGoal_Request_goal
{
public:
  explicit Init_Replay_SendGoal_Request_goal(::addverb_cobot_msgs::action::Replay_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::Replay_SendGoal_Request goal(::addverb_cobot_msgs::action::Replay_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_SendGoal_Request msg_;
};

class Init_Replay_SendGoal_Request_goal_id
{
public:
  Init_Replay_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replay_SendGoal_Request_goal goal_id(::addverb_cobot_msgs::action::Replay_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Replay_SendGoal_Request_goal(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_SendGoal_Request>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_SendGoal_Request_goal_id();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_SendGoal_Response_stamp
{
public:
  explicit Init_Replay_SendGoal_Response_stamp(::addverb_cobot_msgs::action::Replay_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::Replay_SendGoal_Response stamp(::addverb_cobot_msgs::action::Replay_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_SendGoal_Response msg_;
};

class Init_Replay_SendGoal_Response_accepted
{
public:
  Init_Replay_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replay_SendGoal_Response_stamp accepted(::addverb_cobot_msgs::action::Replay_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Replay_SendGoal_Response_stamp(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_SendGoal_Response>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_SendGoal_Response_accepted();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_GetResult_Request_goal_id
{
public:
  Init_Replay_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::addverb_cobot_msgs::action::Replay_GetResult_Request goal_id(::addverb_cobot_msgs::action::Replay_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_GetResult_Request>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_GetResult_Request_goal_id();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_GetResult_Response_result
{
public:
  explicit Init_Replay_GetResult_Response_result(::addverb_cobot_msgs::action::Replay_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::Replay_GetResult_Response result(::addverb_cobot_msgs::action::Replay_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_GetResult_Response msg_;
};

class Init_Replay_GetResult_Response_status
{
public:
  Init_Replay_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replay_GetResult_Response_result status(::addverb_cobot_msgs::action::Replay_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Replay_GetResult_Response_result(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_GetResult_Response>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_GetResult_Response_status();
}

}  // namespace addverb_cobot_msgs


namespace addverb_cobot_msgs
{

namespace action
{

namespace builder
{

class Init_Replay_FeedbackMessage_feedback
{
public:
  explicit Init_Replay_FeedbackMessage_feedback(::addverb_cobot_msgs::action::Replay_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::addverb_cobot_msgs::action::Replay_FeedbackMessage feedback(::addverb_cobot_msgs::action::Replay_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_FeedbackMessage msg_;
};

class Init_Replay_FeedbackMessage_goal_id
{
public:
  Init_Replay_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Replay_FeedbackMessage_feedback goal_id(::addverb_cobot_msgs::action::Replay_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Replay_FeedbackMessage_feedback(msg_);
  }

private:
  ::addverb_cobot_msgs::action::Replay_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::addverb_cobot_msgs::action::Replay_FeedbackMessage>()
{
  return addverb_cobot_msgs::action::builder::Init_Replay_FeedbackMessage_goal_id();
}

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__ACTION__DETAIL__REPLAY__BUILDER_HPP_

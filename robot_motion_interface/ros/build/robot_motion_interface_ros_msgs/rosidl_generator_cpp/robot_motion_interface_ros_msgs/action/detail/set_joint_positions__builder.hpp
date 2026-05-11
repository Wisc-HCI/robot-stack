// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_motion_interface_ros_msgs:action/SetJointPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/action/set_joint_positions.hpp"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__ACTION__DETAIL__SET_JOINT_POSITIONS__BUILDER_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__ACTION__DETAIL__SET_JOINT_POSITIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_motion_interface_ros_msgs/action/detail/set_joint_positions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_Goal_joint_state
{
public:
  Init_SetJointPositions_Goal_joint_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_Goal joint_state(::robot_motion_interface_ros_msgs::action::SetJointPositions_Goal::_joint_state_type arg)
  {
    msg_.joint_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_Goal>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_Goal_joint_state();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_Result_success
{
public:
  Init_SetJointPositions_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_Result success(::robot_motion_interface_ros_msgs::action::SetJointPositions_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_Result>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_Result_success();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_Feedback>()
{
  return ::robot_motion_interface_ros_msgs::action::SetJointPositions_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_SendGoal_Request_goal
{
public:
  explicit Init_SetJointPositions_SendGoal_Request_goal(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request goal(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request msg_;
};

class Init_SetJointPositions_SendGoal_Request_goal_id
{
public:
  Init_SetJointPositions_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_SendGoal_Request_goal goal_id(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetJointPositions_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Request>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_SendGoal_Request_goal_id();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_SendGoal_Response_stamp
{
public:
  explicit Init_SetJointPositions_SendGoal_Response_stamp(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response stamp(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response msg_;
};

class Init_SetJointPositions_SendGoal_Response_accepted
{
public:
  Init_SetJointPositions_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_SendGoal_Response_stamp accepted(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetJointPositions_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Response>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_SendGoal_Response_accepted();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_SendGoal_Event_response
{
public:
  explicit Init_SetJointPositions_SendGoal_Event_response(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event response(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event msg_;
};

class Init_SetJointPositions_SendGoal_Event_request
{
public:
  explicit Init_SetJointPositions_SendGoal_Event_request(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_SendGoal_Event_response request(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointPositions_SendGoal_Event_response(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event msg_;
};

class Init_SetJointPositions_SendGoal_Event_info
{
public:
  Init_SetJointPositions_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_SendGoal_Event_request info(::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetJointPositions_SendGoal_Event_request(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_SendGoal_Event>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_SendGoal_Event_info();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_GetResult_Request_goal_id
{
public:
  Init_SetJointPositions_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Request goal_id(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Request>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_GetResult_Request_goal_id();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_GetResult_Response_result
{
public:
  explicit Init_SetJointPositions_GetResult_Response_result(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response result(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response msg_;
};

class Init_SetJointPositions_GetResult_Response_status
{
public:
  Init_SetJointPositions_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_GetResult_Response_result status(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetJointPositions_GetResult_Response_result(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Response>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_GetResult_Response_status();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_GetResult_Event_response
{
public:
  explicit Init_SetJointPositions_GetResult_Event_response(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event response(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event msg_;
};

class Init_SetJointPositions_GetResult_Event_request
{
public:
  explicit Init_SetJointPositions_GetResult_Event_request(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_SetJointPositions_GetResult_Event_response request(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointPositions_GetResult_Event_response(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event msg_;
};

class Init_SetJointPositions_GetResult_Event_info
{
public:
  Init_SetJointPositions_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_GetResult_Event_request info(::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetJointPositions_GetResult_Event_request(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_GetResult_Event>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_GetResult_Event_info();
}

}  // namespace robot_motion_interface_ros_msgs


namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace builder
{

class Init_SetJointPositions_FeedbackMessage_feedback
{
public:
  explicit Init_SetJointPositions_FeedbackMessage_feedback(::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage feedback(::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage msg_;
};

class Init_SetJointPositions_FeedbackMessage_goal_id
{
public:
  Init_SetJointPositions_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointPositions_FeedbackMessage_feedback goal_id(::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetJointPositions_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::action::SetJointPositions_FeedbackMessage>()
{
  return robot_motion_interface_ros_msgs::action::builder::Init_SetJointPositions_FeedbackMessage_goal_id();
}

}  // namespace robot_motion_interface_ros_msgs

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__ACTION__DETAIL__SET_JOINT_POSITIONS__BUILDER_HPP_

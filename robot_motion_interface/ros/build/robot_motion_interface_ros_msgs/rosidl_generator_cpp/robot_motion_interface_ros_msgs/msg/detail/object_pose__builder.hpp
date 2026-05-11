// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_pose.hpp"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__BUILDER_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_motion_interface_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectPose_pose
{
public:
  explicit Init_ObjectPose_pose(::robot_motion_interface_ros_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::msg::ObjectPose pose(::robot_motion_interface_ros_msgs::msg::ObjectPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_handle
{
public:
  Init_ObjectPose_handle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPose_pose handle(::robot_motion_interface_ros_msgs::msg::ObjectPose::_handle_type arg)
  {
    msg_.handle = std::move(arg);
    return Init_ObjectPose_pose(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::msg::ObjectPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::msg::ObjectPose>()
{
  return robot_motion_interface_ros_msgs::msg::builder::Init_ObjectPose_handle();
}

}  // namespace robot_motion_interface_ros_msgs

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__BUILDER_HPP_

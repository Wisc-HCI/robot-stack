// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_poses.hpp"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__BUILDER_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_motion_interface_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectPoses_objects
{
public:
  explicit Init_ObjectPoses_objects(::robot_motion_interface_ros_msgs::msg::ObjectPoses & msg)
  : msg_(msg)
  {}
  ::robot_motion_interface_ros_msgs::msg::ObjectPoses objects(::robot_motion_interface_ros_msgs::msg::ObjectPoses::_objects_type arg)
  {
    msg_.objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::msg::ObjectPoses msg_;
};

class Init_ObjectPoses_header
{
public:
  Init_ObjectPoses_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPoses_objects header(::robot_motion_interface_ros_msgs::msg::ObjectPoses::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ObjectPoses_objects(msg_);
  }

private:
  ::robot_motion_interface_ros_msgs::msg::ObjectPoses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_motion_interface_ros_msgs::msg::ObjectPoses>()
{
  return robot_motion_interface_ros_msgs::msg::builder::Init_ObjectPoses_header();
}

}  // namespace robot_motion_interface_ros_msgs

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__BUILDER_HPP_

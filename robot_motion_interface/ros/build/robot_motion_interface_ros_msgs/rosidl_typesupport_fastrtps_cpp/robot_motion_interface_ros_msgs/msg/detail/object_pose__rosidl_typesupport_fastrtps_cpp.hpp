// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_motion_interface_ros_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace robot_motion_interface_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
cdr_serialize(
  const robot_motion_interface_ros_msgs::msg::ObjectPose & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  robot_motion_interface_ros_msgs::msg::ObjectPose & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
get_serialized_size(
  const robot_motion_interface_ros_msgs::msg::ObjectPose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
max_serialized_size_ObjectPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
cdr_serialize_key(
  const robot_motion_interface_ros_msgs::msg::ObjectPose & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
get_serialized_size_key(
  const robot_motion_interface_ros_msgs::msg::ObjectPose & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
max_serialized_size_key_ObjectPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace robot_motion_interface_ros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_robot_motion_interface_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, msg, ObjectPose)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

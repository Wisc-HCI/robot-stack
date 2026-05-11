// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice
#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_motion_interface_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
bool cdr_serialize_robot_motion_interface_ros_msgs__msg__ObjectPose(
  const robot_motion_interface_ros_msgs__msg__ObjectPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
bool cdr_deserialize_robot_motion_interface_ros_msgs__msg__ObjectPose(
  eprosima::fastcdr::Cdr &,
  robot_motion_interface_ros_msgs__msg__ObjectPose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
size_t get_serialized_size_robot_motion_interface_ros_msgs__msg__ObjectPose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
size_t max_serialized_size_robot_motion_interface_ros_msgs__msg__ObjectPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
bool cdr_serialize_key_robot_motion_interface_ros_msgs__msg__ObjectPose(
  const robot_motion_interface_ros_msgs__msg__ObjectPose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
size_t get_serialized_size_key_robot_motion_interface_ros_msgs__msg__ObjectPose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
size_t max_serialized_size_key_robot_motion_interface_ros_msgs__msg__ObjectPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robot_motion_interface_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_motion_interface_ros_msgs, msg, ObjectPose)();

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

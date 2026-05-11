// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_poses.h"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__STRUCT_H_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'objects'
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.h"

/// Struct defined in msg/ObjectPoses in the package robot_motion_interface_ros_msgs.
/**
  * ObjectPoses ####
 */
typedef struct robot_motion_interface_ros_msgs__msg__ObjectPoses
{
  std_msgs__msg__Header header;
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence objects;
} robot_motion_interface_ros_msgs__msg__ObjectPoses;

// Struct for a sequence of robot_motion_interface_ros_msgs__msg__ObjectPoses.
typedef struct robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence
{
  robot_motion_interface_ros_msgs__msg__ObjectPoses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__STRUCT_H_

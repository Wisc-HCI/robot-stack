// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_pose.h"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_H_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'handle'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/ObjectPose in the package robot_motion_interface_ros_msgs.
/**
  * ObjectPose ####
 */
typedef struct robot_motion_interface_ros_msgs__msg__ObjectPose
{
  rosidl_runtime_c__String handle;
  geometry_msgs__msg__Pose pose;
} robot_motion_interface_ros_msgs__msg__ObjectPose;

// Struct for a sequence of robot_motion_interface_ros_msgs__msg__ObjectPose.
typedef struct robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence
{
  robot_motion_interface_ros_msgs__msg__ObjectPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_H_

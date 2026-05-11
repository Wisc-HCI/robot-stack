// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_pose.hpp"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__TRAITS_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace robot_motion_interface_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ObjectPose & msg,
  std::ostream & out)
{
  out << "{";
  // member: handle
  {
    out << "handle: ";
    rosidl_generator_traits::value_to_yaml(msg.handle, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ObjectPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: handle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "handle: ";
    rosidl_generator_traits::value_to_yaml(msg.handle, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ObjectPose & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use robot_motion_interface_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_motion_interface_ros_msgs::msg::ObjectPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_motion_interface_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_motion_interface_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_motion_interface_ros_msgs::msg::ObjectPose & msg)
{
  return robot_motion_interface_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_motion_interface_ros_msgs::msg::ObjectPose>()
{
  return "robot_motion_interface_ros_msgs::msg::ObjectPose";
}

template<>
inline const char * name<robot_motion_interface_ros_msgs::msg::ObjectPose>()
{
  return "robot_motion_interface_ros_msgs/msg/ObjectPose";
}

template<>
struct has_fixed_size<robot_motion_interface_ros_msgs::msg::ObjectPose>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_motion_interface_ros_msgs::msg::ObjectPose>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_motion_interface_ros_msgs::msg::ObjectPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__TRAITS_HPP_

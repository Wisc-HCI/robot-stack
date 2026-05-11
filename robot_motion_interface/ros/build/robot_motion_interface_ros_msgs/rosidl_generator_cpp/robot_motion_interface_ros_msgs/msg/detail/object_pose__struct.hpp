// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_pose.hpp"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPose __attribute__((deprecated))
#else
# define DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPose __declspec(deprecated)
#endif

namespace robot_motion_interface_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectPose_
{
  using Type = ObjectPose_<ContainerAllocator>;

  explicit ObjectPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = "";
    }
  }

  explicit ObjectPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : handle(_alloc),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->handle = "";
    }
  }

  // field types and members
  using _handle_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _handle_type handle;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__handle(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->handle = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPose
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPose
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPose_ & other) const
  {
    if (this->handle != other.handle) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPose_

// alias to use template instance with default allocator
using ObjectPose =
  robot_motion_interface_ros_msgs::msg::ObjectPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_motion_interface_ros_msgs

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_HPP_

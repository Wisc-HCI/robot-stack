// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPoses.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/msg/object_poses.hpp"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__STRUCT_HPP_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'objects'
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPoses __attribute__((deprecated))
#else
# define DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPoses __declspec(deprecated)
#endif

namespace robot_motion_interface_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectPoses_
{
  using Type = ObjectPoses_<ContainerAllocator>;

  explicit ObjectPoses_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ObjectPoses_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _objects_type =
    std::vector<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>>;
  _objects_type objects;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__objects(
    const std::vector<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_motion_interface_ros_msgs::msg::ObjectPose_<ContainerAllocator>>> & _arg)
  {
    this->objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPoses
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_motion_interface_ros_msgs__msg__ObjectPoses
    std::shared_ptr<robot_motion_interface_ros_msgs::msg::ObjectPoses_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPoses_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->objects != other.objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPoses_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPoses_

// alias to use template instance with default allocator
using ObjectPoses =
  robot_motion_interface_ros_msgs::msg::ObjectPoses_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_motion_interface_ros_msgs

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__MSG__DETAIL__OBJECT_POSES__STRUCT_HPP_

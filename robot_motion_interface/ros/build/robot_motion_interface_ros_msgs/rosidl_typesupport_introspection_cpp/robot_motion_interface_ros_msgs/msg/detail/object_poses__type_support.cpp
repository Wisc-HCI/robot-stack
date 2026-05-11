// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPoses.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__functions.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_motion_interface_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObjectPoses_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_motion_interface_ros_msgs::msg::ObjectPoses(_init);
}

void ObjectPoses_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_motion_interface_ros_msgs::msg::ObjectPoses *>(message_memory);
  typed_message->~ObjectPoses();
}

size_t size_function__ObjectPoses__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<robot_motion_interface_ros_msgs::msg::ObjectPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ObjectPoses__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<robot_motion_interface_ros_msgs::msg::ObjectPose> *>(untyped_member);
  return &member[index];
}

void * get_function__ObjectPoses__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<robot_motion_interface_ros_msgs::msg::ObjectPose> *>(untyped_member);
  return &member[index];
}

void fetch_function__ObjectPoses__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const robot_motion_interface_ros_msgs::msg::ObjectPose *>(
    get_const_function__ObjectPoses__objects(untyped_member, index));
  auto & value = *reinterpret_cast<robot_motion_interface_ros_msgs::msg::ObjectPose *>(untyped_value);
  value = item;
}

void assign_function__ObjectPoses__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<robot_motion_interface_ros_msgs::msg::ObjectPose *>(
    get_function__ObjectPoses__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const robot_motion_interface_ros_msgs::msg::ObjectPose *>(untyped_value);
  item = value;
}

void resize_function__ObjectPoses__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<robot_motion_interface_ros_msgs::msg::ObjectPose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectPoses_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs::msg::ObjectPoses, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::msg::ObjectPose>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs::msg::ObjectPoses, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__ObjectPoses__objects,  // size() function pointer
    get_const_function__ObjectPoses__objects,  // get_const(index) function pointer
    get_function__ObjectPoses__objects,  // get(index) function pointer
    fetch_function__ObjectPoses__objects,  // fetch(index, &value) function pointer
    assign_function__ObjectPoses__objects,  // assign(index, value) function pointer
    resize_function__ObjectPoses__objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectPoses_message_members = {
  "robot_motion_interface_ros_msgs::msg",  // message namespace
  "ObjectPoses",  // message name
  2,  // number of fields
  sizeof(robot_motion_interface_ros_msgs::msg::ObjectPoses),
  false,  // has_any_key_member_
  ObjectPoses_message_member_array,  // message members
  ObjectPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPoses_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectPoses_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectPoses_message_members,
  get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__get_type_hash,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__get_type_description,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_motion_interface_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::msg::ObjectPoses>()
{
  return &::robot_motion_interface_ros_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectPoses_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, msg, ObjectPoses)() {
  return &::robot_motion_interface_ros_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectPoses_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__functions.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.hpp"
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

void ObjectPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_motion_interface_ros_msgs::msg::ObjectPose(_init);
}

void ObjectPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_motion_interface_ros_msgs::msg::ObjectPose *>(message_memory);
  typed_message->~ObjectPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObjectPose_message_member_array[2] = {
  {
    "handle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs::msg::ObjectPose, handle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs::msg::ObjectPose, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObjectPose_message_members = {
  "robot_motion_interface_ros_msgs::msg",  // message namespace
  "ObjectPose",  // message name
  2,  // number of fields
  sizeof(robot_motion_interface_ros_msgs::msg::ObjectPose),
  false,  // has_any_key_member_
  ObjectPose_message_member_array,  // message members
  ObjectPose_init_function,  // function to initialize message memory (memory has to be allocated)
  ObjectPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObjectPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObjectPose_message_members,
  get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__get_type_hash,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__get_type_description,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_motion_interface_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::msg::ObjectPose>()
{
  return &::robot_motion_interface_ros_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, msg, ObjectPose)() {
  return &::robot_motion_interface_ros_msgs::msg::rosidl_typesupport_introspection_cpp::ObjectPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

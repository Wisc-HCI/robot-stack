// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__rosidl_typesupport_introspection_c.h"
#include "robot_motion_interface_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__functions.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__struct.h"


// Include directives for member types
// Member `handle`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_motion_interface_ros_msgs__msg__ObjectPose__init(message_memory);
}

void robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_fini_function(void * message_memory)
{
  robot_motion_interface_ros_msgs__msg__ObjectPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_member_array[2] = {
  {
    "handle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs__msg__ObjectPose, handle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs__msg__ObjectPose, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_members = {
  "robot_motion_interface_ros_msgs__msg",  // message namespace
  "ObjectPose",  // message name
  2,  // number of fields
  sizeof(robot_motion_interface_ros_msgs__msg__ObjectPose),
  false,  // has_any_key_member_
  robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_member_array,  // message members
  robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle = {
  0,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_members,
  get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__get_type_hash,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__get_type_description,
  &robot_motion_interface_ros_msgs__msg__ObjectPose__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_motion_interface_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_motion_interface_ros_msgs, msg, ObjectPose)() {
  robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle.typesupport_identifier) {
    robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_motion_interface_ros_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

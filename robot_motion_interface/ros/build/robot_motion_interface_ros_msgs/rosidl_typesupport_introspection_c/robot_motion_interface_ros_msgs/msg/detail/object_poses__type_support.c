// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPoses.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__rosidl_typesupport_introspection_c.h"
#include "robot_motion_interface_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__functions.h"
#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "robot_motion_interface_ros_msgs/msg/object_pose.h"
// Member `objects`
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_motion_interface_ros_msgs__msg__ObjectPoses__init(message_memory);
}

void robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_fini_function(void * message_memory)
{
  robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(message_memory);
}

size_t robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__size_function__ObjectPoses__objects(
  const void * untyped_member)
{
  const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * member =
    (const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__get_const_function__ObjectPoses__objects(
  const void * untyped_member, size_t index)
{
  const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * member =
    (const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__get_function__ObjectPoses__objects(
  void * untyped_member, size_t index)
{
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * member =
    (robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__fetch_function__ObjectPoses__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_motion_interface_ros_msgs__msg__ObjectPose * item =
    ((const robot_motion_interface_ros_msgs__msg__ObjectPose *)
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__get_const_function__ObjectPoses__objects(untyped_member, index));
  robot_motion_interface_ros_msgs__msg__ObjectPose * value =
    (robot_motion_interface_ros_msgs__msg__ObjectPose *)(untyped_value);
  *value = *item;
}

void robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__assign_function__ObjectPoses__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_motion_interface_ros_msgs__msg__ObjectPose * item =
    ((robot_motion_interface_ros_msgs__msg__ObjectPose *)
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__get_function__ObjectPoses__objects(untyped_member, index));
  const robot_motion_interface_ros_msgs__msg__ObjectPose * value =
    (const robot_motion_interface_ros_msgs__msg__ObjectPose *)(untyped_value);
  *item = *value;
}

bool robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__resize_function__ObjectPoses__objects(
  void * untyped_member, size_t size)
{
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * member =
    (robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence *)(untyped_member);
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__fini(member);
  return robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs__msg__ObjectPoses, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_motion_interface_ros_msgs__msg__ObjectPoses, objects),  // bytes offset in struct
    NULL,  // default value
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__size_function__ObjectPoses__objects,  // size() function pointer
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__get_const_function__ObjectPoses__objects,  // get_const(index) function pointer
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__get_function__ObjectPoses__objects,  // get(index) function pointer
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__fetch_function__ObjectPoses__objects,  // fetch(index, &value) function pointer
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__assign_function__ObjectPoses__objects,  // assign(index, value) function pointer
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__resize_function__ObjectPoses__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_members = {
  "robot_motion_interface_ros_msgs__msg",  // message namespace
  "ObjectPoses",  // message name
  2,  // number of fields
  sizeof(robot_motion_interface_ros_msgs__msg__ObjectPoses),
  false,  // has_any_key_member_
  robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_member_array,  // message members
  robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_type_support_handle = {
  0,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_members,
  get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__get_type_hash,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__get_type_description,
  &robot_motion_interface_ros_msgs__msg__ObjectPoses__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_motion_interface_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_motion_interface_ros_msgs, msg, ObjectPoses)() {
  robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_motion_interface_ros_msgs, msg, ObjectPose)();
  if (!robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_type_support_handle.typesupport_identifier) {
    robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_motion_interface_ros_msgs__msg__ObjectPoses__rosidl_typesupport_introspection_c__ObjectPoses_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

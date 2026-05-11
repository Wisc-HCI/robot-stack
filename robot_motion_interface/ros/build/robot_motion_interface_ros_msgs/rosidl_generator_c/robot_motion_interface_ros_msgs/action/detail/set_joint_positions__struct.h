// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_motion_interface_ros_msgs:action/SetJointPositions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_motion_interface_ros_msgs/action/set_joint_positions.h"


#ifndef ROBOT_MOTION_INTERFACE_ROS_MSGS__ACTION__DETAIL__SET_JOINT_POSITIONS__STRUCT_H_
#define ROBOT_MOTION_INTERFACE_ROS_MSGS__ACTION__DETAIL__SET_JOINT_POSITIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_state'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_Goal
{
  sensor_msgs__msg__JointState joint_state;
} robot_motion_interface_ros_msgs__action__SetJointPositions_Goal;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_Goal.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_Result
{
  bool success;
} robot_motion_interface_ros_msgs__action__SetJointPositions_Result;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_Result.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_motion_interface_ros_msgs/action/detail/set_joint_positions__struct.h"

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_motion_interface_ros_msgs__action__SetJointPositions_Goal goal;
} robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence request;
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence response;
} robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_joint_positions__struct.h"

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response
{
  int8_t status;
  robot_motion_interface_ros_msgs__action__SetJointPositions_Result result;
} robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence request;
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence response;
} robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_joint_positions__struct.h"

/// Struct defined in action/SetJointPositions in the package robot_motion_interface_ros_msgs.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback feedback;
} robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage;

// Struct for a sequence of robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage.
typedef struct robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence
{
  robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_MOTION_INTERFACE_ROS_MSGS__ACTION__DETAIL__SET_JOINT_POSITIONS__STRUCT_H_

// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robot_motion_interface_ros_msgs:action/SetCartesianPose.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
#include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_Goal_type_support_ids_t;

static const _SetCartesianPose_Goal_type_support_ids_t _SetCartesianPose_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_Goal_type_support_symbol_names_t _SetCartesianPose_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Goal)),
  }
};

typedef struct _SetCartesianPose_Goal_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_Goal_type_support_data_t;

static _SetCartesianPose_Goal_type_support_data_t _SetCartesianPose_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_Goal_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_Goal>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Goal)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_Result_type_support_ids_t;

static const _SetCartesianPose_Result_type_support_ids_t _SetCartesianPose_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_Result_type_support_symbol_names_t _SetCartesianPose_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Result)),
  }
};

typedef struct _SetCartesianPose_Result_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_Result_type_support_data_t;

static _SetCartesianPose_Result_type_support_data_t _SetCartesianPose_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_Result_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_Result_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_Result_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_Result>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Result)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_Feedback_type_support_ids_t;

static const _SetCartesianPose_Feedback_type_support_ids_t _SetCartesianPose_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_Feedback_type_support_symbol_names_t _SetCartesianPose_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Feedback)),
  }
};

typedef struct _SetCartesianPose_Feedback_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_Feedback_type_support_data_t;

static _SetCartesianPose_Feedback_type_support_data_t _SetCartesianPose_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_Feedback_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_Feedback>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_Feedback)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_SendGoal_Request_type_support_ids_t;

static const _SetCartesianPose_SendGoal_Request_type_support_ids_t _SetCartesianPose_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_SendGoal_Request_type_support_symbol_names_t _SetCartesianPose_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Request)),
  }
};

typedef struct _SetCartesianPose_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_SendGoal_Request_type_support_data_t;

static _SetCartesianPose_SendGoal_Request_type_support_data_t _SetCartesianPose_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_SendGoal_Request_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Request>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Request)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_SendGoal_Response_type_support_ids_t;

static const _SetCartesianPose_SendGoal_Response_type_support_ids_t _SetCartesianPose_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_SendGoal_Response_type_support_symbol_names_t _SetCartesianPose_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Response)),
  }
};

typedef struct _SetCartesianPose_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_SendGoal_Response_type_support_data_t;

static _SetCartesianPose_SendGoal_Response_type_support_data_t _SetCartesianPose_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_SendGoal_Response_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Response>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Response)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_SendGoal_Event_type_support_ids_t;

static const _SetCartesianPose_SendGoal_Event_type_support_ids_t _SetCartesianPose_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_SendGoal_Event_type_support_symbol_names_t _SetCartesianPose_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Event)),
  }
};

typedef struct _SetCartesianPose_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_SendGoal_Event_type_support_data_t;

static _SetCartesianPose_SendGoal_Event_type_support_data_t _SetCartesianPose_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_SendGoal_Event_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Event__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Event__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Event>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal_Event)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_SendGoal_type_support_ids_t;

static const _SetCartesianPose_SendGoal_type_support_ids_t _SetCartesianPose_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_SendGoal_type_support_symbol_names_t _SetCartesianPose_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal)),
  }
};

typedef struct _SetCartesianPose_SendGoal_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_SendGoal_type_support_data_t;

static _SetCartesianPose_SendGoal_type_support_data_t _SetCartesianPose_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_SendGoal_service_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCartesianPose_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal>,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_GetResult_Request_type_support_ids_t;

static const _SetCartesianPose_GetResult_Request_type_support_ids_t _SetCartesianPose_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_GetResult_Request_type_support_symbol_names_t _SetCartesianPose_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Request)),
  }
};

typedef struct _SetCartesianPose_GetResult_Request_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_GetResult_Request_type_support_data_t;

static _SetCartesianPose_GetResult_Request_type_support_data_t _SetCartesianPose_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_GetResult_Request_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Request>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Request)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_GetResult_Response_type_support_ids_t;

static const _SetCartesianPose_GetResult_Response_type_support_ids_t _SetCartesianPose_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_GetResult_Response_type_support_symbol_names_t _SetCartesianPose_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Response)),
  }
};

typedef struct _SetCartesianPose_GetResult_Response_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_GetResult_Response_type_support_data_t;

static _SetCartesianPose_GetResult_Response_type_support_data_t _SetCartesianPose_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_GetResult_Response_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Response>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Response)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_GetResult_Event_type_support_ids_t;

static const _SetCartesianPose_GetResult_Event_type_support_ids_t _SetCartesianPose_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_GetResult_Event_type_support_symbol_names_t _SetCartesianPose_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Event)),
  }
};

typedef struct _SetCartesianPose_GetResult_Event_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_GetResult_Event_type_support_data_t;

static _SetCartesianPose_GetResult_Event_type_support_data_t _SetCartesianPose_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_GetResult_Event_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Event__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Event__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Event>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult_Event)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_GetResult_type_support_ids_t;

static const _SetCartesianPose_GetResult_type_support_ids_t _SetCartesianPose_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_GetResult_type_support_symbol_names_t _SetCartesianPose_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult)),
  }
};

typedef struct _SetCartesianPose_GetResult_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_GetResult_type_support_data_t;

static _SetCartesianPose_GetResult_type_support_data_t _SetCartesianPose_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_GetResult_service_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCartesianPose_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult>,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCartesianPose_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCartesianPose_FeedbackMessage_type_support_ids_t;

static const _SetCartesianPose_FeedbackMessage_type_support_ids_t _SetCartesianPose_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCartesianPose_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCartesianPose_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCartesianPose_FeedbackMessage_type_support_symbol_names_t _SetCartesianPose_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_FeedbackMessage)),
  }
};

typedef struct _SetCartesianPose_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _SetCartesianPose_FeedbackMessage_type_support_data_t;

static _SetCartesianPose_FeedbackMessage_type_support_data_t _SetCartesianPose_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCartesianPose_FeedbackMessage_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_SetCartesianPose_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_SetCartesianPose_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_SetCartesianPose_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCartesianPose_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCartesianPose_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_FeedbackMessage>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose_FeedbackMessage)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/set_cartesian_pose__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace robot_motion_interface_ros_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t SetCartesianPose_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose__get_type_hash,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose__get_type_description,
  &robot_motion_interface_ros_msgs__action__SetCartesianPose__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose>()
{
  using ::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::SetCartesianPose_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  SetCartesianPose_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::robot_motion_interface_ros_msgs::action::SetCartesianPose::Impl::SendGoalService>();
  SetCartesianPose_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::robot_motion_interface_ros_msgs::action::SetCartesianPose::Impl::GetResultService>();
  SetCartesianPose_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::robot_motion_interface_ros_msgs::action::SetCartesianPose::Impl::CancelGoalService>();
  SetCartesianPose_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::robot_motion_interface_ros_msgs::action::SetCartesianPose::Impl::FeedbackMessage>();
  SetCartesianPose_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::robot_motion_interface_ros_msgs::action::SetCartesianPose::Impl::GoalStatusMessage>();
  return &SetCartesianPose_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, SetCartesianPose)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<robot_motion_interface_ros_msgs::action::SetCartesianPose>();
}

#ifdef __cplusplus
}
#endif

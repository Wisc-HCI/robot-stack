// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from robot_motion_interface_ros_msgs:action/Home.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
#include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Goal_type_support_ids_t;

static const _Home_Goal_type_support_ids_t _Home_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_Goal_type_support_symbol_names_t _Home_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_Goal)),
  }
};

typedef struct _Home_Goal_type_support_data_t
{
  void * data[2];
} _Home_Goal_type_support_data_t;

static _Home_Goal_type_support_data_t _Home_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_Goal_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_Home_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_Home_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_Goal__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_Goal__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_Goal>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_Goal)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_Goal>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Result_type_support_ids_t;

static const _Home_Result_type_support_ids_t _Home_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_Result_type_support_symbol_names_t _Home_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_Result)),
  }
};

typedef struct _Home_Result_type_support_data_t
{
  void * data[2];
} _Home_Result_type_support_data_t;

static _Home_Result_type_support_data_t _Home_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_Result_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_Result_message_typesupport_ids.typesupport_identifier[0],
  &_Home_Result_message_typesupport_symbol_names.symbol_name[0],
  &_Home_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_Result__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_Result__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_Result>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_Result)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_Result>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_Feedback_type_support_ids_t;

static const _Home_Feedback_type_support_ids_t _Home_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_Feedback_type_support_symbol_names_t _Home_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_Feedback)),
  }
};

typedef struct _Home_Feedback_type_support_data_t
{
  void * data[2];
} _Home_Feedback_type_support_data_t;

static _Home_Feedback_type_support_data_t _Home_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_Feedback_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_Home_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_Home_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_Feedback__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_Feedback__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_Feedback>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_Feedback)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_Feedback>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Request_type_support_ids_t;

static const _Home_SendGoal_Request_type_support_ids_t _Home_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_Request_type_support_symbol_names_t _Home_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Request)),
  }
};

typedef struct _Home_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_Request_type_support_data_t;

static _Home_SendGoal_Request_type_support_data_t _Home_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_Request_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Request>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Request)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Request>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Response_type_support_ids_t;

static const _Home_SendGoal_Response_type_support_ids_t _Home_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_Response_type_support_symbol_names_t _Home_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Response)),
  }
};

typedef struct _Home_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_Response_type_support_data_t;

static _Home_SendGoal_Response_type_support_data_t _Home_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_Response_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Response>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Response)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Response>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_Event_type_support_ids_t;

static const _Home_SendGoal_Event_type_support_ids_t _Home_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_Event_type_support_symbol_names_t _Home_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Event)),
  }
};

typedef struct _Home_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_Event_type_support_data_t;

static _Home_SendGoal_Event_type_support_data_t _Home_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_Event_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Event__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Event__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Event>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal_Event)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Event>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_SendGoal_type_support_ids_t;

static const _Home_SendGoal_type_support_ids_t _Home_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_SendGoal_type_support_symbol_names_t _Home_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal)),
  }
};

typedef struct _Home_SendGoal_type_support_data_t
{
  void * data[2];
} _Home_SendGoal_type_support_data_t;

static _Home_SendGoal_type_support_data_t _Home_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_SendGoal_service_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_Home_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_Home_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Home_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robot_motion_interface_ros_msgs::action::Home_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robot_motion_interface_ros_msgs::action::Home_SendGoal>,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robot_motion_interface_ros_msgs::action::Home_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Request_type_support_ids_t;

static const _Home_GetResult_Request_type_support_ids_t _Home_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_Request_type_support_symbol_names_t _Home_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Request)),
  }
};

typedef struct _Home_GetResult_Request_type_support_data_t
{
  void * data[2];
} _Home_GetResult_Request_type_support_data_t;

static _Home_GetResult_Request_type_support_data_t _Home_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_Request_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Request__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Request__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Request>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Request)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Request>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Response_type_support_ids_t;

static const _Home_GetResult_Response_type_support_ids_t _Home_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_Response_type_support_symbol_names_t _Home_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Response)),
  }
};

typedef struct _Home_GetResult_Response_type_support_data_t
{
  void * data[2];
} _Home_GetResult_Response_type_support_data_t;

static _Home_GetResult_Response_type_support_data_t _Home_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_Response_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Response__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Response__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Response>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Response)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Response>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_Event_type_support_ids_t;

static const _Home_GetResult_Event_type_support_ids_t _Home_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_Event_type_support_symbol_names_t _Home_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Event)),
  }
};

typedef struct _Home_GetResult_Event_type_support_data_t
{
  void * data[2];
} _Home_GetResult_Event_type_support_data_t;

static _Home_GetResult_Event_type_support_data_t _Home_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_Event_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Event__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Event__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Event>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult_Event)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Event>();
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
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_GetResult_type_support_ids_t;

static const _Home_GetResult_type_support_ids_t _Home_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_GetResult_type_support_symbol_names_t _Home_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult)),
  }
};

typedef struct _Home_GetResult_type_support_data_t
{
  void * data[2];
} _Home_GetResult_type_support_data_t;

static _Home_GetResult_type_support_data_t _Home_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_GetResult_service_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_Home_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_Home_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Home_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<robot_motion_interface_ros_msgs::action::Home_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<robot_motion_interface_ros_msgs::action::Home_GetResult>,
  &robot_motion_interface_ros_msgs__action__Home_GetResult__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_GetResult__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<robot_motion_interface_ros_msgs::action::Home_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__functions.h"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

typedef struct _Home_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Home_FeedbackMessage_type_support_ids_t;

static const _Home_FeedbackMessage_type_support_ids_t _Home_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Home_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Home_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Home_FeedbackMessage_type_support_symbol_names_t _Home_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, robot_motion_interface_ros_msgs, action, Home_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_motion_interface_ros_msgs, action, Home_FeedbackMessage)),
  }
};

typedef struct _Home_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _Home_FeedbackMessage_type_support_data_t;

static _Home_FeedbackMessage_type_support_data_t _Home_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Home_FeedbackMessage_message_typesupport_map = {
  2,
  "robot_motion_interface_ros_msgs",
  &_Home_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_Home_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_Home_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Home_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Home_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_FeedbackMessage>()
{
  return &::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home_FeedbackMessage)() {
  return get_message_type_support_handle<robot_motion_interface_ros_msgs::action::Home_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "robot_motion_interface_ros_msgs/action/detail/home__struct.hpp"
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

static rosidl_action_type_support_t Home_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &robot_motion_interface_ros_msgs__action__Home__get_type_hash,
  &robot_motion_interface_ros_msgs__action__Home__get_type_description,
  &robot_motion_interface_ros_msgs__action__Home__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace robot_motion_interface_ros_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<robot_motion_interface_ros_msgs::action::Home>()
{
  using ::robot_motion_interface_ros_msgs::action::rosidl_typesupport_cpp::Home_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  Home_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::robot_motion_interface_ros_msgs::action::Home::Impl::SendGoalService>();
  Home_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::robot_motion_interface_ros_msgs::action::Home::Impl::GetResultService>();
  Home_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::robot_motion_interface_ros_msgs::action::Home::Impl::CancelGoalService>();
  Home_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::robot_motion_interface_ros_msgs::action::Home::Impl::FeedbackMessage>();
  Home_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::robot_motion_interface_ros_msgs::action::Home::Impl::GoalStatusMessage>();
  return &Home_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, robot_motion_interface_ros_msgs, action, Home)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<robot_motion_interface_ros_msgs::action::Home>();
}

#ifdef __cplusplus
}
#endif

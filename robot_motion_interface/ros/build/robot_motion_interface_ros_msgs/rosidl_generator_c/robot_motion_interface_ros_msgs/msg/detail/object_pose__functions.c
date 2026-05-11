// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `handle`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
robot_motion_interface_ros_msgs__msg__ObjectPose__init(robot_motion_interface_ros_msgs__msg__ObjectPose * msg)
{
  if (!msg) {
    return false;
  }
  // handle
  if (!rosidl_runtime_c__String__init(&msg->handle)) {
    robot_motion_interface_ros_msgs__msg__ObjectPose__fini(msg);
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    robot_motion_interface_ros_msgs__msg__ObjectPose__fini(msg);
    return false;
  }
  return true;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPose__fini(robot_motion_interface_ros_msgs__msg__ObjectPose * msg)
{
  if (!msg) {
    return;
  }
  // handle
  rosidl_runtime_c__String__fini(&msg->handle);
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPose__are_equal(const robot_motion_interface_ros_msgs__msg__ObjectPose * lhs, const robot_motion_interface_ros_msgs__msg__ObjectPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // handle
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->handle), &(rhs->handle)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPose__copy(
  const robot_motion_interface_ros_msgs__msg__ObjectPose * input,
  robot_motion_interface_ros_msgs__msg__ObjectPose * output)
{
  if (!input || !output) {
    return false;
  }
  // handle
  if (!rosidl_runtime_c__String__copy(
      &(input->handle), &(output->handle)))
  {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

robot_motion_interface_ros_msgs__msg__ObjectPose *
robot_motion_interface_ros_msgs__msg__ObjectPose__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_motion_interface_ros_msgs__msg__ObjectPose * msg = (robot_motion_interface_ros_msgs__msg__ObjectPose *)allocator.allocate(sizeof(robot_motion_interface_ros_msgs__msg__ObjectPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_motion_interface_ros_msgs__msg__ObjectPose));
  bool success = robot_motion_interface_ros_msgs__msg__ObjectPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPose__destroy(robot_motion_interface_ros_msgs__msg__ObjectPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_motion_interface_ros_msgs__msg__ObjectPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__init(robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_motion_interface_ros_msgs__msg__ObjectPose * data = NULL;

  if (size) {
    data = (robot_motion_interface_ros_msgs__msg__ObjectPose *)allocator.zero_allocate(size, sizeof(robot_motion_interface_ros_msgs__msg__ObjectPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_motion_interface_ros_msgs__msg__ObjectPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_motion_interface_ros_msgs__msg__ObjectPose__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__fini(robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_motion_interface_ros_msgs__msg__ObjectPose__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence *
robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * array = (robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence *)allocator.allocate(sizeof(robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__destroy(robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__are_equal(const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * lhs, const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_motion_interface_ros_msgs__msg__ObjectPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__copy(
  const robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * input,
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_motion_interface_ros_msgs__msg__ObjectPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_motion_interface_ros_msgs__msg__ObjectPose * data =
      (robot_motion_interface_ros_msgs__msg__ObjectPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_motion_interface_ros_msgs__msg__ObjectPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_motion_interface_ros_msgs__msg__ObjectPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_motion_interface_ros_msgs__msg__ObjectPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

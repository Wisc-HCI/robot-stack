// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_motion_interface_ros_msgs:msg/ObjectPoses.idl
// generated code does not contain a copyright notice
#include "robot_motion_interface_ros_msgs/msg/detail/object_poses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `objects`
#include "robot_motion_interface_ros_msgs/msg/detail/object_pose__functions.h"

bool
robot_motion_interface_ros_msgs__msg__ObjectPoses__init(robot_motion_interface_ros_msgs__msg__ObjectPoses * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(msg);
    return false;
  }
  // objects
  if (!robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__init(&msg->objects, 0)) {
    robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(msg);
    return false;
  }
  return true;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(robot_motion_interface_ros_msgs__msg__ObjectPoses * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // objects
  robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__fini(&msg->objects);
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPoses__are_equal(const robot_motion_interface_ros_msgs__msg__ObjectPoses * lhs, const robot_motion_interface_ros_msgs__msg__ObjectPoses * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // objects
  if (!robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__are_equal(
      &(lhs->objects), &(rhs->objects)))
  {
    return false;
  }
  return true;
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPoses__copy(
  const robot_motion_interface_ros_msgs__msg__ObjectPoses * input,
  robot_motion_interface_ros_msgs__msg__ObjectPoses * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // objects
  if (!robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__copy(
      &(input->objects), &(output->objects)))
  {
    return false;
  }
  return true;
}

robot_motion_interface_ros_msgs__msg__ObjectPoses *
robot_motion_interface_ros_msgs__msg__ObjectPoses__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_motion_interface_ros_msgs__msg__ObjectPoses * msg = (robot_motion_interface_ros_msgs__msg__ObjectPoses *)allocator.allocate(sizeof(robot_motion_interface_ros_msgs__msg__ObjectPoses), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_motion_interface_ros_msgs__msg__ObjectPoses));
  bool success = robot_motion_interface_ros_msgs__msg__ObjectPoses__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPoses__destroy(robot_motion_interface_ros_msgs__msg__ObjectPoses * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__init(robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_motion_interface_ros_msgs__msg__ObjectPoses * data = NULL;

  if (size) {
    data = (robot_motion_interface_ros_msgs__msg__ObjectPoses *)allocator.zero_allocate(size, sizeof(robot_motion_interface_ros_msgs__msg__ObjectPoses), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_motion_interface_ros_msgs__msg__ObjectPoses__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(&data[i - 1]);
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
robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__fini(robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * array)
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
      robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(&array->data[i]);
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

robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence *
robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * array = (robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence *)allocator.allocate(sizeof(robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__destroy(robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__are_equal(const robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * lhs, const robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_motion_interface_ros_msgs__msg__ObjectPoses__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__copy(
  const robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * input,
  robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_motion_interface_ros_msgs__msg__ObjectPoses);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_motion_interface_ros_msgs__msg__ObjectPoses * data =
      (robot_motion_interface_ros_msgs__msg__ObjectPoses *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_motion_interface_ros_msgs__msg__ObjectPoses__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_motion_interface_ros_msgs__msg__ObjectPoses__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_motion_interface_ros_msgs__msg__ObjectPoses__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

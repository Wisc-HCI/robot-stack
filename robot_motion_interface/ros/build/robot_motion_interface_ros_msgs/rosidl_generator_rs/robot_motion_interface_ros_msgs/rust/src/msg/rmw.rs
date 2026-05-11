#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__msg__ObjectPose() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__msg__ObjectPose__init(msg: *mut ObjectPose) -> bool;
    fn robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObjectPose>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObjectPose>);
    fn robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObjectPose>, out_seq: *mut rosidl_runtime_rs::Sequence<ObjectPose>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__msg__ObjectPose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ObjectPose ####

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub handle: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,

}



impl Default for ObjectPose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__msg__ObjectPose__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__msg__ObjectPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObjectPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__msg__ObjectPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObjectPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObjectPose where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/msg/ObjectPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__msg__ObjectPose() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__msg__ObjectPoses() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__msg__ObjectPoses__init(msg: *mut ObjectPoses) -> bool;
    fn robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObjectPoses>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObjectPoses>);
    fn robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObjectPoses>, out_seq: *mut rosidl_runtime_rs::Sequence<ObjectPoses>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__msg__ObjectPoses
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ObjectPoses ####

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObjectPoses {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub objects: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ObjectPose>,

}



impl Default for ObjectPoses {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__msg__ObjectPoses__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__msg__ObjectPoses__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObjectPoses {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__msg__ObjectPoses__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObjectPoses {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObjectPoses where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/msg/ObjectPoses";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__msg__ObjectPoses() }
  }
}



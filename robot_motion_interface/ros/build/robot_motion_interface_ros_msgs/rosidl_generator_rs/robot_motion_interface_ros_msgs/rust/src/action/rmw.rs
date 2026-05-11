
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__init(msg: *mut SetCartesianPose_Goal) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Goal>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Goal>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Goal>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_Goal {
    /// Goal
    pub pose_stamped: geometry_msgs::msg::rmw::PoseStamped,

}



impl Default for SetCartesianPose_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_Goal() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__init(msg: *mut SetCartesianPose_Result) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Result>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Result>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Result>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_Result {
    /// Result
    pub success: bool,

}



impl Default for SetCartesianPose_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_Result() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__init(msg: *mut SetCartesianPose_Feedback) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Feedback>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Feedback>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_Feedback>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetCartesianPose_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_Feedback() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__init(msg: *mut SetCartesianPose_FeedbackMessage) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_FeedbackMessage>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_FeedbackMessage>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_FeedbackMessage>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SetCartesianPose_Feedback,

}



impl Default for SetCartesianPose_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_FeedbackMessage() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_Goal__init(msg: *mut Home_Goal) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_Goal>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_Goal>);
    fn robot_motion_interface_ros_msgs__action__Home_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_Goal>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Home_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_Goal() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_Result__init(msg: *mut Home_Result) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_Result>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_Result>);
    fn robot_motion_interface_ros_msgs__action__Home_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_Result>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for Home_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_Result() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_Feedback__init(msg: *mut Home_Feedback) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_Feedback>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_Feedback>);
    fn robot_motion_interface_ros_msgs__action__Home_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_Feedback>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Home_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_Feedback() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__init(msg: *mut Home_FeedbackMessage) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_FeedbackMessage>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_FeedbackMessage>);
    fn robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_FeedbackMessage>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::Home_Feedback,

}



impl Default for Home_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_FeedbackMessage() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_Goal() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__init(msg: *mut SetJointPositions_Goal) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Goal>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Goal>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Goal>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_Goal {

    // This member is not documented.
    #[allow(missing_docs)]
    pub joint_state: sensor_msgs::msg::rmw::JointState,

}



impl Default for SetJointPositions_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_Goal() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_Result() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Result__init(msg: *mut SetJointPositions_Result) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Result>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Result>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Result>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_Result {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,

}



impl Default for SetJointPositions_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_Result__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_Result where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_Result() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__init(msg: *mut SetJointPositions_Feedback) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Feedback>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Feedback>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_Feedback>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_Feedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for SetJointPositions_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_Feedback() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__init(msg: *mut SetJointPositions_FeedbackMessage) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_FeedbackMessage>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_FeedbackMessage>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_FeedbackMessage>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::SetJointPositions_Feedback,

}



impl Default for SetJointPositions_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_FeedbackMessage() }
  }
}




#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__init(msg: *mut SetCartesianPose_SendGoal_Request) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Request>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Request>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Request>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SetCartesianPose_Goal,

}



impl Default for SetCartesianPose_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Request() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__init(msg: *mut SetCartesianPose_SendGoal_Response) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Response>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Response>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_SendGoal_Response>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SetCartesianPose_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal_Response() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__init(msg: *mut SetCartesianPose_GetResult_Request) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Request>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Request>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Request>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SetCartesianPose_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Request() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__init(msg: *mut SetCartesianPose_GetResult_Response) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Response>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Response>);
    fn robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetCartesianPose_GetResult_Response>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetCartesianPose_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SetCartesianPose_Result,

}



impl Default for SetCartesianPose_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetCartesianPose_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetCartesianPose_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetCartesianPose_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetCartesianPose_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult_Response() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__init(msg: *mut Home_SendGoal_Request) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_SendGoal_Request>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_SendGoal_Request>);
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_SendGoal_Request>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::Home_Goal,

}



impl Default for Home_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_SendGoal_Request() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__init(msg: *mut Home_SendGoal_Response) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_SendGoal_Response>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_SendGoal_Response>);
    fn robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_SendGoal_Response>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for Home_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_SendGoal_Response() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Request__init(msg: *mut Home_GetResult_Request) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_GetResult_Request>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_GetResult_Request>);
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_GetResult_Request>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for Home_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_GetResult_Request() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Response__init(msg: *mut Home_GetResult_Response) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Home_GetResult_Response>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Home_GetResult_Response>);
    fn robot_motion_interface_ros_msgs__action__Home_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Home_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<Home_GetResult_Response>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Home_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::Home_Result,

}



impl Default for Home_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__Home_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__Home_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Home_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__Home_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Home_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Home_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/Home_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__Home_GetResult_Response() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__init(msg: *mut SetJointPositions_SendGoal_Request) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Request>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Request>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Request>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::SetJointPositions_Goal,

}



impl Default for SetJointPositions_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Request() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__init(msg: *mut SetJointPositions_SendGoal_Response) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Response>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Response>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_SendGoal_Response>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for SetJointPositions_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal_Response() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__init(msg: *mut SetJointPositions_GetResult_Request) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Request>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Request>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Request>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for SetJointPositions_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Request() }
  }
}


#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "robot_motion_interface_ros_msgs__rosidl_generator_c")]
extern "C" {
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__init(msg: *mut SetJointPositions_GetResult_Response) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Response>, size: usize) -> bool;
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Response>);
    fn robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetJointPositions_GetResult_Response>) -> bool;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetJointPositions_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::SetJointPositions_Result,

}



impl Default for SetJointPositions_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetJointPositions_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetJointPositions_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetJointPositions_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "robot_motion_interface_ros_msgs/action/SetJointPositions_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult_Response() }
  }
}






#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCartesianPose_SendGoal;

impl rosidl_runtime_rs::Service for SetCartesianPose_SendGoal {
    type Request = SetCartesianPose_SendGoal_Request;
    type Response = SetCartesianPose_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_SendGoal() }
    }
}




#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SetCartesianPose_GetResult;

impl rosidl_runtime_rs::Service for SetCartesianPose_GetResult {
    type Request = SetCartesianPose_GetResult_Request;
    type Response = SetCartesianPose_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetCartesianPose_GetResult() }
    }
}




#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__Home_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct Home_SendGoal;

impl rosidl_runtime_rs::Service for Home_SendGoal {
    type Request = Home_SendGoal_Request;
    type Response = Home_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__Home_SendGoal() }
    }
}




#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__Home_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_motion_interface_ros_msgs__action__Home_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct Home_GetResult;

impl rosidl_runtime_rs::Service for Home_GetResult {
    type Request = Home_GetResult_Request;
    type Response = Home_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__Home_GetResult() }
    }
}




#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointPositions_SendGoal;

impl rosidl_runtime_rs::Service for SetJointPositions_SendGoal {
    type Request = SetJointPositions_SendGoal_Request;
    type Response = SetJointPositions_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_SendGoal() }
    }
}




#[link(name = "robot_motion_interface_ros_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct SetJointPositions_GetResult;

impl rosidl_runtime_rs::Service for SetJointPositions_GetResult {
    type Request = SetJointPositions_GetResult_Request;
    type Response = SetJointPositions_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__robot_motion_interface_ros_msgs__action__SetJointPositions_GetResult() }
    }
}



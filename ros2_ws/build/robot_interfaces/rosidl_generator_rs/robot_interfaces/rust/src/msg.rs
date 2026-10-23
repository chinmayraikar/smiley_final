#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_interfaces__msg__BnoReading

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BnoReading {

    // This member is not documented.
    #[allow(missing_docs)]
    pub current_angle: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pitch: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub roll: f32,

}



impl Default for BnoReading {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BnoReading::default())
  }
}

impl rosidl_runtime_rs::Message for BnoReading {
  type RmwMsg = super::msg::rmw::BnoReading;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        current_angle: msg.current_angle,
        pitch: msg.pitch,
        roll: msg.roll,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      current_angle: msg.current_angle,
      pitch: msg.pitch,
      roll: msg.roll,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      current_angle: msg.current_angle,
      pitch: msg.pitch,
      roll: msg.roll,
    }
  }
}


// Corresponds to robot_interfaces__msg__Velocity

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Velocity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vx: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vy: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vw: f32,

}



impl Default for Velocity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Velocity::default())
  }
}

impl rosidl_runtime_rs::Message for Velocity {
  type RmwMsg = super::msg::rmw::Velocity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vx: msg.vx,
        vy: msg.vy,
        vw: msg.vw,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      vx: msg.vx,
      vy: msg.vy,
      vw: msg.vw,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vx: msg.vx,
      vy: msg.vy,
      vw: msg.vw,
    }
  }
}



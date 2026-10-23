// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/BnoReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/bno_reading.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__BNO_READING__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__BNO_READING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/bno_reading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_BnoReading_roll
{
public:
  explicit Init_BnoReading_roll(::robot_interfaces::msg::BnoReading & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::BnoReading roll(::robot_interfaces::msg::BnoReading::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::BnoReading msg_;
};

class Init_BnoReading_pitch
{
public:
  explicit Init_BnoReading_pitch(::robot_interfaces::msg::BnoReading & msg)
  : msg_(msg)
  {}
  Init_BnoReading_roll pitch(::robot_interfaces::msg::BnoReading::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_BnoReading_roll(msg_);
  }

private:
  ::robot_interfaces::msg::BnoReading msg_;
};

class Init_BnoReading_current_angle
{
public:
  Init_BnoReading_current_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BnoReading_pitch current_angle(::robot_interfaces::msg::BnoReading::_current_angle_type arg)
  {
    msg_.current_angle = std::move(arg);
    return Init_BnoReading_pitch(msg_);
  }

private:
  ::robot_interfaces::msg::BnoReading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::BnoReading>()
{
  return robot_interfaces::msg::builder::Init_BnoReading_current_angle();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BNO_READING__BUILDER_HPP_

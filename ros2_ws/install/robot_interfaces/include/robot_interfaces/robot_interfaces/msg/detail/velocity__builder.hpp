// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/Velocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/velocity.hpp"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__VELOCITY__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_Velocity_vw
{
public:
  explicit Init_Velocity_vw(::robot_interfaces::msg::Velocity & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::Velocity vw(::robot_interfaces::msg::Velocity::_vw_type arg)
  {
    msg_.vw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::Velocity msg_;
};

class Init_Velocity_vy
{
public:
  explicit Init_Velocity_vy(::robot_interfaces::msg::Velocity & msg)
  : msg_(msg)
  {}
  Init_Velocity_vw vy(::robot_interfaces::msg::Velocity::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_Velocity_vw(msg_);
  }

private:
  ::robot_interfaces::msg::Velocity msg_;
};

class Init_Velocity_vx
{
public:
  Init_Velocity_vx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Velocity_vy vx(::robot_interfaces::msg::Velocity::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_Velocity_vy(msg_);
  }

private:
  ::robot_interfaces::msg::Velocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::Velocity>()
{
  return robot_interfaces::msg::builder::Init_Velocity_vx();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__VELOCITY__BUILDER_HPP_

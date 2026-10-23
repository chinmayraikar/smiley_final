// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Velocity.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/velocity.h"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__VELOCITY__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__VELOCITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Velocity in the package robot_interfaces.
typedef struct robot_interfaces__msg__Velocity
{
  float vx;
  float vy;
  float vw;
} robot_interfaces__msg__Velocity;

// Struct for a sequence of robot_interfaces__msg__Velocity.
typedef struct robot_interfaces__msg__Velocity__Sequence
{
  robot_interfaces__msg__Velocity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Velocity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__VELOCITY__STRUCT_H_

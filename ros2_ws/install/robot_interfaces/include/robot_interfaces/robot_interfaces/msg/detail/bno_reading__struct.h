// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/BnoReading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_interfaces/msg/bno_reading.h"


#ifndef ROBOT_INTERFACES__MSG__DETAIL__BNO_READING__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__BNO_READING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/BnoReading in the package robot_interfaces.
typedef struct robot_interfaces__msg__BnoReading
{
  float current_angle;
  float pitch;
  float roll;
} robot_interfaces__msg__BnoReading;

// Struct for a sequence of robot_interfaces__msg__BnoReading.
typedef struct robot_interfaces__msg__BnoReading__Sequence
{
  robot_interfaces__msg__BnoReading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__BnoReading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__BNO_READING__STRUCT_H_

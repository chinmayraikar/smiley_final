// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_interfaces:msg/Velocity.idl
// generated code does not contain a copyright notice

#include "robot_interfaces/msg/detail/velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__Velocity__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x80, 0x6e, 0x3c, 0xb7, 0x09, 0x12, 0x45, 0xe4,
      0x9e, 0x1b, 0x9e, 0x11, 0x59, 0x44, 0xfb, 0xce,
      0x59, 0xe6, 0x7e, 0xe7, 0x6f, 0x9c, 0x2b, 0xb9,
      0x70, 0xa4, 0x7b, 0xa1, 0x4f, 0x6c, 0xbe, 0x01,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_interfaces__msg__Velocity__TYPE_NAME[] = "robot_interfaces/msg/Velocity";

// Define type names, field names, and default values
static char robot_interfaces__msg__Velocity__FIELD_NAME__vx[] = "vx";
static char robot_interfaces__msg__Velocity__FIELD_NAME__vy[] = "vy";
static char robot_interfaces__msg__Velocity__FIELD_NAME__vw[] = "vw";

static rosidl_runtime_c__type_description__Field robot_interfaces__msg__Velocity__FIELDS[] = {
  {
    {robot_interfaces__msg__Velocity__FIELD_NAME__vx, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Velocity__FIELD_NAME__vy, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__Velocity__FIELD_NAME__vw, 2, 2},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_interfaces__msg__Velocity__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_interfaces__msg__Velocity__TYPE_NAME, 29, 29},
      {robot_interfaces__msg__Velocity__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "float32 vx\n"
  "float32 vy\n"
  "float32 vw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__Velocity__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_interfaces__msg__Velocity__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 33, 33},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__Velocity__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_interfaces__msg__Velocity__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

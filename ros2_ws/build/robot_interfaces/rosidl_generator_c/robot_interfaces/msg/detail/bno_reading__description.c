// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_interfaces:msg/BnoReading.idl
// generated code does not contain a copyright notice

#include "robot_interfaces/msg/detail/bno_reading__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_interfaces
const rosidl_type_hash_t *
robot_interfaces__msg__BnoReading__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x2b, 0x8d, 0xe4, 0x6f, 0xbb, 0xc9, 0x72,
      0x7f, 0x21, 0xa2, 0x82, 0x9a, 0x4d, 0xf2, 0x99,
      0x73, 0xcc, 0x6e, 0xf3, 0x45, 0x8e, 0xc6, 0x56,
      0xbc, 0xe4, 0xce, 0x66, 0x09, 0xcc, 0x41, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_interfaces__msg__BnoReading__TYPE_NAME[] = "robot_interfaces/msg/BnoReading";

// Define type names, field names, and default values
static char robot_interfaces__msg__BnoReading__FIELD_NAME__current_angle[] = "current_angle";
static char robot_interfaces__msg__BnoReading__FIELD_NAME__pitch[] = "pitch";
static char robot_interfaces__msg__BnoReading__FIELD_NAME__roll[] = "roll";

static rosidl_runtime_c__type_description__Field robot_interfaces__msg__BnoReading__FIELDS[] = {
  {
    {robot_interfaces__msg__BnoReading__FIELD_NAME__current_angle, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__BnoReading__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_interfaces__msg__BnoReading__FIELD_NAME__roll, 4, 4},
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
robot_interfaces__msg__BnoReading__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_interfaces__msg__BnoReading__TYPE_NAME, 31, 31},
      {robot_interfaces__msg__BnoReading__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 current_angle\n"
  "float32 pitch\n"
  "float32 roll\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_interfaces__msg__BnoReading__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_interfaces__msg__BnoReading__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 50, 50},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_interfaces__msg__BnoReading__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_interfaces__msg__BnoReading__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

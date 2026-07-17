// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_3f_interfaces:msg/GraspingMode.idl
// generated code does not contain a copyright notice

#include "robotiq_3f_interfaces/msg/detail/grasping_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_interfaces
const rosidl_type_hash_t *
robotiq_3f_interfaces__msg__GraspingMode__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xee, 0xa7, 0xea, 0x1a, 0x04, 0x10, 0xa9, 0x77,
      0xb1, 0x89, 0xd3, 0x7a, 0x8f, 0x69, 0xca, 0x49,
      0x7c, 0x9b, 0xc2, 0xa6, 0x38, 0x5b, 0x3e, 0x33,
      0x77, 0xe4, 0xcb, 0xe6, 0xd8, 0x9a, 0xa7, 0x5a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotiq_3f_interfaces__msg__GraspingMode__TYPE_NAME[] = "robotiq_3f_interfaces/msg/GraspingMode";

// Define type names, field names, and default values
static char robotiq_3f_interfaces__msg__GraspingMode__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field robotiq_3f_interfaces__msg__GraspingMode__FIELDS[] = {
  {
    {robotiq_3f_interfaces__msg__GraspingMode__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_3f_interfaces__msg__GraspingMode__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_3f_interfaces__msg__GraspingMode__TYPE_NAME, 38, 38},
      {robotiq_3f_interfaces__msg__GraspingMode__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 mode\n"
  "\n"
  "int8 BASIC=0\n"
  "int8 PINCH=1\n"
  "int8 WIDE=2\n"
  "int8 SCISSOR=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_3f_interfaces__msg__GraspingMode__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_3f_interfaces__msg__GraspingMode__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 64, 64},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_3f_interfaces__msg__GraspingMode__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_3f_interfaces__msg__GraspingMode__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

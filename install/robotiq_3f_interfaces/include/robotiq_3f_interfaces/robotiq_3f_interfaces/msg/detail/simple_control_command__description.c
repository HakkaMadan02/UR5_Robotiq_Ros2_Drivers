// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_3f_interfaces:msg/SimpleControlCommand.idl
// generated code does not contain a copyright notice

#include "robotiq_3f_interfaces/msg/detail/simple_control_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_interfaces
const rosidl_type_hash_t *
robotiq_3f_interfaces__msg__SimpleControlCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0x25, 0xe2, 0xc9, 0x26, 0xf5, 0x71, 0x6f,
      0xa8, 0x2f, 0xd1, 0x09, 0x27, 0x1e, 0x58, 0x8b,
      0xa5, 0xe4, 0x3c, 0x0e, 0xd0, 0xc9, 0x7a, 0xd5,
      0xd5, 0x15, 0x49, 0x66, 0x90, 0xc7, 0x8c, 0xf5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotiq_3f_interfaces__msg__SimpleControlCommand__TYPE_NAME[] = "robotiq_3f_interfaces/msg/SimpleControlCommand";

// Define type names, field names, and default values
static char robotiq_3f_interfaces__msg__SimpleControlCommand__FIELD_NAME__position[] = "position";
static char robotiq_3f_interfaces__msg__SimpleControlCommand__FIELD_NAME__velocity[] = "velocity";
static char robotiq_3f_interfaces__msg__SimpleControlCommand__FIELD_NAME__force[] = "force";

static rosidl_runtime_c__type_description__Field robotiq_3f_interfaces__msg__SimpleControlCommand__FIELDS[] = {
  {
    {robotiq_3f_interfaces__msg__SimpleControlCommand__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__SimpleControlCommand__FIELD_NAME__velocity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__SimpleControlCommand__FIELD_NAME__force, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_3f_interfaces__msg__SimpleControlCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_3f_interfaces__msg__SimpleControlCommand__TYPE_NAME, 46, 46},
      {robotiq_3f_interfaces__msg__SimpleControlCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 position\n"
  "float64 velocity\n"
  "float64 force";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_3f_interfaces__msg__SimpleControlCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_3f_interfaces__msg__SimpleControlCommand__TYPE_NAME, 46, 46},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_3f_interfaces__msg__SimpleControlCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_3f_interfaces__msg__SimpleControlCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

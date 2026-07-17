// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_3f_interfaces:msg/IndependentControlCommand.idl
// generated code does not contain a copyright notice

#include "robotiq_3f_interfaces/msg/detail/independent_control_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_interfaces
const rosidl_type_hash_t *
robotiq_3f_interfaces__msg__IndependentControlCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8f, 0x8a, 0xdc, 0x82, 0x95, 0xc3, 0xd0, 0x2b,
      0xb4, 0x1b, 0x87, 0x85, 0xa5, 0xe7, 0x00, 0xf7,
      0x15, 0xeb, 0x85, 0x06, 0x91, 0x44, 0x9a, 0x10,
      0x1b, 0x41, 0x07, 0xb0, 0x80, 0x9a, 0x81, 0x53,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotiq_3f_interfaces__msg__IndependentControlCommand__TYPE_NAME[] = "robotiq_3f_interfaces/msg/IndependentControlCommand";

// Define type names, field names, and default values
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_a_position[] = "finger_a_position";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_b_position[] = "finger_b_position";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_c_position[] = "finger_c_position";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__scissor_position[] = "scissor_position";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_a_velocity[] = "finger_a_velocity";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_b_velocity[] = "finger_b_velocity";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_c_velocity[] = "finger_c_velocity";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__scissor_velocity[] = "scissor_velocity";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_a_force[] = "finger_a_force";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_b_force[] = "finger_b_force";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_c_force[] = "finger_c_force";
static char robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__scissor_force[] = "scissor_force";

static rosidl_runtime_c__type_description__Field robotiq_3f_interfaces__msg__IndependentControlCommand__FIELDS[] = {
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_a_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_b_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_c_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__scissor_position, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_a_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_b_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_c_velocity, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__scissor_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_a_force, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_b_force, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__finger_c_force, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELD_NAME__scissor_force, 13, 13},
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
robotiq_3f_interfaces__msg__IndependentControlCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_3f_interfaces__msg__IndependentControlCommand__TYPE_NAME, 51, 51},
      {robotiq_3f_interfaces__msg__IndependentControlCommand__FIELDS, 12, 12},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 finger_a_position\n"
  "float64 finger_b_position\n"
  "float64 finger_c_position\n"
  "float64 scissor_position\n"
  "\n"
  "float64 finger_a_velocity\n"
  "float64 finger_b_velocity\n"
  "float64 finger_c_velocity\n"
  "float64 scissor_velocity\n"
  "\n"
  "float64 finger_a_force\n"
  "float64 finger_b_force\n"
  "float64 finger_c_force\n"
  "float64 scissor_force";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_3f_interfaces__msg__IndependentControlCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_3f_interfaces__msg__IndependentControlCommand__TYPE_NAME, 51, 51},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 299, 299},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_3f_interfaces__msg__IndependentControlCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_3f_interfaces__msg__IndependentControlCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

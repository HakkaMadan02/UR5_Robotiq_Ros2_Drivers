// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_3f_interfaces:msg/ObjectDetectionStatus.idl
// generated code does not contain a copyright notice

#include "robotiq_3f_interfaces/msg/detail/object_detection_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_interfaces
const rosidl_type_hash_t *
robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x54, 0x3b, 0xdd, 0x1e, 0x36, 0xb8, 0x49, 0x2d,
      0x80, 0x64, 0xa7, 0xfe, 0x8a, 0xf4, 0x40, 0x83,
      0xe9, 0x8c, 0xdf, 0x06, 0x13, 0x44, 0xd8, 0x95,
      0x1c, 0x32, 0x53, 0xdd, 0x8e, 0x29, 0x61, 0x9f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME[] = "robotiq_3f_interfaces/msg/ObjectDetectionStatus";

// Define type names, field names, and default values
static char robotiq_3f_interfaces__msg__ObjectDetectionStatus__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field robotiq_3f_interfaces__msg__ObjectDetectionStatus__FIELDS[] = {
  {
    {robotiq_3f_interfaces__msg__ObjectDetectionStatus__FIELD_NAME__status, 6, 6},
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
robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
      {robotiq_3f_interfaces__msg__ObjectDetectionStatus__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Reports whether an object has been gripped or not.\n"
  "int8 status\n"
  "\n"
  "int8 MOVING=0\n"
  "int8 OBJECT_DETECTED_OPENING=1\n"
  "int8 OBJECT_DETECTED_CLOSING=2\n"
  "int8 AT_REQUESTED_POSITION=3";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 171, 171},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

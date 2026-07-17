// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robotiq_3f_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#include "robotiq_3f_interfaces/msg/detail/status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robotiq_3f_interfaces
const rosidl_type_hash_t *
robotiq_3f_interfaces__msg__Status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0x08, 0xd7, 0x67, 0x7e, 0x03, 0xa6, 0x81,
      0x81, 0x1e, 0xbb, 0x99, 0xe2, 0x6d, 0xf6, 0xdb,
      0x3d, 0x64, 0x24, 0xb4, 0x66, 0x13, 0x98, 0x84,
      0xd0, 0x54, 0x16, 0x20, 0xff, 0xd3, 0x00, 0x0d,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "robotiq_3f_interfaces/msg/detail/object_detection_status__functions.h"
#include "robotiq_3f_interfaces/msg/detail/grasping_mode__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t robotiq_3f_interfaces__msg__GraspingMode__EXPECTED_HASH = {1, {
    0xee, 0xa7, 0xea, 0x1a, 0x04, 0x10, 0xa9, 0x77,
    0xb1, 0x89, 0xd3, 0x7a, 0x8f, 0x69, 0xca, 0x49,
    0x7c, 0x9b, 0xc2, 0xa6, 0x38, 0x5b, 0x3e, 0x33,
    0x77, 0xe4, 0xcb, 0xe6, 0xd8, 0x9a, 0xa7, 0x5a,
  }};
static const rosidl_type_hash_t robotiq_3f_interfaces__msg__ObjectDetectionStatus__EXPECTED_HASH = {1, {
    0x54, 0x3b, 0xdd, 0x1e, 0x36, 0xb8, 0x49, 0x2d,
    0x80, 0x64, 0xa7, 0xfe, 0x8a, 0xf4, 0x40, 0x83,
    0xe9, 0x8c, 0xdf, 0x06, 0x13, 0x44, 0xd8, 0x95,
    0x1c, 0x32, 0x53, 0xdd, 0x8e, 0x29, 0x61, 0x9f,
  }};
#endif

static char robotiq_3f_interfaces__msg__Status__TYPE_NAME[] = "robotiq_3f_interfaces/msg/Status";
static char robotiq_3f_interfaces__msg__GraspingMode__TYPE_NAME[] = "robotiq_3f_interfaces/msg/GraspingMode";
static char robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME[] = "robotiq_3f_interfaces/msg/ObjectDetectionStatus";

// Define type names, field names, and default values
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_object_detection[] = "finger_a_object_detection";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_object_detection[] = "finger_b_object_detection";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_object_detection[] = "finger_c_object_detection";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_object_detection[] = "scissor_object_detection";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_position[] = "finger_a_position";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_position[] = "finger_b_position";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_position[] = "finger_c_position";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_position[] = "scissor_position";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_current[] = "finger_a_current";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_current[] = "finger_b_current";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_current[] = "finger_c_current";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_current[] = "scissor_current";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_cmd_echo[] = "finger_a_cmd_echo";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_cmd_echo[] = "finger_b_cmd_echo";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_cmd_echo[] = "finger_c_cmd_echo";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_cmd_echo[] = "scissor_cmd_echo";
static char robotiq_3f_interfaces__msg__Status__FIELD_NAME__mode[] = "mode";

static rosidl_runtime_c__type_description__Field robotiq_3f_interfaces__msg__Status__FIELDS[] = {
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_object_detection, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_object_detection, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_object_detection, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_object_detection, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_position, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_current, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_current, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_current, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_current, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_a_cmd_echo, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_b_cmd_echo, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__finger_c_cmd_echo, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__scissor_cmd_echo, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__Status__FIELD_NAME__mode, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robotiq_3f_interfaces__msg__GraspingMode__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robotiq_3f_interfaces__msg__Status__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {robotiq_3f_interfaces__msg__GraspingMode__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {robotiq_3f_interfaces__msg__ObjectDetectionStatus__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robotiq_3f_interfaces__msg__Status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robotiq_3f_interfaces__msg__Status__TYPE_NAME, 32, 32},
      {robotiq_3f_interfaces__msg__Status__FIELDS, 17, 17},
    },
    {robotiq_3f_interfaces__msg__Status__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&robotiq_3f_interfaces__msg__GraspingMode__EXPECTED_HASH, robotiq_3f_interfaces__msg__GraspingMode__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = robotiq_3f_interfaces__msg__GraspingMode__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&robotiq_3f_interfaces__msg__ObjectDetectionStatus__EXPECTED_HASH, robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Reports whether an object has been gripped or not.\n"
  "robotiq_3f_interfaces/ObjectDetectionStatus finger_a_object_detection\n"
  "robotiq_3f_interfaces/ObjectDetectionStatus finger_b_object_detection\n"
  "robotiq_3f_interfaces/ObjectDetectionStatus finger_c_object_detection\n"
  "robotiq_3f_interfaces/ObjectDetectionStatus scissor_object_detection\n"
  "\n"
  "# Actuator states\n"
  "uint8 finger_a_position\n"
  "uint8 finger_b_position\n"
  "uint8 finger_c_position\n"
  "uint8 scissor_position\n"
  "\n"
  "uint8 finger_a_current\n"
  "uint8 finger_b_current\n"
  "uint8 finger_c_current\n"
  "uint8 scissor_current\n"
  "\n"
  "uint8 finger_a_cmd_echo\n"
  "uint8 finger_b_cmd_echo\n"
  "uint8 finger_c_cmd_echo\n"
  "uint8 scissor_cmd_echo\n"
  "\n"
  "robotiq_3f_interfaces/GraspingMode mode\n"
  "\n"
  "# GripperActivationStatus activation_status\n"
  "# GoTo go_to_status\n"
  "# GripperStatus gripper_status\n"
  "# MotionStatus motion_status\n"
  "# GripperFaultStatus fault_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robotiq_3f_interfaces__msg__Status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robotiq_3f_interfaces__msg__Status__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 834, 834},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robotiq_3f_interfaces__msg__Status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robotiq_3f_interfaces__msg__Status__get_individual_type_description_source(NULL),
    sources[1] = *robotiq_3f_interfaces__msg__GraspingMode__get_individual_type_description_source(NULL);
    sources[2] = *robotiq_3f_interfaces__msg__ObjectDetectionStatus__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

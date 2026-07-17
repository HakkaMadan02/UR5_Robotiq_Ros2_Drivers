// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from robotiq_3f_interfaces:msg/Status.idl
// generated code does not contain a copyright notice
#include "robotiq_3f_interfaces/msg/detail/status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "robotiq_3f_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "robotiq_3f_interfaces/msg/detail/status__struct.h"
#include "robotiq_3f_interfaces/msg/detail/status__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "robotiq_3f_interfaces/msg/detail/grasping_mode__functions.h"  // mode
#include "robotiq_3f_interfaces/msg/detail/object_detection_status__functions.h"  // finger_a_object_detection, finger_b_object_detection, finger_c_object_detection, scissor_object_detection

// forward declare type support functions

bool cdr_serialize_robotiq_3f_interfaces__msg__GraspingMode(
  const robotiq_3f_interfaces__msg__GraspingMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_robotiq_3f_interfaces__msg__GraspingMode(
  eprosima::fastcdr::Cdr & cdr,
  robotiq_3f_interfaces__msg__GraspingMode * ros_message);

size_t get_serialized_size_robotiq_3f_interfaces__msg__GraspingMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robotiq_3f_interfaces__msg__GraspingMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_robotiq_3f_interfaces__msg__GraspingMode(
  const robotiq_3f_interfaces__msg__GraspingMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_robotiq_3f_interfaces__msg__GraspingMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_robotiq_3f_interfaces__msg__GraspingMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_3f_interfaces, msg, GraspingMode)();

bool cdr_serialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  const robotiq_3f_interfaces__msg__ObjectDetectionStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  eprosima::fastcdr::Cdr & cdr,
  robotiq_3f_interfaces__msg__ObjectDetectionStatus * ros_message);

size_t get_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  const robotiq_3f_interfaces__msg__ObjectDetectionStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_3f_interfaces, msg, ObjectDetectionStatus)();


using _Status__ros_msg_type = robotiq_3f_interfaces__msg__Status;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
bool cdr_serialize_robotiq_3f_interfaces__msg__Status(
  const robotiq_3f_interfaces__msg__Status * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: finger_a_object_detection
  {
    cdr_serialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->finger_a_object_detection, cdr);
  }

  // Field name: finger_b_object_detection
  {
    cdr_serialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->finger_b_object_detection, cdr);
  }

  // Field name: finger_c_object_detection
  {
    cdr_serialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->finger_c_object_detection, cdr);
  }

  // Field name: scissor_object_detection
  {
    cdr_serialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->scissor_object_detection, cdr);
  }

  // Field name: finger_a_position
  {
    cdr << ros_message->finger_a_position;
  }

  // Field name: finger_b_position
  {
    cdr << ros_message->finger_b_position;
  }

  // Field name: finger_c_position
  {
    cdr << ros_message->finger_c_position;
  }

  // Field name: scissor_position
  {
    cdr << ros_message->scissor_position;
  }

  // Field name: finger_a_current
  {
    cdr << ros_message->finger_a_current;
  }

  // Field name: finger_b_current
  {
    cdr << ros_message->finger_b_current;
  }

  // Field name: finger_c_current
  {
    cdr << ros_message->finger_c_current;
  }

  // Field name: scissor_current
  {
    cdr << ros_message->scissor_current;
  }

  // Field name: finger_a_cmd_echo
  {
    cdr << ros_message->finger_a_cmd_echo;
  }

  // Field name: finger_b_cmd_echo
  {
    cdr << ros_message->finger_b_cmd_echo;
  }

  // Field name: finger_c_cmd_echo
  {
    cdr << ros_message->finger_c_cmd_echo;
  }

  // Field name: scissor_cmd_echo
  {
    cdr << ros_message->scissor_cmd_echo;
  }

  // Field name: mode
  {
    cdr_serialize_robotiq_3f_interfaces__msg__GraspingMode(
      &ros_message->mode, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
bool cdr_deserialize_robotiq_3f_interfaces__msg__Status(
  eprosima::fastcdr::Cdr & cdr,
  robotiq_3f_interfaces__msg__Status * ros_message)
{
  // Field name: finger_a_object_detection
  {
    cdr_deserialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(cdr, &ros_message->finger_a_object_detection);
  }

  // Field name: finger_b_object_detection
  {
    cdr_deserialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(cdr, &ros_message->finger_b_object_detection);
  }

  // Field name: finger_c_object_detection
  {
    cdr_deserialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(cdr, &ros_message->finger_c_object_detection);
  }

  // Field name: scissor_object_detection
  {
    cdr_deserialize_robotiq_3f_interfaces__msg__ObjectDetectionStatus(cdr, &ros_message->scissor_object_detection);
  }

  // Field name: finger_a_position
  {
    cdr >> ros_message->finger_a_position;
  }

  // Field name: finger_b_position
  {
    cdr >> ros_message->finger_b_position;
  }

  // Field name: finger_c_position
  {
    cdr >> ros_message->finger_c_position;
  }

  // Field name: scissor_position
  {
    cdr >> ros_message->scissor_position;
  }

  // Field name: finger_a_current
  {
    cdr >> ros_message->finger_a_current;
  }

  // Field name: finger_b_current
  {
    cdr >> ros_message->finger_b_current;
  }

  // Field name: finger_c_current
  {
    cdr >> ros_message->finger_c_current;
  }

  // Field name: scissor_current
  {
    cdr >> ros_message->scissor_current;
  }

  // Field name: finger_a_cmd_echo
  {
    cdr >> ros_message->finger_a_cmd_echo;
  }

  // Field name: finger_b_cmd_echo
  {
    cdr >> ros_message->finger_b_cmd_echo;
  }

  // Field name: finger_c_cmd_echo
  {
    cdr >> ros_message->finger_c_cmd_echo;
  }

  // Field name: scissor_cmd_echo
  {
    cdr >> ros_message->scissor_cmd_echo;
  }

  // Field name: mode
  {
    cdr_deserialize_robotiq_3f_interfaces__msg__GraspingMode(cdr, &ros_message->mode);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
size_t get_serialized_size_robotiq_3f_interfaces__msg__Status(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: finger_a_object_detection
  current_alignment += get_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->finger_a_object_detection), current_alignment);

  // Field name: finger_b_object_detection
  current_alignment += get_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->finger_b_object_detection), current_alignment);

  // Field name: finger_c_object_detection
  current_alignment += get_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->finger_c_object_detection), current_alignment);

  // Field name: scissor_object_detection
  current_alignment += get_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->scissor_object_detection), current_alignment);

  // Field name: finger_a_position
  {
    size_t item_size = sizeof(ros_message->finger_a_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_b_position
  {
    size_t item_size = sizeof(ros_message->finger_b_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_c_position
  {
    size_t item_size = sizeof(ros_message->finger_c_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scissor_position
  {
    size_t item_size = sizeof(ros_message->scissor_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_a_current
  {
    size_t item_size = sizeof(ros_message->finger_a_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_b_current
  {
    size_t item_size = sizeof(ros_message->finger_b_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_c_current
  {
    size_t item_size = sizeof(ros_message->finger_c_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scissor_current
  {
    size_t item_size = sizeof(ros_message->scissor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_a_cmd_echo
  {
    size_t item_size = sizeof(ros_message->finger_a_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_b_cmd_echo
  {
    size_t item_size = sizeof(ros_message->finger_b_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_c_cmd_echo
  {
    size_t item_size = sizeof(ros_message->finger_c_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scissor_cmd_echo
  {
    size_t item_size = sizeof(ros_message->scissor_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode
  current_alignment += get_serialized_size_robotiq_3f_interfaces__msg__GraspingMode(
    &(ros_message->mode), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
size_t max_serialized_size_robotiq_3f_interfaces__msg__Status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: finger_a_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: finger_b_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: finger_c_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scissor_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: finger_a_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_b_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_c_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: scissor_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_a_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_b_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_c_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: scissor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_a_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_b_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_c_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: scissor_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_robotiq_3f_interfaces__msg__GraspingMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotiq_3f_interfaces__msg__Status;
    is_plain =
      (
      offsetof(DataType, mode) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
bool cdr_serialize_key_robotiq_3f_interfaces__msg__Status(
  const robotiq_3f_interfaces__msg__Status * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: finger_a_object_detection
  {
    cdr_serialize_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->finger_a_object_detection, cdr);
  }

  // Field name: finger_b_object_detection
  {
    cdr_serialize_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->finger_b_object_detection, cdr);
  }

  // Field name: finger_c_object_detection
  {
    cdr_serialize_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->finger_c_object_detection, cdr);
  }

  // Field name: scissor_object_detection
  {
    cdr_serialize_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
      &ros_message->scissor_object_detection, cdr);
  }

  // Field name: finger_a_position
  {
    cdr << ros_message->finger_a_position;
  }

  // Field name: finger_b_position
  {
    cdr << ros_message->finger_b_position;
  }

  // Field name: finger_c_position
  {
    cdr << ros_message->finger_c_position;
  }

  // Field name: scissor_position
  {
    cdr << ros_message->scissor_position;
  }

  // Field name: finger_a_current
  {
    cdr << ros_message->finger_a_current;
  }

  // Field name: finger_b_current
  {
    cdr << ros_message->finger_b_current;
  }

  // Field name: finger_c_current
  {
    cdr << ros_message->finger_c_current;
  }

  // Field name: scissor_current
  {
    cdr << ros_message->scissor_current;
  }

  // Field name: finger_a_cmd_echo
  {
    cdr << ros_message->finger_a_cmd_echo;
  }

  // Field name: finger_b_cmd_echo
  {
    cdr << ros_message->finger_b_cmd_echo;
  }

  // Field name: finger_c_cmd_echo
  {
    cdr << ros_message->finger_c_cmd_echo;
  }

  // Field name: scissor_cmd_echo
  {
    cdr << ros_message->scissor_cmd_echo;
  }

  // Field name: mode
  {
    cdr_serialize_key_robotiq_3f_interfaces__msg__GraspingMode(
      &ros_message->mode, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
size_t get_serialized_size_key_robotiq_3f_interfaces__msg__Status(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Status__ros_msg_type * ros_message = static_cast<const _Status__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: finger_a_object_detection
  current_alignment += get_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->finger_a_object_detection), current_alignment);

  // Field name: finger_b_object_detection
  current_alignment += get_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->finger_b_object_detection), current_alignment);

  // Field name: finger_c_object_detection
  current_alignment += get_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->finger_c_object_detection), current_alignment);

  // Field name: scissor_object_detection
  current_alignment += get_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
    &(ros_message->scissor_object_detection), current_alignment);

  // Field name: finger_a_position
  {
    size_t item_size = sizeof(ros_message->finger_a_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_b_position
  {
    size_t item_size = sizeof(ros_message->finger_b_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_c_position
  {
    size_t item_size = sizeof(ros_message->finger_c_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scissor_position
  {
    size_t item_size = sizeof(ros_message->scissor_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_a_current
  {
    size_t item_size = sizeof(ros_message->finger_a_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_b_current
  {
    size_t item_size = sizeof(ros_message->finger_b_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_c_current
  {
    size_t item_size = sizeof(ros_message->finger_c_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scissor_current
  {
    size_t item_size = sizeof(ros_message->scissor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_a_cmd_echo
  {
    size_t item_size = sizeof(ros_message->finger_a_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_b_cmd_echo
  {
    size_t item_size = sizeof(ros_message->finger_b_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: finger_c_cmd_echo
  {
    size_t item_size = sizeof(ros_message->finger_c_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: scissor_cmd_echo
  {
    size_t item_size = sizeof(ros_message->scissor_cmd_echo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: mode
  current_alignment += get_serialized_size_key_robotiq_3f_interfaces__msg__GraspingMode(
    &(ros_message->mode), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_robotiq_3f_interfaces
size_t max_serialized_size_key_robotiq_3f_interfaces__msg__Status(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: finger_a_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: finger_b_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: finger_c_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: scissor_object_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robotiq_3f_interfaces__msg__ObjectDetectionStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: finger_a_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_b_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_c_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: scissor_position
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_a_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_b_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_c_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: scissor_current
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_a_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_b_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: finger_c_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: scissor_cmd_echo
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_robotiq_3f_interfaces__msg__GraspingMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = robotiq_3f_interfaces__msg__Status;
    is_plain =
      (
      offsetof(DataType, mode) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Status__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const robotiq_3f_interfaces__msg__Status * ros_message = static_cast<const robotiq_3f_interfaces__msg__Status *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_robotiq_3f_interfaces__msg__Status(ros_message, cdr);
}

static bool _Status__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  robotiq_3f_interfaces__msg__Status * ros_message = static_cast<robotiq_3f_interfaces__msg__Status *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_robotiq_3f_interfaces__msg__Status(cdr, ros_message);
}

static uint32_t _Status__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_robotiq_3f_interfaces__msg__Status(
      untyped_ros_message, 0));
}

static size_t _Status__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_robotiq_3f_interfaces__msg__Status(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Status = {
  "robotiq_3f_interfaces::msg",
  "Status",
  _Status__cdr_serialize,
  _Status__cdr_deserialize,
  _Status__get_serialized_size,
  _Status__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Status__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Status,
  get_message_typesupport_handle_function,
  &robotiq_3f_interfaces__msg__Status__get_type_hash,
  &robotiq_3f_interfaces__msg__Status__get_type_description,
  &robotiq_3f_interfaces__msg__Status__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robotiq_3f_interfaces, msg, Status)() {
  return &_Status__type_support;
}

#if defined(__cplusplus)
}
#endif

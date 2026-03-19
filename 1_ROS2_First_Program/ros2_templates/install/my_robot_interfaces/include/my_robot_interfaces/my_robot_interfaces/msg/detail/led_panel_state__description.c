// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/LEDPanelState.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/led_panel_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__LEDPanelState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0e, 0x72, 0xaa, 0x17, 0xa3, 0xf7, 0xb1, 0x5e,
      0xb8, 0x7a, 0x29, 0xf8, 0x2f, 0xb3, 0xa0, 0xa7,
      0x87, 0xf1, 0x09, 0xd5, 0xbf, 0x6c, 0x22, 0xd5,
      0x6e, 0xec, 0x0e, 0x38, 0xfe, 0xce, 0x83, 0x5b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__LEDPanelState__TYPE_NAME[] = "my_robot_interfaces/msg/LEDPanelState";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__LEDPanelState__FIELD_NAME__led_states[] = "led_states";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__LEDPanelState__FIELDS[] = {
  {
    {my_robot_interfaces__msg__LEDPanelState__FIELD_NAME__led_states, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__LEDPanelState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__LEDPanelState__TYPE_NAME, 37, 37},
      {my_robot_interfaces__msg__LEDPanelState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64[] led_states";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__LEDPanelState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__LEDPanelState__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__LEDPanelState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__LEDPanelState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

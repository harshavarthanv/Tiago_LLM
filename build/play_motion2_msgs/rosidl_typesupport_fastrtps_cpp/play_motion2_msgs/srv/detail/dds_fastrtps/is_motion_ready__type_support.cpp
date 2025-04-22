// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from play_motion2_msgs:srv/IsMotionReady.idl
// generated code does not contain a copyright notice
#include "play_motion2_msgs/srv/detail/is_motion_ready__rosidl_typesupport_fastrtps_cpp.hpp"
#include "play_motion2_msgs/srv/detail/is_motion_ready__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace play_motion2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_serialize(
  const play_motion2_msgs::srv::IsMotionReady_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motion_key
  cdr << ros_message.motion_key;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs::srv::IsMotionReady_Request & ros_message)
{
  // Member: motion_key
  cdr >> ros_message.motion_key;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
get_serialized_size(
  const play_motion2_msgs::srv::IsMotionReady_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motion_key
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motion_key.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
max_serialized_size_IsMotionReady_Request(
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


  // Member: motion_key
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = play_motion2_msgs::srv::IsMotionReady_Request;
    is_plain =
      (
      offsetof(DataType, motion_key) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IsMotionReady_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const play_motion2_msgs::srv::IsMotionReady_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IsMotionReady_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<play_motion2_msgs::srv::IsMotionReady_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IsMotionReady_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const play_motion2_msgs::srv::IsMotionReady_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IsMotionReady_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IsMotionReady_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IsMotionReady_Request__callbacks = {
  "play_motion2_msgs::srv",
  "IsMotionReady_Request",
  _IsMotionReady_Request__cdr_serialize,
  _IsMotionReady_Request__cdr_deserialize,
  _IsMotionReady_Request__get_serialized_size,
  _IsMotionReady_Request__max_serialized_size
};

static rosidl_message_type_support_t _IsMotionReady_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsMotionReady_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace play_motion2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_play_motion2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::IsMotionReady_Request>()
{
  return &play_motion2_msgs::srv::typesupport_fastrtps_cpp::_IsMotionReady_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, play_motion2_msgs, srv, IsMotionReady_Request)() {
  return &play_motion2_msgs::srv::typesupport_fastrtps_cpp::_IsMotionReady_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace play_motion2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_serialize(
  const play_motion2_msgs::srv::IsMotionReady_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: is_ready
  cdr << (ros_message.is_ready ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  play_motion2_msgs::srv::IsMotionReady_Response & ros_message)
{
  // Member: is_ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_ready = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
get_serialized_size(
  const play_motion2_msgs::srv::IsMotionReady_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: is_ready
  {
    size_t item_size = sizeof(ros_message.is_ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_play_motion2_msgs
max_serialized_size_IsMotionReady_Response(
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


  // Member: is_ready
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = play_motion2_msgs::srv::IsMotionReady_Response;
    is_plain =
      (
      offsetof(DataType, is_ready) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IsMotionReady_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const play_motion2_msgs::srv::IsMotionReady_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IsMotionReady_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<play_motion2_msgs::srv::IsMotionReady_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IsMotionReady_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const play_motion2_msgs::srv::IsMotionReady_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IsMotionReady_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IsMotionReady_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IsMotionReady_Response__callbacks = {
  "play_motion2_msgs::srv",
  "IsMotionReady_Response",
  _IsMotionReady_Response__cdr_serialize,
  _IsMotionReady_Response__cdr_deserialize,
  _IsMotionReady_Response__get_serialized_size,
  _IsMotionReady_Response__max_serialized_size
};

static rosidl_message_type_support_t _IsMotionReady_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsMotionReady_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace play_motion2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_play_motion2_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<play_motion2_msgs::srv::IsMotionReady_Response>()
{
  return &play_motion2_msgs::srv::typesupport_fastrtps_cpp::_IsMotionReady_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, play_motion2_msgs, srv, IsMotionReady_Response)() {
  return &play_motion2_msgs::srv::typesupport_fastrtps_cpp::_IsMotionReady_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace play_motion2_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _IsMotionReady__callbacks = {
  "play_motion2_msgs::srv",
  "IsMotionReady",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, play_motion2_msgs, srv, IsMotionReady_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, play_motion2_msgs, srv, IsMotionReady_Response)(),
};

static rosidl_service_type_support_t _IsMotionReady__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IsMotionReady__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace play_motion2_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_play_motion2_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<play_motion2_msgs::srv::IsMotionReady>()
{
  return &play_motion2_msgs::srv::typesupport_fastrtps_cpp::_IsMotionReady__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, play_motion2_msgs, srv, IsMotionReady)() {
  return &play_motion2_msgs::srv::typesupport_fastrtps_cpp::_IsMotionReady__handle;
}

#ifdef __cplusplus
}
#endif

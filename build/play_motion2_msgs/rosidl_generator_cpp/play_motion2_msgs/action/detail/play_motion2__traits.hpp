// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from play_motion2_msgs:action/PlayMotion2.idl
// generated code does not contain a copyright notice

#ifndef PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__TRAITS_HPP_
#define PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "play_motion2_msgs/action/detail/play_motion2__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: motion_name
  {
    out << "motion_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_name, out);
    out << ", ";
  }

  // member: skip_planning
  {
    out << "skip_planning: ";
    rosidl_generator_traits::value_to_yaml(msg.skip_planning, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motion_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_name: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_name, out);
    out << "\n";
  }

  // member: skip_planning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "skip_planning: ";
    rosidl_generator_traits::value_to_yaml(msg.skip_planning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_Goal & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_Goal>()
{
  return "play_motion2_msgs::action::PlayMotion2_Goal";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_Goal>()
{
  return "play_motion2_msgs/action/PlayMotion2_Goal";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_Result & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_Result>()
{
  return "play_motion2_msgs::action::PlayMotion2_Result";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_Result>()
{
  return "play_motion2_msgs/action/PlayMotion2_Result";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'current_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_time
  {
    out << "current_time: ";
    to_flow_style_yaml(msg.current_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_time:\n";
    to_block_style_yaml(msg.current_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_Feedback & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_Feedback>()
{
  return "play_motion2_msgs::action::PlayMotion2_Feedback";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_Feedback>()
{
  return "play_motion2_msgs/action/PlayMotion2_Feedback";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "play_motion2_msgs/action/detail/play_motion2__traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_SendGoal_Request & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>()
{
  return "play_motion2_msgs::action::PlayMotion2_SendGoal_Request";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>()
{
  return "play_motion2_msgs/action/PlayMotion2_SendGoal_Request";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<play_motion2_msgs::action::PlayMotion2_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<play_motion2_msgs::action::PlayMotion2_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
// already included above
// #include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_SendGoal_Response & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>()
{
  return "play_motion2_msgs::action::PlayMotion2_SendGoal_Response";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>()
{
  return "play_motion2_msgs/action/PlayMotion2_SendGoal_Response";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_SendGoal>()
{
  return "play_motion2_msgs::action::PlayMotion2_SendGoal";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_SendGoal>()
{
  return "play_motion2_msgs/action/PlayMotion2_SendGoal";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>::value &&
    has_fixed_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>::value &&
    has_bounded_size<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<play_motion2_msgs::action::PlayMotion2_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<play_motion2_msgs::action::PlayMotion2_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<play_motion2_msgs::action::PlayMotion2_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_GetResult_Request & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_GetResult_Request>()
{
  return "play_motion2_msgs::action::PlayMotion2_GetResult_Request";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_GetResult_Request>()
{
  return "play_motion2_msgs/action/PlayMotion2_GetResult_Request";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_GetResult_Response & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_GetResult_Response>()
{
  return "play_motion2_msgs::action::PlayMotion2_GetResult_Response";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_GetResult_Response>()
{
  return "play_motion2_msgs/action/PlayMotion2_GetResult_Response";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<play_motion2_msgs::action::PlayMotion2_Result>::value> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<play_motion2_msgs::action::PlayMotion2_Result>::value> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_GetResult>()
{
  return "play_motion2_msgs::action::PlayMotion2_GetResult";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_GetResult>()
{
  return "play_motion2_msgs/action/PlayMotion2_GetResult";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<play_motion2_msgs::action::PlayMotion2_GetResult_Request>::value &&
    has_fixed_size<play_motion2_msgs::action::PlayMotion2_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<play_motion2_msgs::action::PlayMotion2_GetResult_Request>::value &&
    has_bounded_size<play_motion2_msgs::action::PlayMotion2_GetResult_Response>::value
  >
{
};

template<>
struct is_service<play_motion2_msgs::action::PlayMotion2_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<play_motion2_msgs::action::PlayMotion2_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<play_motion2_msgs::action::PlayMotion2_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "play_motion2_msgs/action/detail/play_motion2__traits.hpp"

namespace play_motion2_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const PlayMotion2_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlayMotion2_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlayMotion2_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace play_motion2_msgs

namespace rosidl_generator_traits
{

[[deprecated("use play_motion2_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const play_motion2_msgs::action::PlayMotion2_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  play_motion2_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use play_motion2_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const play_motion2_msgs::action::PlayMotion2_FeedbackMessage & msg)
{
  return play_motion2_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<play_motion2_msgs::action::PlayMotion2_FeedbackMessage>()
{
  return "play_motion2_msgs::action::PlayMotion2_FeedbackMessage";
}

template<>
inline const char * name<play_motion2_msgs::action::PlayMotion2_FeedbackMessage>()
{
  return "play_motion2_msgs/action/PlayMotion2_FeedbackMessage";
}

template<>
struct has_fixed_size<play_motion2_msgs::action::PlayMotion2_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<play_motion2_msgs::action::PlayMotion2_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<play_motion2_msgs::action::PlayMotion2_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<play_motion2_msgs::action::PlayMotion2_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<play_motion2_msgs::action::PlayMotion2_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<play_motion2_msgs::action::PlayMotion2>
  : std::true_type
{
};

template<>
struct is_action_goal<play_motion2_msgs::action::PlayMotion2_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<play_motion2_msgs::action::PlayMotion2_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<play_motion2_msgs::action::PlayMotion2_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // PLAY_MOTION2_MSGS__ACTION__DETAIL__PLAY_MOTION2__TRAITS_HPP_

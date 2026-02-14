// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from addverb_cobot_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "addverb_cobot_msgs/msg/detail/cartesian_point__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace addverb_cobot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void CartesianPoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) addverb_cobot_msgs::msg::CartesianPoint(_init);
}

void CartesianPoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<addverb_cobot_msgs::msg::CartesianPoint *>(message_memory);
  typed_message->~CartesianPoint();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CartesianPoint_message_member_array[2] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addverb_cobot_msgs::msg::CartesianPoint, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(addverb_cobot_msgs::msg::CartesianPoint, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CartesianPoint_message_members = {
  "addverb_cobot_msgs::msg",  // message namespace
  "CartesianPoint",  // message name
  2,  // number of fields
  sizeof(addverb_cobot_msgs::msg::CartesianPoint),
  CartesianPoint_message_member_array,  // message members
  CartesianPoint_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianPoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CartesianPoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CartesianPoint_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace addverb_cobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<addverb_cobot_msgs::msg::CartesianPoint>()
{
  return &::addverb_cobot_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianPoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, addverb_cobot_msgs, msg, CartesianPoint)() {
  return &::addverb_cobot_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianPoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

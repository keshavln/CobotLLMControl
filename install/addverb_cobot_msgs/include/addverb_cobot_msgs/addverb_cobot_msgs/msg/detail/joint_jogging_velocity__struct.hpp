// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from addverb_cobot_msgs:msg/JointJoggingVelocity.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__STRUCT_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__msg__JointJoggingVelocity __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__msg__JointJoggingVelocity __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointJoggingVelocity_
{
  using Type = JointJoggingVelocity_<ContainerAllocator>;

  explicit JointJoggingVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit JointJoggingVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _jvel_scaling_factor_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _jvel_scaling_factor_type jvel_scaling_factor;

  // setters for named parameter idiom
  Type & set__jvel_scaling_factor(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->jvel_scaling_factor = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__msg__JointJoggingVelocity
    std::shared_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__msg__JointJoggingVelocity
    std::shared_ptr<addverb_cobot_msgs::msg::JointJoggingVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointJoggingVelocity_ & other) const
  {
    if (this->jvel_scaling_factor != other.jvel_scaling_factor) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointJoggingVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointJoggingVelocity_

// alias to use template instance with default allocator
using JointJoggingVelocity =
  addverb_cobot_msgs::msg::JointJoggingVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__JOINT_JOGGING_VELOCITY__STRUCT_HPP_

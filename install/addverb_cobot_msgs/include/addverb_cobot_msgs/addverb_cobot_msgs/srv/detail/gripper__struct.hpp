// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from addverb_cobot_msgs:srv/Gripper.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__STRUCT_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__srv__Gripper_Request __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__srv__Gripper_Request __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gripper_Request_
{
  using Type = Gripper_Request_<ContainerAllocator>;

  explicit Gripper_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->grasp_force = 0.0;
    }
  }

  explicit Gripper_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->position = 0.0;
      this->grasp_force = 0.0;
    }
  }

  // field types and members
  using _position_type =
    double;
  _position_type position;
  using _grasp_force_type =
    double;
  _grasp_force_type grasp_force;

  // setters for named parameter idiom
  Type & set__position(
    const double & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__grasp_force(
    const double & _arg)
  {
    this->grasp_force = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__srv__Gripper_Request
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__srv__Gripper_Request
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gripper_Request_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->grasp_force != other.grasp_force) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gripper_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gripper_Request_

// alias to use template instance with default allocator
using Gripper_Request =
  addverb_cobot_msgs::srv::Gripper_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace addverb_cobot_msgs


#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__srv__Gripper_Response __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__srv__Gripper_Response __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gripper_Response_
{
  using Type = Gripper_Response_<ContainerAllocator>;

  explicit Gripper_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit Gripper_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__srv__Gripper_Response
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__srv__Gripper_Response
    std::shared_ptr<addverb_cobot_msgs::srv::Gripper_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gripper_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gripper_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gripper_Response_

// alias to use template instance with default allocator
using Gripper_Response =
  addverb_cobot_msgs::srv::Gripper_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace addverb_cobot_msgs

namespace addverb_cobot_msgs
{

namespace srv
{

struct Gripper
{
  using Request = addverb_cobot_msgs::srv::Gripper_Request;
  using Response = addverb_cobot_msgs::srv::Gripper_Response;
};

}  // namespace srv

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__GRIPPER__STRUCT_HPP_

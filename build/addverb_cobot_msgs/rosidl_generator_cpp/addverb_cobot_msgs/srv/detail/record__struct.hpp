// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from addverb_cobot_msgs:srv/Record.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__STRUCT_HPP_
#define ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__srv__Record_Request __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__srv__Record_Request __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Record_Request_
{
  using Type = Record_Request_<ContainerAllocator>;

  explicit Record_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->label = "";
      this->rate = 0l;
    }
  }

  explicit Record_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enable = false;
      this->label = "";
      this->rate = 0l;
    }
  }

  // field types and members
  using _enable_type =
    bool;
  _enable_type enable;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _label_type label;
  using _rate_type =
    int32_t;
  _rate_type rate;

  // setters for named parameter idiom
  Type & set__enable(
    const bool & _arg)
  {
    this->enable = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->label = _arg;
    return *this;
  }
  Type & set__rate(
    const int32_t & _arg)
  {
    this->rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__srv__Record_Request
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__srv__Record_Request
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Record_Request_ & other) const
  {
    if (this->enable != other.enable) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    if (this->rate != other.rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const Record_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Record_Request_

// alias to use template instance with default allocator
using Record_Request =
  addverb_cobot_msgs::srv::Record_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace addverb_cobot_msgs


#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__srv__Record_Response __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__srv__Record_Response __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Record_Response_
{
  using Type = Record_Response_<ContainerAllocator>;

  explicit Record_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->status = false;
    }
  }

  explicit Record_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->status = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__srv__Record_Response
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__srv__Record_Response
    std::shared_ptr<addverb_cobot_msgs::srv::Record_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Record_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const Record_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Record_Response_

// alias to use template instance with default allocator
using Record_Response =
  addverb_cobot_msgs::srv::Record_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace addverb_cobot_msgs

namespace addverb_cobot_msgs
{

namespace srv
{

struct Record
{
  using Request = addverb_cobot_msgs::srv::Record_Request;
  using Response = addverb_cobot_msgs::srv::Record_Response;
};

}  // namespace srv

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__SRV__DETAIL__RECORD__STRUCT_HPP_

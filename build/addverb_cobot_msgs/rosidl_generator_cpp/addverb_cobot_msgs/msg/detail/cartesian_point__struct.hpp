// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from addverb_cobot_msgs:msg/CartesianPoint.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__msg__CartesianPoint __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__msg__CartesianPoint __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianPoint_
{
  using Type = CartesianPoint_<ContainerAllocator>;

  explicit CartesianPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit CartesianPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__msg__CartesianPoint
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__msg__CartesianPoint
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianPoint_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianPoint_

// alias to use template instance with default allocator
using CartesianPoint =
  addverb_cobot_msgs::msg::CartesianPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_POINT__STRUCT_HPP_

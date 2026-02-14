// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from addverb_cobot_msgs:msg/CartesianTrajectory.idl
// generated code does not contain a copyright notice

#ifndef ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_HPP_
#define ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "addverb_cobot_msgs/msg/detail/cartesian_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__addverb_cobot_msgs__msg__CartesianTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__addverb_cobot_msgs__msg__CartesianTrajectory __declspec(deprecated)
#endif

namespace addverb_cobot_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianTrajectory_
{
  using Type = CartesianTrajectory_<ContainerAllocator>;

  explicit CartesianTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CartesianTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _points_type =
    std::vector<addverb_cobot_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<addverb_cobot_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>>;
  _points_type points;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<addverb_cobot_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<addverb_cobot_msgs::msg::CartesianTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__addverb_cobot_msgs__msg__CartesianTrajectory
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__addverb_cobot_msgs__msg__CartesianTrajectory
    std::shared_ptr<addverb_cobot_msgs::msg::CartesianTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianTrajectory_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianTrajectory_

// alias to use template instance with default allocator
using CartesianTrajectory =
  addverb_cobot_msgs::msg::CartesianTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace addverb_cobot_msgs

#endif  // ADDVERB_COBOT_MSGS__MSG__DETAIL__CARTESIAN_TRAJECTORY__STRUCT_HPP_

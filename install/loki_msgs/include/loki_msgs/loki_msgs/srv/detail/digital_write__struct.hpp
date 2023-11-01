// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from loki_msgs:srv/DigitalWrite.idl
// generated code does not contain a copyright notice

#ifndef LOKI_MSGS__SRV__DETAIL__DIGITAL_WRITE__STRUCT_HPP_
#define LOKI_MSGS__SRV__DETAIL__DIGITAL_WRITE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__DigitalWrite_Request __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__DigitalWrite_Request __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DigitalWrite_Request_
{
  using Type = DigitalWrite_Request_<ContainerAllocator>;

  explicit DigitalWrite_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0l;
      this->data = false;
    }
  }

  explicit DigitalWrite_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pin = 0l;
      this->data = false;
    }
  }

  // field types and members
  using _pin_type =
    int32_t;
  _pin_type pin;
  using _data_type =
    bool;
  _data_type data;

  // setters for named parameter idiom
  Type & set__pin(
    const int32_t & _arg)
  {
    this->pin = _arg;
    return *this;
  }
  Type & set__data(
    const bool & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__DigitalWrite_Request
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__DigitalWrite_Request
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DigitalWrite_Request_ & other) const
  {
    if (this->pin != other.pin) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DigitalWrite_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DigitalWrite_Request_

// alias to use template instance with default allocator
using DigitalWrite_Request =
  loki_msgs::srv::DigitalWrite_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs


#ifndef _WIN32
# define DEPRECATED__loki_msgs__srv__DigitalWrite_Response __attribute__((deprecated))
#else
# define DEPRECATED__loki_msgs__srv__DigitalWrite_Response __declspec(deprecated)
#endif

namespace loki_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DigitalWrite_Response_
{
  using Type = DigitalWrite_Response_<ContainerAllocator>;

  explicit DigitalWrite_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit DigitalWrite_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__loki_msgs__srv__DigitalWrite_Response
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__loki_msgs__srv__DigitalWrite_Response
    std::shared_ptr<loki_msgs::srv::DigitalWrite_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DigitalWrite_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const DigitalWrite_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DigitalWrite_Response_

// alias to use template instance with default allocator
using DigitalWrite_Response =
  loki_msgs::srv::DigitalWrite_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace loki_msgs

namespace loki_msgs
{

namespace srv
{

struct DigitalWrite
{
  using Request = loki_msgs::srv::DigitalWrite_Request;
  using Response = loki_msgs::srv::DigitalWrite_Response;
};

}  // namespace srv

}  // namespace loki_msgs

#endif  // LOKI_MSGS__SRV__DETAIL__DIGITAL_WRITE__STRUCT_HPP_

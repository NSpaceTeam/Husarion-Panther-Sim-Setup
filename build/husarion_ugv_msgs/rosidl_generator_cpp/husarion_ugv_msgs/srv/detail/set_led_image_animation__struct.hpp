// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from husarion_ugv_msgs:srv/SetLEDImageAnimation.idl
// generated code does not contain a copyright notice

#ifndef HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_IMAGE_ANIMATION__STRUCT_HPP_
#define HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_IMAGE_ANIMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'front'
// Member 'rear'
#include "husarion_ugv_msgs/msg/detail/led_image_animation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Request __attribute__((deprecated))
#else
# define DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Request __declspec(deprecated)
#endif

namespace husarion_ugv_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLEDImageAnimation_Request_
{
  using Type = SetLEDImageAnimation_Request_<ContainerAllocator>;

  explicit SetLEDImageAnimation_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : front(_init),
    rear(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interrupting = false;
      this->repeating = false;
    }
  }

  explicit SetLEDImageAnimation_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : front(_alloc, _init),
    rear(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->interrupting = false;
      this->repeating = false;
    }
  }

  // field types and members
  using _front_type =
    husarion_ugv_msgs::msg::LEDImageAnimation_<ContainerAllocator>;
  _front_type front;
  using _rear_type =
    husarion_ugv_msgs::msg::LEDImageAnimation_<ContainerAllocator>;
  _rear_type rear;
  using _interrupting_type =
    bool;
  _interrupting_type interrupting;
  using _repeating_type =
    bool;
  _repeating_type repeating;

  // setters for named parameter idiom
  Type & set__front(
    const husarion_ugv_msgs::msg::LEDImageAnimation_<ContainerAllocator> & _arg)
  {
    this->front = _arg;
    return *this;
  }
  Type & set__rear(
    const husarion_ugv_msgs::msg::LEDImageAnimation_<ContainerAllocator> & _arg)
  {
    this->rear = _arg;
    return *this;
  }
  Type & set__interrupting(
    const bool & _arg)
  {
    this->interrupting = _arg;
    return *this;
  }
  Type & set__repeating(
    const bool & _arg)
  {
    this->repeating = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Request
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Request
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLEDImageAnimation_Request_ & other) const
  {
    if (this->front != other.front) {
      return false;
    }
    if (this->rear != other.rear) {
      return false;
    }
    if (this->interrupting != other.interrupting) {
      return false;
    }
    if (this->repeating != other.repeating) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLEDImageAnimation_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLEDImageAnimation_Request_

// alias to use template instance with default allocator
using SetLEDImageAnimation_Request =
  husarion_ugv_msgs::srv::SetLEDImageAnimation_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace husarion_ugv_msgs


#ifndef _WIN32
# define DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Response __attribute__((deprecated))
#else
# define DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Response __declspec(deprecated)
#endif

namespace husarion_ugv_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLEDImageAnimation_Response_
{
  using Type = SetLEDImageAnimation_Response_<ContainerAllocator>;

  explicit SetLEDImageAnimation_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
    }
  }

  explicit SetLEDImageAnimation_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Response
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__husarion_ugv_msgs__srv__SetLEDImageAnimation_Response
    std::shared_ptr<husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLEDImageAnimation_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLEDImageAnimation_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLEDImageAnimation_Response_

// alias to use template instance with default allocator
using SetLEDImageAnimation_Response =
  husarion_ugv_msgs::srv::SetLEDImageAnimation_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace husarion_ugv_msgs

namespace husarion_ugv_msgs
{

namespace srv
{

struct SetLEDImageAnimation
{
  using Request = husarion_ugv_msgs::srv::SetLEDImageAnimation_Request;
  using Response = husarion_ugv_msgs::srv::SetLEDImageAnimation_Response;
};

}  // namespace srv

}  // namespace husarion_ugv_msgs

#endif  // HUSARION_UGV_MSGS__SRV__DETAIL__SET_LED_IMAGE_ANIMATION__STRUCT_HPP_

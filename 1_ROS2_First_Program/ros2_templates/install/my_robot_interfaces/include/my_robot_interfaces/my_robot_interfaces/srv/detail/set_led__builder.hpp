// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_interfaces:srv/SetLed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/srv/set_led.hpp"


#ifndef MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Request_state
{
public:
  explicit Init_SetLed_Request_state(::my_robot_interfaces::srv::SetLed_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::SetLed_Request state(::my_robot_interfaces::srv::SetLed_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLed_Request msg_;
};

class Init_SetLed_Request_led_number
{
public:
  Init_SetLed_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Request_state led_number(::my_robot_interfaces::srv::SetLed_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLed_Request_state(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLed_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLed_Request>()
{
  return my_robot_interfaces::srv::builder::Init_SetLed_Request_led_number();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Response_success
{
public:
  Init_SetLed_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_interfaces::srv::SetLed_Response success(::my_robot_interfaces::srv::SetLed_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLed_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLed_Response>()
{
  return my_robot_interfaces::srv::builder::Init_SetLed_Response_success();
}

}  // namespace my_robot_interfaces


namespace my_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLed_Event_response
{
public:
  explicit Init_SetLed_Event_response(::my_robot_interfaces::srv::SetLed_Event & msg)
  : msg_(msg)
  {}
  ::my_robot_interfaces::srv::SetLed_Event response(::my_robot_interfaces::srv::SetLed_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLed_Event msg_;
};

class Init_SetLed_Event_request
{
public:
  explicit Init_SetLed_Event_request(::my_robot_interfaces::srv::SetLed_Event & msg)
  : msg_(msg)
  {}
  Init_SetLed_Event_response request(::my_robot_interfaces::srv::SetLed_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLed_Event_response(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLed_Event msg_;
};

class Init_SetLed_Event_info
{
public:
  Init_SetLed_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLed_Event_request info(::my_robot_interfaces::srv::SetLed_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLed_Event_request(msg_);
  }

private:
  ::my_robot_interfaces::srv::SetLed_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_interfaces::srv::SetLed_Event>()
{
  return my_robot_interfaces::srv::builder::Init_SetLed_Event_info();
}

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#ifndef XRM_ZMP_HEV_INTERFACE_HPP
#define XRM_ZMP_HEV_INTERFACE_HPP

#include <rclcpp/rclcpp.hpp>

#include <algorithm>
#include <cmath>
#include <memory>
#include <string>
#include <cstdlib>
#include <optional>

class XRM_ZMP_HEV_interface : public rclcpp::Node
{
public:
  XRM_ZMP_HEV_interface();
  ~XRM_ZMP_HEV_interface();
};

#endif  // XRM_ZMP_HEV_INTERFACE_HPP
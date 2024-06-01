#include <flatland_plugins/gps.hpp>
#include <flatland_server/model_plugin.hpp>
#include <gtest/gtest.hpp>
#include <pluginlib/class_loader.hpp>
#include "rclcpp/rclcpp.hpp"

TEST(GpsPluginTest, load_test) {
  pluginlib::ClassLoader<flatland_server::ModelPlugin> loader(
      "flatland_server", "flatland_server::ModelPlugin");

  try {
    boost::shared_ptr<flatland_server::ModelPlugin> plugin =
        loader.createInstance("flatland_plugins::Gps");
  } catch (pluginlib::PluginlibException& e) {
    FAIL() << "Failed to load GPS plugin. " << e.what();
  }
}

// Run all the tests that were declared with TEST()
int main(int argc, char** argv) {
  ros::init(argc, argv, "gps_test");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

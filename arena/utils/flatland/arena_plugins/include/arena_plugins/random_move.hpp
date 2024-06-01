#include <Box2D/Box2D.hpp>
#include <flatland_plugins/update_timer.hpp>
#include <flatland_server/model_plugin.hpp>
#include <flatland_server/timekeeper.hpp>
#include <flatland_server/types.hpp>
#include <geometry_msgs/Twist.hpp>
#include <nav_msgs/Odometry.hpp>
#include <std_msgs/Bool.hpp>


#ifndef ARENA_PLUGINS_RANDOM_MOVE_H
#define ARENA_PLUGINS_RANDOM_MOVE_H
using namespace flatland_server;
namespace flatland_plugins {

/* This class  defines a plugin to move the dynamic objects randomly.
 */
class RandomMove : public ModelPlugin {
 public:
  Body* body_;  // The body this plugin is attached to
  float linear_velocity_;  // The linear verlocity that the objects keeps.
  float angular_velocity_max_; // The maxmum angular_velocity of the objects.

  /**
   * @name          OnInitialize
   * @brief         override the OnInitialize method
   * @param[in]     config The plugin YAML node
   */
  void OnInitialize(const YAML::Node& config) override;
  /**
   * @name          BeforePhysicsStep
   * @brief         override the BeforePhysicsStep method
   * @param[in]     config The plugin YAML node
   */
  void BeforePhysicsStep(const Timekeeper& Timekeeper) override;

  float randomRange(const float range_lo, const float range_hi);
};

};  // end namespace arena_plugins

#endif
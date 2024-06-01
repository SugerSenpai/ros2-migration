/**
* Copyright 2014-2016 Social Robotics Lab, University of Freiburg
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
*    # Redistributions of source code must retain the above copyright
*       notice, this list of conditions and the following disclaimer.
*    # Redistributions in binary form must reproduce the above copyright
*       notice, this list of conditions and the following disclaimer in the
*       documentation and/or other materials provided with the distribution.
*    # Neither the name of the University of Freiburg nor the names of its
*       contributors may be used to endorse or promote products derived from
*       this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
* ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
* LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
* SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
* INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
* CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
* ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
* POSSIBILITY OF SUCH DAMAGE.
*
* \author Billy Okal <okal@cs.uni-freiburg.de>
*/

#ifndef SIMULATOR_H
#define SIMULATOR_H

#include <ros/console.hpp>
#include "rclcpp/rclcpp.hpp"

#include "tf2_ros/transform_listener.hpp"
#include <functional>
#include <memory>

#include <pedsim_msgs/AgentForce.hpp>
#include <pedsim_msgs/AgentGroup.hpp>
#include <pedsim_msgs/AgentGroups.hpp>
#include <pedsim_msgs/AgentState.hpp>
#include <pedsim_msgs/AgentStates.hpp>
#include <pedsim_msgs/Wall.hpp>
#include <pedsim_msgs/Walls.hpp>
#include <pedsim_msgs/Waypoint.hpp>
#include <pedsim_msgs/Waypoints.hpp>
#include <pedsim_msgs/Obstacle.hpp>
#include <pedsim_msgs/Obstacles.hpp>
#include <pedsim_msgs/PedsimAgentsDataframe.hpp>
#include <pedsim_msgs/AgentFeedback.hpp>
#include <pedsim_msgs/AgentFeedbacks.hpp>

#include <geometry_msgs/Point.hpp>
#include <geometry_msgs/PoseStamped.hpp>
#include <geometry_msgs/PoseWithCovariance.hpp>
#include <geometry_msgs/TwistWithCovariance.hpp>
#include <nav_msgs/Odometry.hpp>
#include <std_msgs/Header.hpp>
#include <std_srvs/Empty.hpp>

#include <pedsim_simulator/agentstatemachine.hpp>
#include <pedsim_simulator/config.hpp>
#include <pedsim_simulator/element/robot.hpp>
#include <pedsim_simulator/element/agent.hpp>
#include <pedsim_simulator/element/agentgroup.hpp>
#include <pedsim_simulator/element/attractionarea.hpp>
#include <pedsim_simulator/element/obstacle.hpp>
#include <pedsim_simulator/element/waitingqueue.hpp>
#include <pedsim_simulator/element/waypoint.hpp>
#include <pedsim_simulator/scenarioreader.hpp>
#include <pedsim_simulator/scene.hpp>

#include <dynamic_reconfigure/server.hpp>
#include <pedsim_simulator/PedsimSimulatorConfig.hpp>

#include <cmath>

using SimConfig = pedsim_simulator::PedsimSimulatorConfig;

/// \class Simulator
/// \brief Simulation wrapper
/// \details ROS interface to the scene object provided by pedsim
class Simulator {
 public:
  explicit Simulator(const ros::NodeHandle& node);
  virtual ~Simulator();
  bool initializeSimulation();
  void runSimulation();

  // callbacks
  bool onPauseSimulation(std_srvs::Empty::Request& request,
                         std_srvs::Empty::Response& response);
  bool onUnpauseSimulation(std_srvs::Empty::Request& request,
                           std_srvs::Empty::Response& response);

  void spawnCallback(const ros::TimerEvent& event);
  void odomCallback(const nav_msgs::OdometryConstPtr &odom);

 protected:
  void reconfigureCB(SimConfig& config, uint32_t level);
  dynamic_reconfigure::Server<SimConfig> server_;
  
 private:
  void updateRobotPositionFromTF();

  pedsim_msgs::AgentStates getAgentStates();
  pedsim_msgs::Waypoints getWaypoints();
  pedsim_msgs::Walls getWalls();
  pedsim_msgs::Obstacles getObstacles();

  void publishAgents(pedsim_msgs::AgentStates agents);
  void publishGroups();
  void publishWalls(pedsim_msgs::Walls walls);
  void publishObstacles(pedsim_msgs::Obstacles obstacles);
  void publishRobotPosition();
  void publishWaypoints(pedsim_msgs::Waypoints waypoints);
  void publishPedsimAgents(
    pedsim_msgs::AgentStates agents,
    pedsim_msgs::AgentGroups groups,
    pedsim_msgs::Waypoints waypoints,
    pedsim_msgs::Walls walls,
    pedsim_msgs::Obstacles obstacles
  );

 private:
  ros::NodeHandle nh_;
  bool paused_;
  ros::Timer spawn_timer_;

  // publishers
  ros::Publisher pub_walls_;
  ros::Publisher pub_agent_states_;
  ros::Publisher pub_agent_groups_;
  ros::Publisher pub_robot_position_;
  ros::Publisher pub_waypoints_;
  ros::Publisher pub_obstacles_;
  
  // pedsim_pedsim_agents
  ros::Publisher pub_pedsim_agents_;
  ros::Subscriber sub_pedsim_agents_;
  void onPedsimAgents(pedsim_msgs::AgentFeedbacks agents);

  // provided services
  ros::ServiceServer srv_pause_simulation_;
  ros::ServiceServer srv_unpause_simulation_;

  // frame ids
  std::string frame_id_;
  std::string robot_base_frame_id_;

  // pointers and additional data
  std::unique_ptr<tf::TransformListener> transform_listener_;
  Agent* robot_;
  tf::StampedTransform last_robot_pose_;
  geometry_msgs::Quaternion last_robot_orientation_;
  ros::Subscriber odom_sub_;

  inline std::string agentStateToActivity(
      const AgentStateMachine::AgentState& state) const;

  inline std_msgs::Header createMsgHeader() const;
};

#endif

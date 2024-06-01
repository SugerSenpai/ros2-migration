#include <pedsim_simulator/agent_pose_stamped.hpp>

AgentPoseStamped::AgentPoseStamped(ros::Time timestamp_in, Ped::Tvector pos_in, double theta_in) {
  timestamp = timestamp_in;
  pos = pos_in;
  theta = theta_in;
}


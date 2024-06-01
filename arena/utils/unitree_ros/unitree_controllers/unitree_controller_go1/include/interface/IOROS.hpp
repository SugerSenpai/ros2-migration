/**********************************************************************
 Copyright (c) 2020-2023, Unitree Robotics.Co.Ltd. All rights reserved.
***********************************************************************/
#ifdef COMPILE_WITH_ROS

#ifndef IOROS_H
#define IOROS_H

#include "ros/ros.hpp"
#include "interface/IOInterface.hpp"
#include "unitree_legged_msgs/LowCmd.hpp"
#include "unitree_legged_msgs/LowState.hpp"
#include "unitree_legged_msgs/MotorCmd.hpp"
#include "unitree_legged_msgs/MotorState.hpp"
#include <sensor_msgs/Imu.hpp>
#include <string>
#include "interface/ROSParams.hpp"
#include <geometry_msgs/Twist.hpp>
#include <rosgraph_msgs/Clock.hpp>

class IOROS : public IOInterface{
public:
    IOROS(bool blocking = false);
    ~IOROS();
    void sendRecv(const LowlevelCmd *cmd, LowlevelState *state);
    ROSParams* params;

private:
    void sendCmd(const LowlevelCmd *cmd);
    void recvState(LowlevelState *state);
    ros::NodeHandle _nm;
    ros::Subscriber _servo_sub[12], _imu_sub;
    ros::Publisher _servo_pub[12];
    unitree_legged_msgs::LowCmd _lowCmd;
    unitree_legged_msgs::LowState _lowState;

    //repeated functions for multi-thread
    void initRecv(bool blocking);
    void initSend();

    //Callback functions for ROS
    void imuCallback(const sensor_msgs::Imu & msg);

    void FRhipCallback(const unitree_legged_msgs::MotorState& msg);
    void FRthighCallback(const unitree_legged_msgs::MotorState& msg);
    void FRcalfCallback(const unitree_legged_msgs::MotorState& msg);

    void FLhipCallback(const unitree_legged_msgs::MotorState& msg);
    void FLthighCallback(const unitree_legged_msgs::MotorState& msg);
    void FLcalfCallback(const unitree_legged_msgs::MotorState& msg);

    void RRhipCallback(const unitree_legged_msgs::MotorState& msg);
    void RRthighCallback(const unitree_legged_msgs::MotorState& msg);
    void RRcalfCallback(const unitree_legged_msgs::MotorState& msg);

    void RLhipCallback(const unitree_legged_msgs::MotorState& msg);
    void RLthighCallback(const unitree_legged_msgs::MotorState& msg);
    void RLcalfCallback(const unitree_legged_msgs::MotorState& msg);
    
    ros::Subscriber _clockSub;
    ros::Time clock /*, lastPublish, lastRecv*/;
    bool isPaused = true, wasPaused = true;
    void UpdateClock(const rosgraph_msgs::Clock& msg);
    };

#endif  // IOROS_H

#endif  // COMPILE_WITH_ROS
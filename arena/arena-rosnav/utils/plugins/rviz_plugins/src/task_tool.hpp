#ifndef RVIZ_TASK_TOOL_H
#define RVIZ_TASK_TOOL_H


#include "rclcpp/rclcpp.hpp"
#include <rviz/tool.hpp>
#include <std_srvs/Empty.hpp>


#include <OGRE/OgreEntity.hpp>
#include <OGRE/OgreSceneManager.hpp>
#include <OGRE/OgreSceneNode.hpp>

namespace rviz {

/**
 * @name                TaskTool
 * @brief               Rviz tool to support pausing and unpausing the
 * simulation.
 */
class TaskTool : public rviz::Tool {
 public:
  TaskTool();
  ~TaskTool();

 private:
  /**
   * @name                onInitialize
   * @brief               Initializes tools currently loaded when rviz starts
   */
  virtual void onInitialize();

  /**
  virtual void activate();
   * @name                activate
   * @brief               Call the pause toggle service
   */
  virtual void activate();

  /**
   * @name                deactivate
   * @brief               Cleanup when tool is removed
   */
  virtual void deactivate();


  

  virtual int processMouseEvent( ViewportMouseEvent& event );

  ros::NodeHandle nh_;  ///< NodeHandle to call the pause toggle service
  ros::ServiceClient task_service_;  ///< ServiceClient that calls the pause toggle service
  Ogre::SceneNode *task_generator_node_;  // the node for task
};
}


#endif
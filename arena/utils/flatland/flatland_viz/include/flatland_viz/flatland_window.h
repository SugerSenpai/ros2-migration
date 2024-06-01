/*
 *  ______                   __  __              __
 * /\  _  \           __    /\ \/\ \            /\ \__
 * \ \ \L\ \  __  __ /\_\   \_\ \ \ \____    ___\ \ ,_\   ____
 *  \ \  __ \/\ \/\ \\/\ \  /'_` \ \ '__`\  / __`\ \ \/  /',__\
 *   \ \ \/\ \ \ \_/ |\ \ \/\ \L\ \ \ \L\ \/\ \L\ \ \ \_/\__, `\
 *    \ \_\ \_\ \___/  \ \_\ \___,_\ \_,__/\ \____/\ \__\/\____/
 *     \/_/\/_/\/__/    \/_/\/__,_ /\/___/  \/___/  \/__/\/___/
 * @copyright Copyright 2017 Avidbots Corp.
 * @name   flatland_window.cpp
 * @brief  Main window and toolbars for flatland_viz
 * @author Joseph Duchesne
 *
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2017, Avidbots Corp.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *      copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the Avidbots Corp. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

// namespace rviz;

#include "rclcpp/rclcpp.hpp"
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include "flatland_viz/flatland_viz.hpp"

#include "rviz/display.hpp"
#include "rviz/display_context.hpp"
#include "rviz/displays_panel.hpp"
#include "rviz/env_config.hpp"
#include "rviz/failed_panel.hpp"
#include "rviz/help_panel.hpp"
#include "rviz/load_resource.hpp"
#include "rviz/loading_dialog.hpp"
#include "rviz/new_object_dialog.hpp"
#include "rviz/panel_dock_widget.hpp"
#include "rviz/panel_factory.hpp"
#include "rviz/properties/status_property.hpp"
#include "rviz/render_panel.hpp"
#include "rviz/screenshot_dialog.hpp"
#include "rviz/selection/selection_manager.hpp"
#include "rviz/selection_panel.hpp"
#include "rviz/splash_screen.hpp"
#include "rviz/time_panel.hpp"
#include "rviz/tool.hpp"
#include "rviz/tool_manager.hpp"
#include "rviz/tool_properties_panel.hpp"
#include "rviz/view_manager.hpp"
#include "rviz/views_panel.hpp"
#include "rviz/visualization_frame.hpp"
#include "rviz/visualization_manager.hpp"
#include "rviz/widget_geometry_change_detector.hpp"
#include "rviz/yaml_config_reader.hpp"
#include "rviz/yaml_config_writer.hpp"

class FlatlandWindow : public QMainWindow {
  Q_OBJECT
 public:
  FlatlandWindow(QWidget* parent = 0);
  rviz::VisualizationManager* visualization_manager_;
  rviz::RenderPanel* render_panel_;

  rviz::VisualizationManager* getManager();

 protected Q_SLOTS:

  void openNewToolDialog();

 private:
  FlatlandViz* viz_;
};

/*
 * footprint_helper_test.cpp
 *
 *  Created on: May 2, 2012
 *      Author: tkruse
 */

#include <gtest/gtest.hpp>

#include <vector>

#include <base_local_planner/simple_trajectory_generator.hpp>

namespace base_local_planner {

class TrajectoryGeneratorTest : public testing::Test {
public:
	SimpleTrajectoryGenerator tg;

  TrajectoryGeneratorTest() {
  }

  virtual void TestBody(){}
};
  
}

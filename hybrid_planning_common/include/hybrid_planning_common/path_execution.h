#ifndef HYBRID_PLANNING_PATH_EXECUTION_H
#define HYBRID_PLANNING_PATH_EXECUTION_H

#include "hybrid_planning_common/path_types.h"

namespace hybrid_planning_common
{

/**
 * @brief Helper to execute a given trajectory on the 'joint_trajectory_action' of type
 * 'control_msgs::FollowJointTrajectoryAction'. Blocks until the trajectory goal terminates.
 */
bool executeTrajectory(const trajectory_msgs::JointTrajectory& trajectory);

bool executeTrajectory(const hybrid_planning_common::JointPath& trajectory);

}

#endif

#include <ros/ros.h>

#include "my_gmapping/gmapping.h"

int
main(int argc, char** argv)
{
  ros::init(argc, argv, "my_gmapping");

  SlamGMapping gn;
  gn.startLiveSlam();
  ros::spin();

  return(0);
}

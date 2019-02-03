/*
  File: SimpleHammer.h
  Author: Biing-Jiun Charles <bc14@my.fsu.edu>

  Created on January 31, 2019, 11:33 AM

*/

#include "SimpleHammer.h"
#include <cmath>

double SimpleHammer::hit(double armor)
{
  //If armor under 30, armor ignored
  double damage = hitpoints;

  if(armor > 30)
  {
    //Revert to old calculation if armor > 30 points
    damage = floor(hitpoints - armor);
  }

  if(damage < 0)
    return 0;

  return damage;

}

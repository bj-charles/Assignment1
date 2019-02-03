/*
  File: SimpleHammer.h
  Author: Biing-Jiun Charles <bc14@my.fsu.edu>

  Created on January 31, 2019, 11:33 AM

*/


#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
  //RNG seeding
  srand(time(0));

  //Armor ignored = random from 2 - armor/3
  double ignored_damage = armor - (rand() % (floor((armor / 3)) - 2) + 2);

  double damage = floor(hitpoints - (armor - ignored_damage));
  if(damage < 0)
    return 0;

  return damage;
}

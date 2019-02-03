/*
  File: SimpleHammer.h
  Author: Biing-Jiun Charles <bc14@my.fsu.edu>

  Created on January 31, 2019, 11:33 AM

*/

#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Weapon.h"


/*
  CrazyRandomSword, hitpoints = random between 7 - 100
  Ignores armor points randomly from 2 - (1/3) of the
  armor the weapon hits
*/
class CrazyRandomSword : public Weapon {
public:

  CrazyRandomSword()
  {
    srand(time(0));
    points = rand() % 94 + 7

    Weapon("Random crazy sword", points);
  }

  virtual ~CrazyRandomSword() {};


  virtual double hit(double armor);

};

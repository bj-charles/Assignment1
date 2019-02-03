/*
  File: SimpleHammer.h
  Author: Biing-Jiun Charles <bc14@my.fsu.edu>

  Created on January 31, 2019, 11:33 AM

*/

#include <string>
#include "Weapon.h"

/*
  SimpleHammer, hitpoint = 30, ignores armor points if armor < 30
*/

class SimpleHammer : public Weapon {
public:

  SimpleHammer() : Weapon("Simple hammer", 50.0)
  {
  }

  virtual ~SimpleHammer() {};

  virtual double hit(double armor);

};

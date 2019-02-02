/*
  File: SimpleHammer.h
  Author: Biing-Jiun Charles <bc14@my.fsu.edu>

  Created on January 31, 2019, 11:33 AM

*/

#include <string>
#include "Weapon.h"

/*
  Odin's Spear, hitpoints = 100, reduces armor points to 1
  during damage calculation
  
  Legendary weapon of the all-seeing Odin
*/

class OdinSpear : public Weapon
{
public:

  OdinSpear() : Weapon("Odin's spear", 100.00)
  {

  }

  virtual ~OdinSpear() {};

  virtual double hit(double armor);

};

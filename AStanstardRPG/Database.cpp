#include "Database.h"

Database::Database() {
   Monster gargoyle("gargoyle", EveryWeapon(0), EveryArmor(0), 100, 15, 300, 50, 10, 10, 10, 10, 10);
   vectis1.push_back(gargoyle);
}
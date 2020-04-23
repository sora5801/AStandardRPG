#pragma once
#include <string>
#include "Hero.h"
#include "Monster.h"
using namespace std;

class mage: public Hero{
private:
	
public:
	mage();
	void castFireBall(Monster &);
	void castLightning(Monster &);
	void castBlizzard(Monster &);

};

#pragma once
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;

class mage: public Hero{
private:
	
public:
	mage();
	void castFireBall(Monster &);
	void castLightning(Monster &);
	void castBlizzard(Monster &);
	void castWindBlast(Monster&);
	void castTeleport();
	void castBarrier();
};

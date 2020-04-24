#pragma once
#include "Hero.h"

class warrior : public Hero {
private:

public:
	warrior();
	void swingWeapon(Monster &);
	void guard();
};
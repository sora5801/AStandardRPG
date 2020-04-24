#pragma once
#include "Hero.h"

class priest : public Hero {
public:
	priest();
	void castHeal(Hero&);
	void castHolyLight(Monster&);
	void castIlluminate();
};

#pragma once
#include "Hero.h"
class ranger : public Hero {
public:
	ranger();
	void shootBow(Monster&);
	void daggerSlash(Monster&);
	void steal(Monster&);
	void lockpick();
};
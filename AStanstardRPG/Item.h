#pragma once
#include <string>
#include "Hero.h"
using namespace std;

class Item {
private:
	string name;
	int required_stats;
public:
	bool canBeEquipped();
	string getName();
	void increasehealth(Hero&);
	void increasemana(Hero&);
};
#include "ranger.h"

ranger::ranger() {
	hitpoints = 100;
	mana = 15;
	intelligence = 12;
	strength = 15;
	wisdom = 10;
	dexterity = 20;
	vitality = 12;
}

void ranger::shootBow(Monster& m) {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 4);
	damage_dealt = (dis(gen) * strength) / 5 + floor(strength / 2) + weaponequipped.getDamagebonus();
	int h = m.getHealth();
	m.setHealth(h - damage_dealt);
}
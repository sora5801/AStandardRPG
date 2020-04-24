#include "warrior.h"

warrior::warrior() {
	hitpoints = 110;
	mana = 10;
	intelligence = 10;
	strength = 20;
	wisdom = 10;
	dexterity = 12;
	vitality = 15;
}

void warrior::swingWeapon(Monster& m) {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 4);
	damage_dealt = (dis(gen) * strength) / 5 + floor(strength / 2) + weaponequipped.getDamagebonus();
	int h = m.getHealth();
	m.setHealth(h - damage_dealt);
}
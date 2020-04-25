#include "priest.h"

priest::priest() {
	hitpoints = 90;
	mana = 75;
	intelligence = 15;
	strength = 10;
	wisdom = 20;
	dexterity = 10;
	vitality = 12;
}

void priest::castHolyLight(Monster& m) {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 5);
	int mana = this->getMana();
	if (mana < 10) {
		cout << "Cannot cast this spell " << endl;
	}
	int h = m.getHealth();
	damage_dealt = (dis(gen) * wisdom) / 10 + floor(intelligence / 2);
	m.setHealth(h - damage_dealt);
	this->setMana(mana - 10);
}
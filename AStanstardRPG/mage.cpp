#include "mage.h"

mage::mage() {
	hitpoints = 75;
	mana = 100;
	intelligence = 20;
	strength = 10;
	wisdom = 15;
	dexterity = 12;
	vitality = 10;
}

void mage::castFireBall(Monster& m)
{
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 5);
	int mana = this->getMana();
	if (mana < 10) {
		cout << "Cannot cast this spell " << endl;
	}
	int h = m.getHealth();
	damage_dealt = (dis(gen) * intelligence)/10 + floor(intelligence / 2);
	m.setHealth(h - damage_dealt);
	this->setMana(mana - 10);
}

void mage::castLightning(Monster& m) {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 6);
	int mana = this->getMana();
	if (mana < 15) {
		cout << "Cannot cast this spell " << endl;
	}
	damage_dealt = (dis(gen) * intelligence)/5 + floor(intelligence / 2);
	int h = m.getHealth();
	m.setHealth(h - damage_dealt);
	this->setMana(mana - 20);
}

void mage::castBlizzard(Monster& m) {

}
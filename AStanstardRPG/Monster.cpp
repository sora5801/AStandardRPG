#include "Monster.h"

int Monster::getHealth() {
	return hitpoints;
}

void Monster::setHealth(int health) {
	hitpoints = health;
}

Monster::Monster(int health, int mana, int intelligence, int strength, int dexterity, int wisdom, int vitality) {
	hitpoints = health;
	this->mana = mana;
	this->intelligence = intelligence;
	this->strength = strength;
	this->dexterity = dexterity;
	this->wisdom = wisdom;
	this->vitality = vitality;
}

Monster::Monster() {
	hitpoints = 200;
	mana = 20;
}

Monster::~Monster() {
	
}

void Monster::chooseTarget() {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 4);
	target = dis(gen);
}

int Monster::getTarget() {
	return target;
}

void Monster::setDamage(int d) {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(2, 6);
	damage = d * dis(gen);
}
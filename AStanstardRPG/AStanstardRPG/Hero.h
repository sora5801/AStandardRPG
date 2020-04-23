#pragma once
#include <string>
#include "Inventory.h"
#include "Equipment.h"
#include "Land.h"
using namespace std;

class Hero {
protected:
	Inventory inventory;
	Equipment equipment;
	string name;
	int hitpoints;
	int mana;
	int level;
	int attribute_points; // points to spend on stats
	//Stats. Certain items needs a certain amount of stats in order to equip it.
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage
	int dexterity; //increases range damage
	int wisdom; //increases magic defense
	int vitality; //increases health
public:
	Hero();
	void move(char direction); //Move in land;
	void loot(); //pick up loot from ground and place into inventory
	void setName();
	void levelup();
	int getHealth();
	void setHealth(int);
	int getMana();
	void setMana(int);
	int getlevel();
};
#pragma once

class Monster {
	int hitpoints;
	int mana;
	//Stats. Certain items needs a certain amount of stats in order to equip it.
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage
	int dexterity; //increases range damage
	int wisdom; //increases magic defense
	int vitality; //increases health
public:
	void dropLoot();
	void setHealth(int);
	int getHealth();
};
#pragma once
#include "Weapon.h"
#include "Armor.h"
#include <ctime>
#include <random>
class Monster {
	//Weapon weapon_loot;
	//Armor armor_loot;
	int hitpoints;
	int mana;
	int experience;
	int damage;
	int target;
	//Stats. Certain items needs a certain amount of stats in order to equip it.
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage
	int dexterity; //increases range damage
	int wisdom; //increases magic defense
	int vitality; //increases health
public:
	Monster();
	Monster(int,int,int,int,int,int,int);
	~Monster(); //After monster is dead, the monster must be destroyed to free up memory;
	void dropLoot();
	void dropExperience();
	void chooseTarget();
	int getTarget();
	void setHealth(int);
	int getHealth();
	int getDamage() { return damage; }
	void setDamage(int);
};

class Boss : public Monster {
	enum SpecialAbilities{regeneration, death_word, chaos, freeze, hypnosis, none};
};
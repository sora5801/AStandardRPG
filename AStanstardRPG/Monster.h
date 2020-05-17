#pragma once
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"
#include <ctime>
#include <random>
#include <iostream>
class Monster {
	std::string name;
	Weapon weapon_loot;
	Armor armor_loot;
	int hitpoints;
	int mana;
	int experience;
	int damage;
	int target;
	int initiative;
	//Stats. Certain items needs a certain amount of stats in order to equip it.
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage
	int dexterity; //increases range damage
	int wisdom; //increases magic defense
	int vitality; //increases health
public:
	Monster();
	Monster(int,int,int,int,int,int,int);
	Monster(Weapon, Armor, int, int, int, int, int, int, int, int, int);
	Monster(std::string, Weapon, Armor, int, int, int, int, int, int, int, int, int);
	~Monster(); //After monster is dead, the monster must be destroyed to free up memory;
	//void dropLoot();
	bool operator==(const Monster& p) const { //Needed to make Potion a key option for unordered_map
		if (p.name == this->name && p.weapon_loot == this->weapon_loot && p.armor_loot == this->armor_loot &&
			p.hitpoints == this->hitpoints && p.mana == this->mana && p.experience == this->experience && p.damage == this->damage
			&& p.target == this->target && p.initiative == this->initiative && p.intelligence ==this->intelligence &&
			p.strength == this->strength && p.dexterity == this->dexterity && p.wisdom == this->wisdom && p.vitality == this->vitality)
			return true;
		return false;
	}
	void setName(std::string n) { this->name = n; }
	std::string getName() { return name; }
	Weapon dropWeaponLoot() { return weapon_loot; }
	Armor dropArmorLoot() { return armor_loot; }
	void setWeaponLoot(Weapon);
	void setArmorLoot(Armor);
	int dropExperience() { return experience; }
	void chooseTarget();
	int getTarget();
	void setHealth(int);
	int getHealth();
	int getDamage() { return damage; }
	void setDamage(int);
	void rollforInitiative();
	int getInitiative() { return initiative; }
	Monster& operator=(const Monster& M) {
		name = M.name;
		hitpoints = M.hitpoints;
		mana = M.mana;
		damage = M.damage;
		target = M.target;
		initiative = M.initiative;
		weapon_loot = M.weapon_loot;
		armor_loot = M.armor_loot;
		intelligence = M.intelligence;
		strength = M.strength;
		dexterity = M.dexterity;
		wisdom = M.wisdom;
		vitality = M.vitality;
		return *this;
	}
	friend std::ostream& operator<<(std::ostream& output, const Monster& M);
};




class Boss : public Monster {
	enum SpecialAbilities{regeneration, death_word, chaos, freeze, hypnosis, none};
public:
	void useSpecialAbilities();
};
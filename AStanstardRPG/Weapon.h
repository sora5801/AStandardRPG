#pragma once
#include <string>
#include "WeaponRequirements.h"
#include "WeaponStatBonus.h"
using namespace std;


class Weapon {

	std::string name;
	WeaponStatBonus statbonus;
	int damageBonus;
	Weapon_Requirements requirements;
public:
	Weapon();
	Weapon(string, int);
	enum SpecialEffect { lifesteal, manasteal, criticalstrike, poison, cold, none} ;
	Weapon(string, int, int, SpecialEffect, Weapon_Requirements);
	Weapon_Requirements getRequirements() { return requirements; }
	WeaponStatBonus getStatBonus() { return statbonus; }
	void setRequirements(int, int, int, int, int);
	void setstatbonus(int, int, int, int, int);
	void setdamageBonuses(int);
	int getDamagebonus() { return damageBonus; }
	string getName() { return name; }
	bool operator==(const Weapon& p) const { //Needed to make Potion a key option for unordered_map
		if (p.name == this->name && p.statbonus == this->statbonus && p.damageBonus == this->damageBonus &&
			p.requirements ==this->requirements)
			return true;
		return false;
	}
};


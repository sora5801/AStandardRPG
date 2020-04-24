#pragma once
#include <string>
#include "WeaponRequirements.h"
#include "WeaponStatBonus.h"
using namespace std;


class Weapon {

	string name;
	WeaponStatBonus statbonus;
	int damageBonus;
	Weapon_Requirements requirements;
public:
	Weapon();
	Weapon(string, int);
	enum SpecialEffect { lifesteal, manasteal, criticalstrike, poison, cold, none} ;
	Weapon(string, int, int, SpecialEffect, Weapon_Requirements);
	Weapon_Requirements getRequirements() { return requirements; }
	void setRequirements(int, int, int, int, int);
	void setstatbonus(int, int, int, int, int);
	void setdamageBonuses(int);
	int getDamagebonus() { return damageBonus; }
};


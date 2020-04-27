#pragma once
#include "Weapon.h"
#include "Armor.h"
#include "Potion.h"
class Quest {
	string name;
	bool completed;
	Weapon weapon_reward;
	Armor armor_reward;
	Potion potion_reward;
public:
	Quest();
	Quest(std::string n , bool c, Weapon w, Armor a, Potion p) {
		name = n;
		completed = c;
		weapon_reward = w;
		armor_reward = a;
		potion_reward = p;
	}
	Weapon giveWeaponReward() { return weapon_reward; }
	Armor giveArmorReward() { return armor_reward; }
	Potion givePotionReward() { return potion_reward; }
};
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
	Quest(std::string, bool, Weapon, Armor, Potion);
	Weapon giveWeaponReward() { return weapon_reward; }
	Armor giveArmorReward() { return armor_reward; }
	Potion givePotionReward() { return potion_reward; }
};
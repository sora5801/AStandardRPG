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
};
#pragma once
#include <string>
#include "ArmorRequirements.h"
#include "ArmorStatBonus.h"
using namespace std;

class Armor {
private:
	string name;
	int defensebonus;
	ArmorStatBonus statbonus;
	Armor_Requirements requirements;
public:
	Armor();
	enum SpecialEffect{magic_resistance, thorn, evasion, none};
	//Armor(string, int, int);
	Armor(string, int);
	Armor(string, int, int, SpecialEffect, Armor_Requirements);
	Armor_Requirements getRequirements() { return requirements; }
	ArmorStatBonus getStatBonus() { return statbonus; }
	void setRequirements(int, int, int, int, int);
	void setstatbonus(int, int, int, int, int);
	void setDefenseBonuses(int);
	int getDefensebonus() { return defensebonus; }

	bool operator==(const Armor& p) const { //Needed to make Potion a key option for unordered_map
		if (p.name == this->name && p.statbonus == this->statbonus && p.defensebonus == this->defensebonus &&
			p.requirements == this->requirements)
			return true;
		return false;
	}
};
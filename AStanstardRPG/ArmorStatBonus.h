#pragma once

class ArmorStatBonus {
public:
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage, physical defense, 
	int dexterity; //increases range damage, lockpick and steal chance, shortens time to attack;
	int wisdom; //increases magic defense
	int vitality; //increases health
	ArmorStatBonus() {
		intelligence = 0;
		strength = 0;
		dexterity = 0;
		wisdom = 0;
		vitality = 0;
	}
	ArmorStatBonus(int i, int s, int d, int w, int v) {
		intelligence = s;
		strength = s;
		dexterity = d;
		wisdom = w;
		vitality = v;
	}
	ArmorStatBonus& operator=(const ArmorStatBonus& WR) {
		intelligence = WR.intelligence;
		strength = WR.strength;
		dexterity = WR.dexterity;
		wisdom = WR.wisdom;
		vitality = WR.vitality;
		return *this;
	}
};
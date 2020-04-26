#pragma once

class WeaponStatBonus {
public:
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage, physical defense, 
	int dexterity; //increases range damage, lockpick and steal chance, shortens time to attack;
	int wisdom; //increases magic defense
	int vitality; //increases health
	WeaponStatBonus() {
		intelligence = 0;
		strength = 0;
		dexterity = 0;
		wisdom = 0;
		vitality = 0;
	}
	WeaponStatBonus(int i, int s, int d, int w, int v) {
		intelligence = s;
		strength = s;
		dexterity = d;
		wisdom = w;
		vitality = v;
	}
	WeaponStatBonus& operator=(const WeaponStatBonus& WR) {
		intelligence = WR.intelligence;
		strength = WR.strength;
		dexterity = WR.dexterity;
		wisdom = WR.wisdom;
		vitality = WR.vitality;
		return *this;
	}

	bool operator==(const WeaponStatBonus& p) const { //Needed to make Potion a key option for unordered_map
		if (p.intelligence == this->intelligence && p.strength == this->dexterity && p.wisdom == this->wisdom &&
			p.vitality == this->vitality)
			return true;
		return false;
	}
};
#pragma once
#include <string>

using namespace std;

class Armor {
	class Armor_Requirements {
	public:
		int intelligence; //increases magic damage, mana.
		int strength; //increases physical damage, physical defense, 
		int dexterity; //increases range damage, lockpick and steal chance, shortens time to attack;
		int wisdom; //increases magic defense
		int vitality; //increases health
		Armor_Requirements() {
			intelligence = 0;
			strength = 0;
			dexterity = 0;
			wisdom = 0;
			vitality = 0;
		}
		Armor_Requirements(int i, int s, int d, int w, int v) {
			intelligence = s;
			strength = s;
			dexterity = d;
			wisdom = w;
			vitality = v;
		}
		Armor_Requirements& operator=(const Armor_Requirements& AR) {
			intelligence = AR.intelligence;
			strength = AR.strength;
			dexterity = AR.dexterity;
			wisdom = AR.wisdom;
			vitality = AR.vitality;
			return *this;
		}
	};
private:
	string name;
	int bonus;
	int defense;
public:
	Armor();
	enum SpecialEffect{magic_resistance, thorn, evasion, none};
	//Armor(string, int, int);
};
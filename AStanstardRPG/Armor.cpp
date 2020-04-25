#include "Armor.h"

Armor::Armor() {}
Armor::Armor(string s, int d) {
	name = s;
	defensebonus = d;

}
void Armor::setRequirements(int i, int s, int d, int w, int v) {
	Armor_Requirements requirements(i, s, d, w, v);
	this->requirements = requirements;
}

void Armor::setstatbonus(int i, int s, int d, int w, int v) {
	ArmorStatBonus Bonus(i, s, d, w, v);
	this->statbonus = Bonus;
}
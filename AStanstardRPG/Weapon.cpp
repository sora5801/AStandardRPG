#include "Weapon.h"

Weapon::Weapon(){}
Weapon::Weapon(string s, int d) {
	name = s;
	damageBonus = d;

}
void Weapon::setRequirements(int i, int s, int d, int w, int v) {
	Weapon_Requirements requirements(i, s, d, w, v);
	this->requirements = requirements;
}

void Weapon::setstatbonus(int i, int s, int d, int w, int v) {
	WeaponStatBonus Bonus(i, s, d, w, v);
	this->statbonus = Bonus;
}
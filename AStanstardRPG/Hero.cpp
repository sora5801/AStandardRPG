#include "Hero.h"

Hero::Hero(){ level = 1; }
void Hero::setHealth(int health) { hitpoints = health; }
int Hero::getHealth() { return hitpoints; }
void Hero::setMana(int mana) { this->mana = mana; }
int Hero::getMana() { return mana; }
void Hero::levelup() { level += 1; attribute_points += 5; }
int Hero::getlevel() { return level; }
void Hero::setName(string name) { this->name = name; }
void Hero::addItem(Item item) { this->inventory.add_item(item); }
void Hero::addPotion(Potion potion) { this->inventory.add_Potion(potion); }
//void Hero::takeQuest(Quest quest) { this->quest = quest; }
void Hero::usePotion() {
	if (!this->inventory.potion_stash.empty()) {
		Potion p = this->inventory.potion_stash.front();
		int h = p.getHealthRecover();
		int m = p.getManaRecover();
		if (h != 0)
			setHealth(getHealth() + h);
		if (m != 0)
			setMana(getMana() + h);
		this->inventory.potion_stash.pop_back();
	}
	else
		cout << "No more potions." << endl;
}
bool Hero::isAlive() {
	if (hitpoints > 0)
		return true;
	return false;
}

int Hero::getDamageDealt() {
	return damage_dealt;
}

void Hero::equipWeapon(Weapon w) {
	weaponequipped = w;
}
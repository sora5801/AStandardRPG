#include "Hero.h"
Inventory Hero::inventory;
vector<Quest> Hero::quest;

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
	this->intelligence += weaponequipped.getStatBonus().intelligence; //increases magic damage, mana.
	this->strength += weaponequipped.getStatBonus().strength; //increases physical damage, physical defense, 
	this->dexterity += weaponequipped.getStatBonus().dexterity; //increases range damage, lockpick and steal chance, shortens time to attack;
	this->wisdom += weaponequipped.getStatBonus().wisdom; //increases magic defense
	this->vitality += weaponequipped.getStatBonus().vitality;
}

void Hero::equipArmor(Armor a) {
	armorequipped = a;
	this->intelligence += armorequipped.getStatBonus().intelligence; //increases magic damage, mana.
	this->strength += armorequipped.getStatBonus().strength; //increases physical damage, physical defense, 
	this->dexterity += armorequipped.getStatBonus().dexterity; //increases range damage, lockpick and steal chance, shortens time to attack;
	this->wisdom += armorequipped.getStatBonus().wisdom; //increases magic defense
	this->vitality += armorequipped.getStatBonus().vitality;
}

void Hero::rollforInitiative()
{
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 4);
	initiative = (dis(gen) * dexterity) / 2;
}

void Hero::setPhysicalDamageTaken() {
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<> dis(1, 3);
	physical_damage_taken = (dis(gen) * strength) / 8 + armorequipped.getDefensebonus() / 2;
}

void Hero::addWeapon(Weapon weapon) {
	this->inventory.add_weapon(weapon);
}
void Hero::addArmor(Armor armor) {
	this->inventory.add_armor(armor);
}
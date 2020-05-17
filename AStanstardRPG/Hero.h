#pragma once
#include <vector>
#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include "Monster.h"
#include "Equipment.h"
#include "Inventory.h"
#include "Item.h"
#include "Potion.h"
#include "Quest.h"
#include "Land.h"
#include "Coin.h"
using namespace std;
class Hero {

protected:
	static Inventory inventory;
	//Equipment equipment;
	Weapon weaponequipped;
	Armor armorequipped;
	static std::vector<Quest> quest;
	Coin coin;
	std::string name;
	bool alive;
	int damage_dealt;
	int physical_damage_taken;
	int magical_damage_taken;
	int hitpoints;
	int mana;
	int level;
	int experience;
	int initiative; //This is the chance that the hero acts before the monster or anyone else.
	int attribute_points; // points to spend on stats
	//Stats. Certain items needs a certain amount of stats in order to equip it.
	int intelligence; //increases magic damage, mana.
	int strength; //increases physical damage, physical defense, 
	int dexterity; //increases range damage, lockpick and steal chance, shortens time to attack;
	int wisdom; //increases magic defense
	int vitality; //increases health
public:
	Hero();
	Hero(std::string);
	void takeQuest(Quest q) { quest.push_back(q); }
	void move(char direction); //Move in land;
	void loot(); //pick up loot from ground and place into inventory
	void setName(std::string);
	virtual void levelup();
	int getHealth();
	void setHealth(int);
	int getMana();
	void setMana(int);
	int getlevel();
	void useItem();
	void addItem(Item);
	void addPotion(Potion);
	void usePotion();
	void addWeapon(Weapon);
	void addArmor(Armor);
	bool isAlive();
	int getDamageDealt();
	int getPhysicalDamageTaken() { return physical_damage_taken; }
	int getMagicalDamageTaken(){return magical_damage_taken;}
	void setPhysicalDamageTaken();
	void setMagicalDamageTaken();
	void equipWeapon(Weapon);
	void equipArmor(Armor);
	void getWeaponBonus();
	void rollforInitiative();
	bool canEquipArmor(Armor);
	bool canEquipWeapon(Weapon);
	int getInitiative() { return initiative; }
};




#pragma once
#include "Weapon.h"
#include "Armor.h"
#include "Item.h"
#include "Potion.h"
#include <vector>
using namespace std;

class Inventory
{
private:
	//Item bag;
	//unordered_map<Item, int> items; //doesn't seem to work
	//items[bag.getname()] = 1;

	//unordered_map<string, int> items;
	vector<Weapon> weapon_stash;
	vector<Armor> armor_stash;
	vector<Item> item_stash;
	vector<Potion> potion_stash;
public:
	friend class Hero;
	void add_armor(Armor a) { armor_stash.push_back(a); }
	void add_item(Item i) { item_stash.push_back(i); }
	void add_weapon(Weapon w) { weapon_stash.push_back(w); }
	void add_Potion(Potion p) { potion_stash.push_back(p); }
};
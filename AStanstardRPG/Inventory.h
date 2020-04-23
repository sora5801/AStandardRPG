#pragma once
#include <string>
#include <unordered_map>
#include "Item.h"
using namespace std;

class Inventory
{
private:
	//Item bag;
	//unordered_map<Item, int> items; //doesn't seem to work
	//items[bag.getname()] = 1;

	unordered_map<string, int> items;
public:
	void add_item();
};
#pragma once
#include <string>
using namespace std;

class Item {
private:
	string name;
	int required_stats;
public:
	Item() {}
	bool canBeEquipped();
	string getName() { return name; }
};
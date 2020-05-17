#pragma once
#include <string>
using namespace std;

class Item {
private:
	std::string name;
	int required_stats;
public:
	Item() {}
	bool canBeEquipped();
	std::string getName() { return name; }
};
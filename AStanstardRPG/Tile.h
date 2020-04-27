#pragma once
#include "Monster.h"
//This class is used for each land
class Tile {
	std::string texture;
	Monster monsters;
public:
	Tile() {};
	void setMonsters(Monster);
	Monster getMonsters();
};
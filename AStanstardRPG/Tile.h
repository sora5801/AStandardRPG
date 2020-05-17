#pragma once
//#include "Database.h"
//This class is used for each land
#include "Monster.h"
#include "NPC.h"
class Tile {
	std::string texture;
	Monster monsters;
	NPC npc;
	bool h;
public:
	Tile();
	Tile(Monster m);
	void setMonsters(Monster m);
	Monster getMonsters();
	void setTrue();
	bool hasMonster();
	void setNPC(NPC);
};
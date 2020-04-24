#pragma once
#include "Quest.h"
#include <string>
#include "Hero.h"
class NPC {
	Quest quest;
	string dialogue;
	string name;
public:
	//void assignQuest(Hero& h) { h.takeQuest(this->quest); }
};
#pragma once
#include "Quest.h"
#include <string>
#include "Hero.h"
class NPC {
	Quest quest;
	std::string dialogue;
	std::string name;
public:
	NPC();
	NPC(Quest, std::string);
	std::string sayDialogue();
	void assigndialogue(std::string d) { dialogue = d; }
	std::string getdialogue() { return dialogue; }
	void assignQuest(Hero& h) { h.takeQuest(this->quest); }
};
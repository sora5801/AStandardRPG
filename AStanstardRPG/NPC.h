#pragma once
#include "Quest.h"
class NPC {
	Quest quest;
	std::string dialogue;
	std::string name;
public:
	NPC();
	NPC(std::string);
	NPC(Quest, std::string);
	std::string sayDialogue();
	void assigndialogue(std::string d);
	std::string getdialogue();
	Quest assignQuest();
};
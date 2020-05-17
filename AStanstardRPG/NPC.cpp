#include "NPC.h"
NPC::NPC() {
	name = "Random";
	dialogue = "I am an NPC!";
}
NPC::NPC(Quest q, std::string n) {
	quest = q;
	name = n;
}

NPC::NPC(std::string n) {
	name = n;
}

std::string NPC::sayDialogue() { return dialogue; }
void NPC::assigndialogue(std::string d) { dialogue = d; }
std::string NPC::getdialogue() { return dialogue; }
Quest NPC::assignQuest() { return quest; }
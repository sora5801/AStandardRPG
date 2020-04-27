#include "NPC.h"

NPC::NPC(Quest q, std::string n) {
	quest = q;
	name = n;
}

NPC::NPC(std::string n) {
	name = n;
}
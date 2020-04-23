#include "mage.h"

mage::mage() {

}

void mage::castFireBall(Monster& m)
{
	int h = m.getHealth();
	m.setHealth(h - 10);
}

void mage::castLightning(Monster& m) {

}

void mage::castBlizzard(Monster& m) {

}
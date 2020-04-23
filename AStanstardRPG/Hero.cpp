#include "Hero.h"

Hero::Hero(){ level = 1; }
void Hero::setHealth(int health) { hitpoints = health; }
int Hero::getHealth() { return hitpoints; }
void Hero::setMana(int mana) { this->mana = mana; }
int Hero::getMana() { return mana; }
void Hero::levelup() { level += 1; attribute_points += 5; }
int Hero::getlevel() { return level; }
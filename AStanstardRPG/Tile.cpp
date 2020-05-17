#include "Tile.h"

Tile::Tile() { h = false; };
Tile::Tile(Monster m) { monsters = m; h = true; }
void Tile::setMonsters(Monster m) {
	monsters = m;
	h = true;
}
Monster Tile::getMonsters() {
	return monsters;
}
void Tile::setTrue() { h = true; }
bool Tile::hasMonster() {
	if (h == true)
		return true;
	return false;
}
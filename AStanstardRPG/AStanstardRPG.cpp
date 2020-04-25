// AStanstardRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Battle.h"

Monster EveryMonster(int);
Weapon EveryWeapon(int);
Armor EveryArmor(int);

using namespace std;
int main()
{
    mage man;
    priest pan;
    warrior wan;
    ranger ran;
    Potion pat;
    ran.equipArmor(EveryArmor(1));
    wan.equipArmor(EveryArmor(0));
    wan.equipWeapon(EveryWeapon(0));
    ran.equipWeapon(EveryWeapon(1));
    man.addPotion(pat);
    Battle battle;
    battle.EngageBattle(man, pan, wan, ran, EveryMonster(0));
   // cout << "This land is called Elluinus" << endl;
}

Monster EveryMonster(int i) {
    vector<Monster> vectis;
    Monster gargoyle(300, 50, 10, 10, 10, 10, 10);
    gargoyle.setWeaponLoot(EveryWeapon(0));
    gargoyle.setArmorLoot(EveryArmor(0));
    vectis.push_back(gargoyle);
    return vectis[i];
}

Weapon EveryWeapon(int i) {
    vector<Weapon> vectis;
    Weapon sword("sword", 5);
    sword.setstatbonus(5, 5, 5, 5, 5);
    vectis.push_back(sword);
    Weapon bow("bow", 5);
    bow.setstatbonus(5, 5, 5, 5, 5);
    vectis.push_back(bow);
    return vectis[i];
}

Armor EveryArmor(int i) {
    vector<Armor> vectis;
    Armor plate("plate", 5);
    plate.setstatbonus(4, 4, 4, 4, 4);
    vectis.push_back(plate);
    Armor leather("leather", 3);
    leather.setstatbonus(4, 4, 4, 4, 4);
    vectis.push_back(leather);
    return vectis[i];
}

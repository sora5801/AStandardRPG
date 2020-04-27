// AStanstardRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Battle.h"
#include "NPC.h"
#include "Database.h"
#include "Party.h"
#include "Land.h"
//Monster EveryMonster(int);
//Weapon EveryWeapon(int);
//Armor EveryArmor(int);
//Potion EveryPotion(int);
//NPC everyNPC(int);

using namespace std;
int main()
{
    //std::vector<Hero> heroes;
    //mage man;
    //priest pan;
    //warrior wan;
    //ranger ran;
    //heroes.push_back(man);
    //Potion pat;
    Database data;
    //ran.equipArmor(data.EveryArmor(1));
    //wan.equipArmor(data.EveryArmor(0));
    //wan.equipWeapon(data.EveryWeapon(0));
    //ran.equipWeapon(data.EveryWeapon(1));
    //man.addPotion(pat);
    //data.setEveryPotion();
    //data.setEveryQuest();
    //data.setEveryNPC();
    //cout << data.EveryNPC(0).sayDialogue() << endl <<endl;
    Battle battle;
    //battle.EngageBattle(man, pan, wan, ran, data.EveryMonster(0));
   // cout << "This land is called Elluinus" << endl;

    Party party;
    battle.EngageBattle(party, data.EveryMonster(0));
    party.moveMenu();
    
}

//Monster EveryMonster(int i) {
//    vector<Monster> vectis;
//    Monster gargoyle(300, 50, 10, 10, 10, 10, 10);
//    gargoyle.setWeaponLoot(EveryWeapon(0));
//    gargoyle.setArmorLoot(EveryArmor(0));
//    vectis.push_back(gargoyle);
//    return vectis[i];
//}
//
//Weapon EveryWeapon(int i) {
//    vector<Weapon> vectis;
//    Weapon sword("sword", 5);
//    sword.setstatbonus(5, 5, 5, 5, 5);
//    vectis.push_back(sword);
//    Weapon bow("bow", 5);
//    bow.setstatbonus(5, 5, 5, 5, 5);
//    vectis.push_back(bow);
//    return vectis[i];
//}
//
//Armor EveryArmor(int i) {
//    vector<Armor> vectis;
//    Armor plate("plate", 5);
//    plate.setstatbonus(4, 4, 4, 4, 4);
//    vectis.push_back(plate);
//    Armor leather("leather", 3);
//    leather.setstatbonus(4, 4, 4, 4, 4);
//    vectis.push_back(leather);
//    return vectis[i];
//}
//
//Potion EveryPotion(int i) {
//    vector<Potion> vectis;
//    Potion super("SuperPotion", 30, 20);
//    vectis.push_back(super);
//    return vectis[i];
//}

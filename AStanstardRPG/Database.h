#pragma once
#include "Monster.h"
#include "NPC.h"

struct Database {
    vector<Monster> vectis1;
    vector<Weapon> vectis2;
    vector<Armor> vectis3;
    vector<Potion> vectis4;
    vector<NPC> vectis5;
    vector<Quest> vectis6;
    Monster EveryMonster(int i) {
        //Monster(std::string n, Weapon w, Armor a, int exp, int damage, int health, int mana, int intelligence, int strength, int dexterity, int wisdom, int vitality)
        Monster gargoyle("gargoyle", EveryWeapon(0), EveryArmor(0), 100, 15, 300, 50, 10, 10, 10, 10, 10);
        vectis1.push_back(gargoyle);
        return vectis1[i];
    }

    Weapon EveryWeapon(int i) {
        Weapon sword("sword", 5);
        sword.setstatbonus(5, 5, 5, 5, 5);
        vectis2.push_back(sword);
        Weapon bow("bow", 5);
        bow.setstatbonus(5, 5, 5, 5, 5);
        vectis2.push_back(bow);
        return vectis2[i];
    }

    Armor EveryArmor(int i) {

        Armor plate("plate", 5);
        plate.setstatbonus(4, 4, 4, 4, 4);
        vectis3.push_back(plate);
        Armor leather("leather", 3);
        leather.setstatbonus(4, 4, 4, 4, 4);
        vectis3.push_back(leather);
        return vectis3[i];
    }

    Potion EveryPotion(int i) {
        return vectis4[i];
    }

    NPC EveryNPC(int i) {
        return vectis5[i];
    }

    Quest EveryQuest(int i) {
        return vectis6[i];
    }

    void setEveryQuest() {
        //Quest(std::string, bool, Weapon, Armor, Potion);
        Quest gargoylequest("Kill the gargoyle", false, vectis2[1], vectis3[0], vectis4[0]);
        vectis6.push_back(gargoylequest);
    }
    void setEveryPotion() {
        Potion super("SuperPotion", 30, 20);
        vectis4.push_back(super);
    }
    void setEveryNPC(){
        NPC bob(vectis6[0], "bob");
        bob.assigndialogue("Kill this gargoyle for me, people.");
        vectis5.push_back(bob);
    }
};
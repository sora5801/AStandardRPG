#pragma once
#include "Monster.h"
#include "NPC.h"

struct Database {
    Monster EveryMonster(int i) {
        vector<Monster> vectis;
        //Monster(std::string n, Weapon w, Armor a, int exp, int damage, int health, int mana, int intelligence, int strength, int dexterity, int wisdom, int vitality)
        Monster gargoyle("gargoyle", EveryWeapon(0), EveryArmor(0), 100, 15, 300, 50, 10, 10, 10, 10, 10);
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

    Potion EveryPotion(int i) {
        vector<Potion> vectis;
        Potion super("SuperPotion", 30, 20);
        vectis.push_back(super);
        return vectis[i];
    }

    NPC EveryNPC(int i) {
        vector<NPC> vectis;
        NPC bob();
    }

    Quest EveryQuest(int i) {
        vector<Quest> vectis;
        Quest quest();
    }
};
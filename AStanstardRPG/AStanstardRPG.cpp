// AStanstardRPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Battle.h"
#include "NPC.h"
#include "Database.h"
#include "Party.h"
#include "Land.h"

void generateWorld(std::vector<std::vector<Tile>> *, Database *); //Create the world by generating a NxN tile

int main()
{
    int x = 0;
    int y = 0;

    //mage man;
    //priest pan;
    //warrior wan;
    //ranger ran;
    //heroes.push_back(man);
    //Potion pat;
    Database *data = new Database;
    Battle *battle = new Battle;
    Party *party = new Party;
    NPC* npc = new NPC;
    //ran.equipArmor(data.EveryArmor(1));
    //wan.equipArmor(data.EveryArmor(0));
    //wan.equipWeapon(data.EveryWeapon(0));
    //ran.equipWeapon(data.EveryWeapon(1));
    //man.addPotion(pat);
    //data.setEveryPotion();
    //data.setEveryQuest();
    //data.setEveryNPC();
    //cout << data.EveryNPC(0).sayDialogue() << endl <<endl;
    //battle.EngageBattle(man, pan, wan, ran, data.EveryMonster(0));
    std::cout << npc->getdialogue() << std::endl;
    std::cout << "This land is called Elluinus" << std::endl;
    std::vector<std::vector<Tile>> voctis;
    generateWorld(&voctis, data);
 
    
    party->ran.equipWeapon(data->EveryWeapon(1));
    party->wan.equipWeapon(data->EveryWeapon(0));
    std::cout <<party->ran.getHealth() << std::endl;
    std::cout <<party->wan.getHealth() <<std::endl;
    party->moveRight(voctis[0][1]);
    party->moveRight(voctis[0][2]);

    if(voctis[0][2].hasMonster())
    {
        char c;
        std::cout << "The party has encountered a "<< voctis[0][2].getMonsters().getName() <<". Should they kill it?" <<std::endl;
        std::cin >> c;
        if (c == 'y' || c == 'Y') {
            std::cout << "The party has engaged in a fierce battle!" << std::endl;
            //battle.EngageBattle(party, vectis.get(0, 2).getMonsters());
            battle->EngageBattle(*party, voctis[0][2].getMonsters());
        }
        else
            std::cout << "The party has fled" << std::endl;
    }
    std::cout << party->ran.getHealth() << std::endl;
    std::cout << party->wan.getHealth() << std::endl;
    delete data;
    delete battle;
    
}
void generateWorld(std::vector<std::vector<Tile>> *v, Database *d) {
    for (int i = 0; i < 7; i++) {
        std::vector<Tile> vactis;
        for (int j = 0; j < 7; j++) {
           std::random_device rd;  //Will be used to obtain a seed for the random number engine
           std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
           std::uniform_int_distribution<> dis(1, 7);
            Tile tile;
            if (dis(gen) >= 5)
               tile.setMonsters(d->EveryMonster(0));
            vactis.push_back(tile);
        }
        v->push_back(vactis);
    }
}

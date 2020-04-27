#pragma once
#include "mage.h"
#include "warrior.h"
#include "ranger.h"
#include "priest.h"

class Party {
    int x = 0;
    int y = 0;
    Tile location;
    Land land;
public:
    mage man;
    priest pan;
    warrior wan;
    ranger ran;
    void moveMenu() {
        std::cout << "Which way should the party move?" << std::endl;
        char c;
        std::cin >> c;
        if (c == 'r') {
            y++;
            moveRight(land.Tiles[x][y]);
        }
    }
    void moveUp(Tile l);
    void moveDown(Tile l);
    void moveLeft(Tile l);
    void moveRight(Tile l) {
        location = l;
        std::cout << "The party moved to the right. " << std::endl;
    }
    Tile getlocation() { return location; }
};

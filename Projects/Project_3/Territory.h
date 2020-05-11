//
// Created by Jose Ramos on 5/8/20.
//

#ifndef PROJECT_3_TERRITORY_H
#define PROJECT_3_TERRITORY_H

//#include "Player.cpp"

#include <string>
#include <vector>
//#include "Player.h"

//class Player;

using namespace std;

class Territory {
public:

    Territory();

    string getName() const;

    void setName(string name);

//    const Player &getOwner() const;

//    void setOwner(const Player &owner);

    int getArmies() const;

    void setArmies(int armies);

//    void addAdjacentTerritories(Territory territory);

private:
    string name;
//    Player owner;
    int armies;
    vector<Territory> adjacentTerritories;
};

#endif //PROJECT_3_TERRITORY_H

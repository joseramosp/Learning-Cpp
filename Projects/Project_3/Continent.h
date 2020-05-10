//
// Created by Jose Ramos on 5/8/20.
//

#ifndef PROJECT_3_CONTINENT_H
#define PROJECT_3_CONTINENT_H

#include "Territory.h"
#include <string>

//class Territory;
//class Player;

class Continent {
public:
    const string &getName() const;

    void setName(const string &name);

    const Player &getOwner() const;

    void setOwner(const Player &owner);

private:
    string name;
    Player owner;
    vector<Territory> territories;

};


#endif //PROJECT_3_CONTINENT_H

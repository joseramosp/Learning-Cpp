//
// Created by Jose Ramos on 5/8/20.
//

#include "Territory.h"

using namespace std;

Territory::Territory() = default;

string Territory::getName() const {
    return name;
}

void Territory::setName(string name) {
    Territory::name = name;
}

const Player &Territory::getOwner() const {
    return owner;
}

void Territory::setOwner(const Player &owner) {
    Territory::owner = owner;
}

int Territory::getArmies() const {
    return armies;
}

void Territory::setArmies(int armies) {
    Territory::armies = armies;
}

//void Territory::addAdjacentTerritories(Territory territory) {
//
//}

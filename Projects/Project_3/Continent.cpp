//
// Created by Jose Ramos on 5/8/20.
//

#include "Continent.h"

const string &Continent::getName() const {
    return name;
}

void Continent::setName(const string &name) {
    Continent::name = name;
}

const Player &Continent::getOwner() const {
    return owner;
}

void Continent::setOwner(const Player &owner) {
    Continent::owner = owner;
}

//
// Created by Jose Ramos on 4/9/20.
//

#include "Card.h"

Card::Card(const string &army, const string &country, const string &continent) : army(army), country(country), continent(continent) {}

const string &Card::getArmy() const {
    return army;
}

void Card::setArmy(const string &army) {
    Card::army = army;
}

const string &Card::getCountry() const {
    return country;
}

void Card::setCountry(const string &country) {
    Card::country = country;
}

const string &Card::getContinent() const {
    return continent;
}

void Card::setContinent(const string &continent) {
    Card::continent = continent;
}

string Card::getCardInfo() {
    return "Army: " + army + " | Country: " + country + " | Continent: " + continent;
//    return "Army: ";
}

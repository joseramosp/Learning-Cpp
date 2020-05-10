//
// Created by Jose Ramos on 4/9/20.
//

#include "Card.h"
#include <utility>

Card::Card(string army, string country, string continent) : army(std::move(army)), country(std::move(country)), continent(std::move(continent)) {}

const string &Card::getArmy() const {
    return army;
}

const string &Card::getCountry() const {
    return country;
}

const string &Card::getContinent() const {
    return continent;
}

string Card::getCardInfo() {
    return "Army: " + army + " | Country: " + country + " | Continent: " + continent;
}

Card Card::copy() {
    return Card(army, country, continent);
}

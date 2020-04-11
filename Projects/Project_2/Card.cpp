//
// Created by Jose Ramos on 4/9/20.
//

#include "Card.h"

string Card::getArmy() {
    return Card::army;
}

string Card::getCountry() {
    return Card::country;
}

string Card::getContinent() {
    return Card::continent;
}

string getCardInfo(){
    return "Army: " + Card::getArmy() + " Country: " + country + " Continent: " + continent;
}
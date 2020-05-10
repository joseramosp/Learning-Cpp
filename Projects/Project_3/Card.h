//
// Created by Jose Ramos on 4/9/20.
//

#ifndef PROJECT_3_CARD_H
#define PROJECT_3_CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card {

public:

    Card(string army, string country, string continent);

    const string &getArmy() const;

    const string &getCountry() const;

    const string &getContinent() const;

    Card copy();

    string getCardInfo();

private:
    string army;
    string country;
    string continent;
};


#endif //PROJECT_3_CARD_H

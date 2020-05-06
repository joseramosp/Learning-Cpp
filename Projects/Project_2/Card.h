//
// Created by Jose Ramos on 4/9/20.
//

#ifndef PROJECT_2_CARD_H
#define PROJECT_2_CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card {

public:

    Card(const string &army, const string &country, const string &continent);

    const string &getArmy() const;

    void setArmy(const string &army);

    const string &getCountry() const;

    void setCountry(const string &country);

    const string &getContinent() const;

    void setContinent(const string &continent);

    string getCardInfo();

private:
    string army;
    string country;
    string continent;
};


#endif //PROJECT_2_CARD_H

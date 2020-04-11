//
// Created by Jose Ramos on 4/9/20.
//

#ifndef PROJECT_2_CARD_H
#define PROJECT_2_CARD_H

//#include <cstdlib>
//#include <stdio.h>
#include <iostream>

using namespace std;

class Card {

public:
    Card(const string &army, const string &country, const string &continent) : army(army), country(country), continent(continent) {}
    string getArmy(void);
    string getCountry(void);
    string getContinent(void);
    string getCardInfo();

private:
    string army;
    string country;
    string continent;
};


#endif //PROJECT_2_CARD_H

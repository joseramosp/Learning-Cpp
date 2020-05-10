//
// Created by Jose Ramos on 5/6/20.
//

#ifndef PROJECT_3_PLAYER_H
#define PROJECT_3_PLAYER_H

#include "Card.h"
#include <cstdio>
#include <vector>
#include <string>
//#include "Territory.cpp"
//#include "Territory.h"

using namespace std;

class Territory;
//class Card;

class Player {
public:

    Player();

    void setName(const string &name);

    const string &getName() const;

    void showCards() const;

    void addCard(Card card);

    void setUp();

    int totalCard();

private:
    string name;
    vector<Card> cards;

    vector<Territory> territories;

};


#endif //PROJECT_3_PLAYER_H

//
// Created by Jose Ramos on 4/9/20.
//

#ifndef PROJECT_2_DECK_H
#define PROJECT_2_DECK_H

#include <iostream>
#include "Card.cpp"
#include <cstdio>
#include <vector>

using namespace std;

class Deck {
public:
    void showDeck();
    Deck();
    int size();
    void shuffle();
    Card throwCard();

private:
    vector<Card> cards;
};


#endif //PROJECT_2_DECK_H

//
// Created by Jose Ramos on 5/6/20.
//

#ifndef PROJECT_2_PLAYER_H
#define PROJECT_2_PLAYER_H

//#include "Card.cpp"
#include <cstdio>
#include <vector>


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

};


#endif //PROJECT_2_PLAYER_H

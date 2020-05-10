//
// Created by Jose Ramos on 5/6/20.
//

#include "Player.h"
#include "Territory.h"

Player::Player(){
    territories.emplace_back(Territory());
}

void Player::setName(const string &name) {
    Player::name = name;
}

const string &Player::getName() const {
    return name;
}

void Player::showCards() const {
    for(Card card : cards){
        cout << card.getCardInfo() << endl;
    }
}

void Player::addCard(Card card) {
    cards.push_back(card);
}

void Player::setUp() {
    cout << "Enter your name please: \n" << endl;
    cin >> name;
}

int Player::totalCard() {
    return cards.size();
}




//
// Created by Jose Ramos on 5/8/20.
//

#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(){
    cout << "Creating Game" << endl;
    isOver = false;
    setUpGame();
}

Game::Game(const vector<Continent> &continents) {

}

const Player &Game::getPlayer1() const {
    return player1;
}

void Game::setPlayer1(const Player &player1) {
    Game::player1 = player1;
}

const Player &Game::getPlayer2() const {
    return player2;
}

void Game::setPlayer2(const Player &player2) {
    Game::player2 = player2;
}

bool Game::isOver1() const {
    return isOver;
}

void Game::setIsOver(bool isOver) {
    Game::isOver = isOver;
}

void Game::setUpGame() {
    cout << "Hello" << endl;
}

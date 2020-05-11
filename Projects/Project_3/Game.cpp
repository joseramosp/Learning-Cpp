//
// Created by Jose Ramos on 5/8/20.
//

#include "Game.h"
#include <iostream>

using namespace std;

Game::Game(){
    cout << "Creating Game" << endl;
    gameStatus = false;
    Player player = Player();
    player1 = Player();
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

bool Game::getGameStatus() const {
    return gameStatus;
}

void Game::setGameStatus(bool gameStatus) {
    Game::gameStatus = gameStatus;
}

void Game::setUpGame() {
    cout << "Hello" << endl;
}

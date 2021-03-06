//
// Created by Jose Ramos on 5/8/20.
//

#ifndef PROJECT_3_GAME_H
#define PROJECT_3_GAME_H

#include "Continent.h"
//#include "Player.h"

//class Continent;
class Player;

class Game {
public:

    Game();

    Game(const vector<Continent> &continents);

    const Player &getPlayer1() const;

    void setPlayer1(const Player &player1);

    const Player &getPlayer2() const;

    void setPlayer2(const Player &player2);

    bool getGameStatus() const;

    void setGameStatus(bool isOver);

    void setUpGame();

private:
    vector<Continent> continents;
    Player player1;
    Player player2;
    bool gameStatus = false;

};


#endif //PROJECT_3_GAME_H

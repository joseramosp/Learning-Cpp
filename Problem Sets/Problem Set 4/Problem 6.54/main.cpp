//
// Created by Jose Ramos on 2/20/20.
//

// 6.54 (C++11 Random Numbers: Modified Craps Game) Modify the program of Fig. 6.9 to use the new C++11 random-
// number generation features shown in Section 6.9.

#include <iostream>
#include <random>

using namespace std;

unsigned int rollDice();

int main() {

    //default_random_engine engine{static_cast<unsigned int> (time(NULL))};
    //RandomDevice::RandomDevice(unsigned long n) : rand_seed(n), engine(n){ };
    enum class Status {
        CONTINUE, WON, LOST
    };

    unsigned int myPoint{0};
    Status gameStatus;
    unsigned int sumOfDice{rollDice()};

    switch (sumOfDice) {
        case 7:
        case 11:
            gameStatus = Status::WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus = Status::LOST;
            break;
        default:
            gameStatus = Status::CONTINUE;
            myPoint = sumOfDice;
            cout << "Point is " << myPoint << endl;
            break;
    }

    while (Status::CONTINUE == gameStatus) {
        sumOfDice = rollDice();

        if (sumOfDice == myPoint) {
            gameStatus = Status::WON;
        } else {
            if (sumOfDice == 7) {
                gameStatus = Status::LOST;
            }
        }
    }

    if (Status::WON == gameStatus) {
        cout << "Player wins" << endl;
    } else {
        cout << "Player loses" << endl;
    }
}

unsigned int rollDice() {

    random_device rd;
    default_random_engine engine(rd());
    uniform_int_distribution<unsigned int> randomInt{1,6};
    auto roll = bind (randomInt, engine);
    int die1{int(roll())};
    int die2{int(roll())};
    int sum{die1 + die2};

    cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
    return sum;
}

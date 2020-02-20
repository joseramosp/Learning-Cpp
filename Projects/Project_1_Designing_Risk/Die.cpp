//
// Created by Jose Ramos on 2/19/20.
//

#include <cstdlib>
#include <iostream>

using namespace std;

class Die {
public:

    Die(){};
    void rollDie(){
        dieValue = (rand()%6) + 1;
    }

    int getDieValue() const {
        return dieValue;
    }

private:

    int dieValue{1};

};

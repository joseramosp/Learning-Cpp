//
// Created by Jose Ramos on 5/11/20.
//

#ifndef FINAL_PROJECT_PERSONNODE_H
#define FINAL_PROJECT_PERSONNODE_H

#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

class PersonNode {
public:

    PersonNode();
    PersonNode(bool);
    bool isInfected();
    void move();
    void printInfo();
    sf::Vector2f getLocation();

private:

    sf::Vector2f location;
    bool infected;

};


#endif //FINAL_PROJECT_PERSONNODE_H

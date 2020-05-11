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
    void gotSick();
    void move();
    void printInfo();
    sf::Vector2f getLocation();
    const sf::CircleShape &getNodeShape() const;

private:

    sf::Vector2f location;
    bool infected;
    sf::CircleShape nodeShape = sf::CircleShape(10);

};


#endif //FINAL_PROJECT_PERSONNODE_H

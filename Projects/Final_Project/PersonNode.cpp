//
// Created by Jose Ramos on 5/11/20.
//

#include "PersonNode.h"
#include <cstdlib>
#include <iostream>

using namespace std;

bool PersonNode::isInfected() {
    return infected;
}

void PersonNode::move() {
    int x = location.x;
    int y = location.y;

    if(location.x == 0){
        x += rand() % 2;
    }
    else if(location.x == 1200){
        x += rand() % 2 + (-1);
    }
    else{
        x += rand() % 3 + (-1);
    }

    if(location.y == 0){
        y = rand() % 2;
    }
    else if(location.y == 800){
        y = rand() % 2;
    }
    else{
        y += rand() % 3 + (-1);
    }

    PersonNode::location = sf::Vector2f(x,y);
    nodeShape.setPosition(getLocation());
}

PersonNode::PersonNode() {
    PersonNode::infected = false;
    PersonNode::location = sf::Vector2f(rand() % 1200, rand() % 800);
    nodeShape.setFillColor(sf::Color::Green);
}

PersonNode::PersonNode(bool infected) {
    PersonNode::infected = infected;
    PersonNode::location = sf::Vector2f(rand() % 1200, rand() % 800);
    if(isInfected())
        nodeShape.setFillColor(sf::Color::Red);
    else
        nodeShape.setFillColor(sf::Color::Green);
}

sf::Vector2f PersonNode::getLocation() {
    return PersonNode::location;
}

void PersonNode::printInfo() {
    cout << "Location: x= " << getLocation().x << ", y= "<< getLocation().y << endl;
    cout << "Infected: " << isInfected() << "\n"<< endl;
}

const sf::CircleShape &PersonNode::getNodeShape() const {
    return nodeShape;
}

void PersonNode::gotSick() {
    PersonNode::infected = true;
    nodeShape.setFillColor(sf::Color::Red);
}

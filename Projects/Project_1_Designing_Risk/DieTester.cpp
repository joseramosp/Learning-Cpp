#include <iostream>
#include "Die.cpp"
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
//#include "SFML/Graphics.h"
#include <string>

using namespace std;

class DieTester{

public:

    Die die1 = Die{};
    Die die2 = Die{};
    Die die3 = Die{};
    Die die4 = Die{};

    void rollDies(){
        die1.rollDie();
        die2.rollDie();
        die3.rollDie();
        die4.rollDie();
    }

    void printDiesValue(){
        std::cout << "Die 1 value: " << die1.getDieValue() << "\n";
        std::cout << "Die 2 value: " << die2.getDieValue() << "\n";
        std::cout << "Die 3 value: " << die3.getDieValue() << "\n";
        std::cout << "Die 4 value: " << die4.getDieValue() << "\n" << std::endl;
    }

};

int main() {
//    sf::CircleShape shape;
//    shape.setRadius(40.f);
//    shape.setPosition(100.f, 100.f);
//    shape.setFillColor(sf::Color::Cyan);

    srand(time(NULL));

    DieTester tester = DieTester();

    for(int i=0; i<5; i++){
        tester.rollDies();
        tester.printDiesValue();
    }

    sf::RenderWindow window;
    window.create(sf::VideoMode(460,100), "Project 1");

    sf::Texture dice1Image, dice2Image, dice3Image, dice4Image;

    if(!dice1Image.loadFromFile("dice/d" + to_string(tester.die1.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie1;
    imageSpriteDie1.setTexture(dice1Image);

    if(!dice2Image.loadFromFile("dice/d" + to_string(tester.die2.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie2;
    imageSpriteDie2.setTexture(dice2Image);
    imageSpriteDie2.setPosition(120.f,0.f);

    if(!dice3Image.loadFromFile("dice/d" + to_string(tester.die3.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie3;
    imageSpriteDie3.setTexture(dice3Image);
    imageSpriteDie3.setPosition(240.f,0.f);

    if(!dice4Image.loadFromFile("dice/d" + to_string(tester.die4.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie4;
    imageSpriteDie4.setTexture(dice4Image);
    imageSpriteDie4.setPosition(360,0);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
//        window.draw(shape);
        window.draw(imageSpriteDie1);
        window.draw(imageSpriteDie2);
        window.draw(imageSpriteDie3);
        window.draw(imageSpriteDie4);
        window.display();
    }

    return 0;
}

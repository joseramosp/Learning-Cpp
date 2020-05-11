#include <iostream>
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <string>

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    sf::RenderWindow window;
    window.create(sf::VideoMode(1200,1000), "Project 1");

    sf::Font font;
    if(!font.loadFromFile("arial.ttf")){

    }

    sf::Text text;
    text.setString("Welcome to the the COVID-19 simulator!");
    text.setFillColor(sf::Color::White);
    text.setFont(font);
    text.setCharacterSize(60);
//    text.setPosition(50,30);
    text.setPosition((window.getSize().x - text.getLocalBounds().width)/2.0f ,30);
    text.setOrigin(text.getLocalBounds().left/2.0f,text.getLocalBounds().top/2.0f);

//    text.

//    sf::Texture dice1Image, dice2Image, dice3Image, dice4Image;

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(text);
//        window.draw(imageSpriteDie4);
        window.display();
    }

    return 0;
}

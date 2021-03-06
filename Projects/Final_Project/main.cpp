#include <iostream>
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <string>
#include "PersonNode.h"
#include <unistd.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

enum Screen {
    MENU, OPTION1, OPTION2, OPTION3
};

bool isElementHover(sf::FloatRect e, sf::Vector2f mp) {
    return e.contains(mp);
}

int main() {

    srand(time(NULL));

    sf::RenderWindow window, window2, window3;
    window.create(sf::VideoMode(1200, 1000), "COVID-19 Simulator");

    sf::Texture texture;
    if (!texture.loadFromFile("jose.jpg")) {
        return 1;
    }
    sf::Sprite imageSprite;
    imageSprite.setTexture(texture);
    imageSprite.setPosition((window.getSize().x - imageSprite.getLocalBounds().width) / 2.0f, 10);

    sf::Font font;
    if (!font.loadFromFile("arial.ttf")) {

    }

    sf::Text text;
    text.setString("Welcome to the the COVID-19 simulator!");
    text.setFillColor(sf::Color::White);
    text.setFont(font);
    text.setCharacterSize(60);
    text.setPosition((window.getSize().x - text.getLocalBounds().width) / 2.0f, 30);
    text.setOrigin(text.getLocalBounds().left / 2.0f, text.getLocalBounds().top / 2.0f);

    sf::Text creatorInfo;
    creatorInfo.setString("Created by Jose Ramos :)\n\nGitHub: https://github.com/joseramosp\n\nWebsite: http://JoseRamos.dev");
    creatorInfo.setFillColor(sf::Color::White);
    creatorInfo.setFont(font);
    creatorInfo.setCharacterSize(60);
    creatorInfo.setPosition((window.getSize().x - creatorInfo.getLocalBounds().width) / 2.0f, ((window.getSize().y - creatorInfo.getLocalBounds().height) / 2.0f) + 100);


    // Buttons text //
    sf::Text goBackButtonText;
    goBackButtonText.setString("Go Back");
    goBackButtonText.setFillColor(sf::Color::White);
    goBackButtonText.setFont(font);
    goBackButtonText.setCharacterSize(60);
    goBackButtonText.setPosition((window.getSize().x - goBackButtonText.getLocalBounds().width) / 2.0f, 850 + 20);
    goBackButtonText.setOrigin(goBackButtonText.getLocalBounds().left / 2.0f, goBackButtonText.getLocalBounds().top / 2.0f);

    sf::Text Option1Text;
    Option1Text.setString("Play Simulation");
    Option1Text.setFillColor(sf::Color::White);
    Option1Text.setFont(font);
    Option1Text.setCharacterSize(60);
    Option1Text.setPosition((window.getSize().x - Option1Text.getLocalBounds().width) / 2.0f - 4, 250 + 15);
//    Option1Text.setOrigin(Option1Text.getLocalBounds().left / 2.0f, Option1Text.getLocalBounds().top / 2.0f);

    sf::Text Option2Text;
    Option2Text.setString("About Creator");
    Option2Text.setFillColor(sf::Color::White);
    Option2Text.setFont(font);
    Option2Text.setCharacterSize(60);
    Option2Text.setPosition((window.getSize().x - Option2Text.getLocalBounds().width) / 2.0f, 500 + 20);
    Option2Text.setOrigin(Option2Text.getLocalBounds().left / 2.0f, Option2Text.getLocalBounds().top / 2.0f);

    sf::Text Option3Text;
    Option3Text.setString("Exit");
    Option3Text.setFillColor(sf::Color::White);
    Option3Text.setFont(font);
    Option3Text.setCharacterSize(60);
    Option3Text.setPosition((window.getSize().x - Option3Text.getLocalBounds().width) / 2.0f, 750 + 20);
    Option3Text.setOrigin(Option3Text.getLocalBounds().left / 2.0f, Option3Text.getLocalBounds().top / 2.0f);

    // Buttons Shape //
    sf::RectangleShape option1(sf::Vector2f(Option1Text.getLocalBounds().width + 25, 100));
    option1.setPosition((window.getSize().x - option1.getLocalBounds().width) / 2.0f, 250);
    option1.setFillColor(sf::Color::Blue);

    sf::RectangleShape option2(sf::Vector2f(Option1Text.getLocalBounds().width + 20, 100));
    option2.setPosition((window.getSize().x - option2.getLocalBounds().width) / 2.0f, 500);
    option2.setFillColor(sf::Color::Blue);

    sf::RectangleShape option3(sf::Vector2f(Option1Text.getLocalBounds().width + 20, 100));
    option3.setPosition((window.getSize().x - option3.getLocalBounds().width) / 2.0f, 750);
    option3.setFillColor(sf::Color::Blue);

    sf::RectangleShape goBackButton(sf::Vector2f(300, 100));
    goBackButton.setPosition((window.getSize().x - goBackButton.getLocalBounds().width) / 2.0f, 850);
    goBackButton.setFillColor(sf::Color::Blue);

    sf::RectangleShape simulationFrame(sf::Vector2f( window.getSize().x, 800));
    simulationFrame.setFillColor(sf::Color::White);

    Screen screen = MENU;


    // People Node //
    PersonNode people[500];

    for(int i = 0; i < 499; i++){
        people[i] = PersonNode();
    }
    people[499] = PersonNode(true);

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            if (screen == MENU) {
                if (isElementHover(option1.getGlobalBounds(),
                                   sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))) {
                    option1.setFillColor(sf::Color::Red);
                    option2.setFillColor(sf::Color::Blue);
                    option3.setFillColor(sf::Color::Blue);

                    if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                    {
                        screen = OPTION1;
                    }

                } else if (isElementHover(option2.getGlobalBounds(), sf::Vector2f(sf::Mouse::getPosition(window).x,
                                                                                  sf::Mouse::getPosition(window).y))) {
                    option1.setFillColor(sf::Color::Blue);
                    option2.setFillColor(sf::Color::Red);
                    option3.setFillColor(sf::Color::Blue);

                    if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                    {
                        screen = OPTION2;
                    }

                } else if (isElementHover(option3.getGlobalBounds(), sf::Vector2f(sf::Mouse::getPosition(window).x,
                                                                                  sf::Mouse::getPosition(window).y))) {
                    option1.setFillColor(sf::Color::Blue);
                    option2.setFillColor(sf::Color::Blue);
                    option3.setFillColor(sf::Color::Red);

                    if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                    {
                        screen = OPTION3;
                    }

                } else {

                    option1.setFillColor(sf::Color::Blue);
                    option2.setFillColor(sf::Color::Blue);
                    option3.setFillColor(sf::Color::Blue);
                }

                window.clear(sf::Color::Black);
                window.draw(text);
                window.draw(option1);
                window.draw(option2);
                window.draw(option3);
                window.draw(Option1Text);
                window.draw(Option2Text);
                window.draw(Option3Text);
                window.display();
            }

        }
        if(screen == OPTION1){
            if (isElementHover(goBackButton.getGlobalBounds(), sf::Vector2f(sf::Mouse::getPosition(window).x,
                                                                            sf::Mouse::getPosition(window).y))) {
                goBackButton.setFillColor(sf::Color::Red);
                if (event.type == sf::Event::MouseButtonReleased && event.mouseButton.button == sf::Mouse::Left) {
                    screen = MENU;
                }
            }
            else{
                goBackButton.setFillColor(sf::Color::Blue);
            }

            for(auto & person : people){
                person.move();
            }

            // Reading collisions
            for(auto & i : people){
                if(i.isInfected()){
                    for(auto & j : people){
                        if(i.getNodeShape().getGlobalBounds().contains(j.getLocation())){
                            j.gotSick();
//                            people[j].printInfo();
                        }
                    }
                }
            }

            window.clear(sf::Color::Black);
            window.draw(simulationFrame);

            for(const auto & person : people){
                window.draw(person.getNodeShape());
            }
            window.draw(goBackButton);
            window.draw(goBackButtonText);
            window.display();
//            sleep_for(nanoseconds(10));
//            sleep_until(system_clock::now() + milliseconds (50));
        }

        if(screen == OPTION2){
            if (isElementHover(goBackButton.getGlobalBounds(), sf::Vector2f(sf::Mouse::getPosition(window).x,
                                                                       sf::Mouse::getPosition(window).y))) {
                goBackButton.setFillColor(sf::Color::Red);
                if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                {
                    screen = MENU;
                }
            }
            else{
                goBackButton.setFillColor(sf::Color::Blue);
            }
            window.clear(sf::Color::Black);
            window.draw(imageSprite);
            window.draw(creatorInfo);
            window.draw(goBackButton);
            window.draw(goBackButtonText);
            window.display();
        }

        if(screen == OPTION3){
            window.close();
        }

    }

    return 0;
}

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <string>

using namespace std;

enum Screen {
    MENU, OPTION1, OPTION2, OPTION3
};

bool isElementHover(sf::FloatRect e, sf::Vector2f mp) {
    return e.contains(mp);
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
//
//    sf::RenderWindow window;
//    window.create(sf::VideoMode(1200,1000), "Project 1");
//
//    sf::Font font;
//    if(!font.loadFromFile("arial.ttf")){
//
//    }
//
//    sf::Text text;
//    text.setString("Welcome to the the COVID-19 simulator!");
//    text.setFillColor(sf::Color::White);
//    text.setFont(font);
//    text.setCharacterSize(60);
////    text.setPosition(50,30);
//    text.setPosition((window.getSize().x - text.getLocalBounds().width)/2.0f ,30);
//    text.setOrigin(text.getLocalBounds().left/2.0f,text.getLocalBounds().top/2.0f);
//
////    sf::Texture dice1Image, dice2Image, dice3Image, dice4Image;
//
//    while (window.isOpen())
//    {
//        sf::Event event;
//
//        while (window.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        window.clear();
//        window.draw(text);
//        window.display();
//    }

    sf::RenderWindow window, window2, window3;
    window.create(sf::VideoMode(1200, 1000), "COVID-19 Simulator");

    sf::Texture texture;
    if (!texture.loadFromFile("jose.jpg")) {
        return 1;
    }
    sf::Sprite sprite;
    sprite.setTexture(texture);

//    sf::Vector2f mp;
//    mp.x = sf::Mouse::getPosition(window).x;
//    mp.y = sf::Mouse::getPosition(window).y;

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
    creatorInfo.setString("Created by Jose Ramos :)\nGitHub: https://github.com/joseramosp\nWebsite: http://JoseRamos.dev");
    creatorInfo.setFillColor(sf::Color::White);
    creatorInfo.setFont(font);
    creatorInfo.setCharacterSize(60);
    creatorInfo.setPosition((window.getSize().x - creatorInfo.getLocalBounds().width) / 2.0f, (window.getSize().y - creatorInfo.getLocalBounds().height) / 2.0f);
    creatorInfo.setOrigin(creatorInfo.getLocalBounds().left / 2.0f, creatorInfo.getLocalBounds().top / 2.0f);

    sf::RectangleShape option1(sf::Vector2f(300, 100));
    option1.setPosition((window.getSize().x - option1.getLocalBounds().width) / 2.0f, 250);
    option1.setFillColor(sf::Color::Blue);

    sf::RectangleShape option2(sf::Vector2f(300, 100));
    option2.setPosition((window.getSize().x - option2.getLocalBounds().width) / 2.0f, 500);
    option2.setFillColor(sf::Color::Blue);

    sf::RectangleShape option3(sf::Vector2f(300, 100));
    option3.setPosition((window.getSize().x - option3.getLocalBounds().width) / 2.0f, 750);
    option3.setFillColor(sf::Color::Blue);

    Screen screen = MENU;

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();

            // First check if the sprite was clicked.
//            if(isElementHover(sprite.getGlobalBounds(), sf::Vector2f(event.mouseButton.x, event.mouseButton.y)))
//            {
//                cout << "test" << endl;
//                option1.setFillColor(sf::Color::Red);
//                if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
//                {
//                    window.create(sf::VideoMode(1200, 1000),"COVID-19 Simulator");
//                    window.clear(sf::Color::White);
//                    option1.setFillColor(sf::Color::Red);
//                }
//            }
            if (screen == MENU) {
                if (isElementHover(option1.getGlobalBounds(),
                                   sf::Vector2f(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))) {
                    cout << "option1" << endl;
                    option1.setFillColor(sf::Color::Red);
                    option2.setFillColor(sf::Color::Blue);
                    option3.setFillColor(sf::Color::Blue);

                    if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                    {
                        screen = OPTION1;
                    }

                } else if (isElementHover(option2.getGlobalBounds(), sf::Vector2f(sf::Mouse::getPosition(window).x,
                                                                                  sf::Mouse::getPosition(window).y))) {
                    cout << "option2" << endl;
                    option1.setFillColor(sf::Color::Blue);
                    option2.setFillColor(sf::Color::Red);
                    option3.setFillColor(sf::Color::Blue);

                    if(event.type == sf::Event::MouseButtonReleased &&  event.mouseButton.button == sf::Mouse::Left)
                    {
                        screen = OPTION2;
                    }

                } else if (isElementHover(option3.getGlobalBounds(), sf::Vector2f(sf::Mouse::getPosition(window).x,
                                                                                  sf::Mouse::getPosition(window).y))) {
                    cout << "option3" << endl;
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

            }
            window.clear(sf::Color::Black);

//        sprite.setPosition(sf::Vector2f(50, 300));

//        window.draw(sprite);
            window.draw(text);
            window.draw(option1);
            window.draw(option2);
            window.draw(option3);
            window.display();
        }
        if(screen == OPTION1){

        }

        if(screen == OPTION2){
            window.draw(sprite);

        }

        if(screen == OPTION3){
            window.close();
        }

    }

    return 0;
}

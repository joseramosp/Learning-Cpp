#include "Die.cpp"
#include "Deck.cpp"
#include "Player.cpp"
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <string>

class DieSet{

public:

    Die die1 = Die{};
    Die die2 = Die{};
    Die die3 = Die{};

    void rollDice(){
        die1.rollDie();
        die2.rollDie();
        die3.rollDie();
    }

    void printDiceValue(int amountToShow){

        switch(amountToShow){
            case 1:
                std::cout << "Die 1 value: " << die1.getDieValue() << "\n" << std::endl;
                break;
            case 2:
                std::cout << "Die 1 value: " << die1.getDieValue() << "\n";
                std::cout << "Die 2 value: " << die2.getDieValue() << "\n" << std::endl;
                break;
            case 3:
                std::cout << "Die 1 value: " << die1.getDieValue() << "\n";
                std::cout << "Die 2 value: " << die2.getDieValue() << "\n";
                std::cout << "Die 3 value: " << die3.getDieValue() << "\n" << std::endl;
                break;
            default:

                break;
        }
    }
};

int displayDice(DieSet dice, int amountToShow){

    sf::RenderWindow window;
    window.create(sf::VideoMode(460,100), "Project 2");

    sf::Texture dice1Image, dice2Image, dice3Image;

    if(!dice1Image.loadFromFile("dice/d" + to_string(dice.die1.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie1;
    imageSpriteDie1.setTexture(dice1Image);

    if(!dice2Image.loadFromFile("dice/d" + to_string(dice.die2.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie2;
    imageSpriteDie2.setTexture(dice2Image);
    imageSpriteDie2.setPosition(120,0);

    if(!dice3Image.loadFromFile("dice/d" + to_string(dice.die3.getDieValue()) + ".png"))
        return EXIT_FAILURE;
    sf::Sprite imageSpriteDie3;
    imageSpriteDie3.setTexture(dice3Image);
    imageSpriteDie3.setPosition(240,0);

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        switch(amountToShow){
            case 1:
                window.draw(imageSpriteDie1);
                window.display();
                break;
            case 2:
                window.draw(imageSpriteDie1);
                window.draw(imageSpriteDie2);
                window.display();
                break;
            case 3:
                window.draw(imageSpriteDie1);
                window.draw(imageSpriteDie2);
                window.draw(imageSpriteDie3);
                window.display();
                break;
            default:

                break;
        }
    }
}

int main() {

    srand(time(NULL));

    DieSet dice = DieSet();

    bool gameIsOver = false;
    int userInput = 0;
    Deck deck = Deck();
    Player player = Player();
    player.setUp();

    while(!gameIsOver){
        cout << "Enter one of the next options:\n" << endl;
        cout << "Enter \"1\" to roll dice." << endl;
        cout << "Enter \"2\" to shuffle deck." << endl;
        cout << "Enter \"3\" to get a card." << endl;
        cout << "Enter \"4\" to show all cards in deck." << endl;
        cout << "Enter \"5\" to show all cards in hand." << endl;
        cout << "Enter \"6\" to quit the game.\n" << endl;

        cin >> userInput;

        switch (userInput){
            case 1:
                cout << "How many dice do you want to roll?" << endl;
                cout << "Enter 1, 2 or 3 OR any other key to go back:" << endl;
                cin >> userInput;
                cout << "" <<endl;
                if(userInput > 0 && userInput < 4){
                    cout << "Rolling Dice\n" << endl;
                    dice.rollDice();
                    dice.printDiceValue(userInput);
                    displayDice(dice,userInput);
                }
                break;
            case 2:
                deck.shuffle();
                cout << "Deck has been shuffled!\n" << endl;
                break;
            case 3:
                player.addCard(deck.throwCard());
                cout << player.getName() + " has " + to_string(player.totalCard()) + " card/s: \n" << endl;
                player.showCards();
                cout << "" << endl;
                break;
            case 4:
                cout << "Showing all cards in deck:\n" << endl;
                cout << "Total cards available in deck: " + to_string(deck.size()) + "\n"<< endl;
                deck.showDeck();
                cout << "" << endl;
                break;
            case 5:
                cout << player.getName() + " has " + to_string(player.totalCard()) + " card/s: \n" << endl;
                player.showCards();
                cout << "" << endl;
                break;
            case 6:
                cout << "Bye bye\n" << endl;
                gameIsOver = true;
                break;
            default:
                cout << "Not a valid input. Try again!\n" << endl;
                break;
        }
    }
    return 0;
}

// TODO: Ask the player how many dice want to roll
#include <iostream>

using namespace std;

int main() {

    bool gameIsOver = false;
    int userInput = 0;

    while(!gameIsOver){
        cout << "Enter one of the next options:\n" << endl;
        cout << "Enter \"1\" to roll die" << endl;
        cout << "Enter \"2\" to show all cards in deck" << endl;
        cout << "Enter \"2\" to shuffle deck" << endl;
        cout << "Enter \"3\" to pick 3 cards from the deck" << endl;
        cout << "Enter \"4\" to quit the game\n" << endl;

        cin >> userInput;

        switch (userInput){
            case 1:
                cout << "Rolling Die\n" << endl;
                break;
            case 2:
                cout << "Showing all cards in deck\n" << endl;
                break;
            case 3:
                cout << "Shuffling deck\n" << endl;
                break;
            case 4:
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

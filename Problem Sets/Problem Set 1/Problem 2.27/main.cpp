//
// Created by Jose Ramos on 2/2/20.
//

// 2.27 (Integer Equivalent of a Character) Here is a peek ahead. In this chapter you learned about integers and the type
// int . C++ can also represent uppercase letters, lowercase
// letters and a considerable variety of special symbols. C++ uses small integers internally to represent each different character. The set of characters a computer uses and the corresponding integer representations for those characters are called that computer’s character set. You can print a character by enclosing that character in single quotes, as with
// You can print the integer equivalent of a character using static_cast as follows:
// This is called a cast operation (we formally introduce casts in Chapter 4). When the preceding statement executes, it prints the value 65 (on systems that use the ASCII character set). Write a program that prints the integer equivalent of a character typed at the keyboard. Store the input in a variable of type
// char. Test your program several times using uppercase letters, lowercase letters, digits and special characters (such as $ ).

#include <iostream>

int main() {

    char userInput;
    int userInputAsAInteger;

    std::cout << "Enter a character:\n";
    std::cin >> userInput;
    userInputAsAInteger = static_cast<int>(userInput);
    std::cout << "The ASCII code of your character is: " << userInputAsAInteger << std::endl;

    return 0;
}
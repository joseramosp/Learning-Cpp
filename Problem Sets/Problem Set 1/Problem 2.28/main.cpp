//
// Created by Jose Ramos on 2/2/20.
//

// 2.28 (Digits of an Integer) Write a program that inputs a five- digit integer, separates the integer into its digits
// and prints them separated by three spaces each. [Hint: Use the integer division and remainder operators.]
// For example, if the user types in 42339, the program should print: 4 2 3 3 9

#include <iostream>

int main() {

    int numbers[5] = {0};
    int number{0};

    std::cout << "Enter a five-digit integer:\n";
    std::cin >> number;

    for(int i = 0, a=number; i<5; i++){
        numbers[i] = a%10;
        a = a/10;
    }
    for(int i = 4; i>=0; i--){
        std::cout << numbers[i] << " ";
    }

    return 0;
}
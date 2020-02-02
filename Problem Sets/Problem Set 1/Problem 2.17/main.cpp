//
// Created by Jose Ramos on 2/2/20.
//

// 2.17 (Printing) Write a program that prints the numbers 1 to 4 on the same line with each pair of adjacent numbers separated by one space. Do this several ways:
// A. Using one statement with one stream insertion operator.
// B. Using one statement with four stream insertion operators.
// C. Using four statements.

#include <iostream>

int main() {

    std::cout << "1 2 3 4\n";

    std::cout << "1 " << "2 " << "3 " << "4\n";

    std::cout << "1 ";
    std::cout << "2 ";
    std::cout << "3 ";
    std::cout << "4" << std::endl;

    return 0;
}

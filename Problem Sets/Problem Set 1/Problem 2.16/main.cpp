//
// Created by Jose Ramos on 1/29/20.
//

// 2.16 (Arithmetic) Write a program that asks the user to enter two numbers, obtains the two numbers from the user and
// prints the sum, product, difference, and quotient of the two numbers.
#include <iostream>

int main() {

    int num1{0}, num2{0}, sum{0};

    std::cout << "Enter two number: \n";
    std::cin >> num1;
    std::cin >> num2;
    sum = num1 + num2;
    std::cout << "The total sum of the two numbers is: " << sum << std::endl;
    return 0;
}
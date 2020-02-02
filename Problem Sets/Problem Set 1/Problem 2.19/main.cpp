//
// Created by Jose Ramos on 2/2/20.
//

// 2.19 (Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum, average, product, smallest and largest of these numbers. The screen dialog should appear as follows:
// Input three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <iostream>

int main() {

    int num1{0}, num2{0}, num3{0}, sum, average, product;

    std::cout << "Enter 3 numbers:\n";

    std::cin >> num1;
    std::cin >> num2;
    std::cin >> num3;

    sum = num1 + num2 + num3;
    average = (num1 + num2 + num3)/3;
    product = num1 * num2 * num3;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
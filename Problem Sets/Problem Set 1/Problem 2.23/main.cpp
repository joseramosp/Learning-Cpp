//
// Created by Jose Ramos on 2/2/20.
//

// 2.23 (Largest and Smallest Integers) Write a program that reads in five integers and determines and prints the largest
// and the smallest integers in the group. Use only the programming techniques you learned in this chapter.

#include <iostream>

int main() {

    int smallestNumber{0}, largestNumber{0};
    int numbers[5] = {0};

    std::cout << "Enter 5 numbers:\n";

    std::cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3] >> numbers[4];

    smallestNumber = numbers[0];
    largestNumber = numbers[0];

    for(int i=0; i<5; i++){
        if(smallestNumber > numbers[i]){
            smallestNumber = numbers[i];
        }
    }

    for(int i=0; i<5; i++){
        if(largestNumber < numbers[i]){
            largestNumber = numbers[i];
        }
    }

    for(int i=0; i<5; i++){
        std::cout << numbers[i] << " ";
        if(i == 4){
            std::cout << std::endl;
        }
    }

    std::cout << "The largest number is: " << largestNumber << std::endl;
    std::cout << "The smallest number is: " << smallestNumber << std::endl;

    return 0;
}
//
// Created by Jose Ramos on 2/16/20.
//

// (Sides of a Right Triangle) Write a program that reads three nonzero integers and determines and prints whether
// they’re the sides of a right triangle.

#include <iostream>
#include <string>

using namespace std;

int main() {

    int sideA, sideB, sideC;

    cout << "Enter each of the triangle length for each side:" << std::endl;
    cout << "a = ";
    cin >> sideA;
    cout << "b = ";
    cin >> sideB;
    cout << "c = ";
    cin >> sideC;

    if((sideA*sideA) + (sideB*sideB) == (sideC*sideC) || (sideA*sideA) + (sideC*sideC) == (sideB*sideB) || (sideB*sideB) + (sideC*sideC) == (sideA*sideA)){
        cout << "It is a right triangle" << std::endl;
    }
    else {
        cout << "It is NOT a right triangle" << std::endl;
    }
}

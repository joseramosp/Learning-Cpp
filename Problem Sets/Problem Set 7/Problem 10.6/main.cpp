//
// Created by Jose Ramos on 3/25/20.
//

// 10.6 (Memory Allocation and Deallocation Operators) Compare and contrast dynamic memory allocation and deallocation
// operators new , new [] , delete and delete[].

#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

int main() {
    int* numPrt{new int{324}};
    cout << numPrt << std::endl;
    cout << *numPrt << std::endl;

    delete numPrt;
    cout << numPrt << std::endl;
    cout << *numPrt << std::endl;

    int* numPrt2{new int[10]{}};
    numPrt2[0] = 1;
    numPrt2[1] = 5;
    numPrt2[2] = 8;
    cout << numPrt2 << endl;
    cout << *numPrt2 << endl;
    cout << *(numPrt2 + 1) << endl;
    cout << *(numPrt2 + 2) << endl;
    cout << numPrt2[0] << endl;
    cout << numPrt2[1] << endl;
    cout << numPrt2[2] << endl;

    delete[] numPrt2;

    return 0;
}

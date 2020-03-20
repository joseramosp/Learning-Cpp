//
// Created by Jose Ramos on 2/29/20.
//

// 7.19 (Converting array Example of Section 7.10 to array ) Convert the array example of Fig. 7.21 to use arrays.
// Eliminate any vector -only features.

// Fig. 7.21: fig07_21.cpp // Demonstrating C++ Standard Library class template array.
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <array>
#include <stdexcept>
using namespace std;

void outputArray (int array[], int size); // display the array
void inputArray (int *items); // input values into the array

int main() {
    array<int, 10> integers1{0}; // 7-element array<int>
    array<int, 10> integers2{0}; // 10-element array<int>

    // print integers1 size and contents
    cout << "Size of array integers1 is " << integers1.size() << "\narray after initialization:";
    outputArray(integers1.__elems_, integers1.size());

    // print integers2 size and contents
    cout << "\nSize of array integers2 is " << integers2.size() << "\narray after initialization:";
    outputArray(integers2.__elems_, integers2.size());
    // input and print integers1 and integers2
    cout << "\nEnter 20 integers:" << endl;
    inputArray(integers1.data());
    inputArray(integers2.data());
    cout << "\nAfter input, the vectors contain:\n" << "integers1: ";
    outputArray(integers1.__elems_, integers1.size());
    cout << "integers2: ";
    outputArray(integers2.__elems_, integers2.size());
    // use inequality (!=) operator with array objects
    cout << "\nEvaluating: integers1 != integers2" << endl;

    if (integers1 != integers2) {
        cout << "integers1 and integers2 are not equal" << endl;
    }
    // create array integers3 using integers1 as an
    // initializer; print size and contents
    array<int, integers1.size()> integers3;
    integers3 = integers1; // copy constructor
    cout << "\nSize of array integers3 is " << integers3.size() << "\narray after initialization: ";
    outputArray(integers3.__elems_,integers3.size());
    // use overloaded assignment (=) operator
    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2; // assign integers2 to integers1
    cout << "integers1: ";
    outputArray(integers1.__elems_, integers1.size());
    cout << "integers2: ";
    outputArray(integers2.__elems_, integers2.size());
    // use equality (==) operator with array objects
    cout << "\nEvaluating: integers1 == integers2" << endl;
    if (integers1 == integers2) {
        cout << "integers1 and integers2 are equal" << endl;
    }

    // use square brackets to use the value at location 5 as an rvalue
    cout << "\nintegers1[5] is " << integers1[5];

    // use square brackets to create lvalue
    cout << "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1: ";
    outputArray(integers1.__elems_, integers1.size());

    // attempt to use out-of-range subscript
    try {
        cout << "\nAttempt to display integers1.at(15)" << endl;
        cout << integers1.at(15) << endl; // ERROR: out of range
    }
    catch (out_of_range &ex) {
        cerr << "An exception occurred: " << ex.what() << endl;
    }

    // changing the size of a array
    cout << "\nCurrent integers3 size is: " << integers3.size() << endl;
    //integers3.push_back(1000); // add 1000 to the end of the array
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputArray(integers3.__elems_,integers3.size());
}

// output array contents
void outputArray(int array[], int size) {
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

//
void inputArray(int *items) {
    int item;
    for(int i = 0; i < 10; i++){
        cin >> item;
        items[i] = item;
    }
}
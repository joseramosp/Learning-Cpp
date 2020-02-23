//
// Created by Jose Ramos on 2/20/20.
//

// 6.49 (Pass-by-Value vs. Pass-by-Reference) Write a complete C++ program with the two alternate functions specified
// below, each of which simply triples the variable count defined in main . Then compare and contrast the two approaches.
// These two functions are:
// A. function tripleByValue that passes a copy of count by value, triples the copy and returns the new value and
// B. function tripleByReference that passes count by reference via a reference parameter and triples the
// original value of count through its alias (i.e., the reference parameter).

#include <iostream>

using namespace std;

int tripleByValue(int n){
    return n *= 3;
}

int tripleByReference(int &n){
    return n *= 3;
}

int main(){

    int count = 12;

    cout << "The value of count is " << count << endl;
    cout << "Testing the tripleByValue function: " << tripleByValue(count) << endl;
    cout << "The value of count is " << count << endl;
    cout << "Testing the tripleByReference function: " << tripleByReference(count) << endl;
    cout << "The value of count is " << count << endl;

    return 0;

}

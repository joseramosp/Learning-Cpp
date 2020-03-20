//
// Created by Jose Ramos on 2/29/20.
//

// 8.9 (Write C++ Statements) For each of the following, write a single statement that performs the specified task.
// Assume that long variables value1 and value2 have been declared and value1 has been initialized to 200000.
// A. Declare the variable longPtr to be a pointer to an object of type long.
// B. Assign the address of variable value1 to pointer variable longPtr.
// C. Display the value of the object pointed to by longPtr.
// D. Assign the value of the object pointed to by longPtr to variable value2.
// E. Display the value of value2.
// F. Display the address of value1.
// G. Display the address stored in longPtr. Is the address displayed the same as value1 ’s?

#include <iostream>
#include <cstdlib>
#include <array>
#include <time.h>

using namespace std;
int main() {

    long value1 = 200000;
    long value2 = 200000;

    long* longPtr = &value1;
    cout << "longPtr value: "<< *longPtr << endl;
    value2 = *longPtr;
    cout << "value2 value: "<< value2 << endl;
    cout << "value1 address: "<< &value1 << endl;
    cout << "longPtr address: "<< longPtr << endl;

    return 0;
}

//
// Created by Jose Ramos on 2/29/20.
//

// 7.13(Duplicate Elimination with array) Use a one-dimensional array to solve the following problem. Read in 20
// numbers, each of which is between 10 and 100, inclusive. As each number is read, validate it and store it in the
// array only if it isn’t a duplicate of a number already read. After reading all the values, display only the unique
// values that the user entered. Provide for the “worst case” in which all 20 numbers are different. Use the smallest
// possible array to solve this problem.

#include <iostream>
#include <cstdlib>
#include <array>
#include <time.h>

using namespace std;

void printArray(int array[], int size);

int main() {
    srand(time(NULL));

    array<int, 20> numbers{};
    array<int, 20> uniquesNumbers{};

    for(int i = 0; i < 20; i++){
        numbers[i] = rand()%91 + 10;
    }

    cout << "The input was: " << endl;
    printArray(numbers.__elems_,numbers.size());
    uniquesNumbers = numbers;
    int uniqueNumbersArraySize = numbers.size();
    for(int i = 0; i< numbers.size(); i++){
        bool found = false;
        if(uniquesNumbers[i] != 0){
            for(int j = i+1; j< numbers.size(); j++){
                if(uniquesNumbers[i] == uniquesNumbers[j]){
                    found = true;
                    uniquesNumbers[j] = 0;
                    uniqueNumbersArraySize--;
                }
            }
            if(found){
                uniquesNumbers[i] = 0;
                uniqueNumbersArraySize--;
            }
        }
    }
    cout << "\nUnique values that the user entered: " << endl;
    for(int i = 0; i<uniquesNumbers.size(); i++){
        if(uniquesNumbers[i] != 0){
            cout << uniquesNumbers[i] << " ";
        }
    }
    cout << endl;

    cout << "\nThere were " << uniqueNumbersArraySize <<" numbers that were not repeated." << endl;

    return 0;
}

void printArray(int array[], int size){

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
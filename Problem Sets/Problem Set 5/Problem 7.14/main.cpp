//
// Created by Jose Ramos on 2/29/20.
//

// 7.14 (Duplicate Elimination with vector) Re-implement Exercise 7.13 using a vector . Begin with an empty vector and
// use its push_back function to add each unique value to the vector.

#include <iostream>
#include <cstdlib>
#include <vector>
#include <stdexcept>
#include <time.h>

using namespace std;

void printVector(vector<int> vector, int size);

int main() {
    srand(time(NULL));

    vector<int> numbers;
    vector<int> uniquesNumbers;

    for(int i = 0; i < 20; i++){
        numbers.push_back(rand()%91 + 10);
    }

    cout << "The input was: " << endl;
    printVector(numbers,numbers.size());
    uniquesNumbers = numbers;
    int uniqueNumbersVectorSize = numbers.size();
    for(int i = 0; i< numbers.size(); i++){
        bool found = false;
        if(uniquesNumbers[i] != 0){
            for(int j = i+1; j< numbers.size(); j++){
                if(uniquesNumbers[i] == uniquesNumbers[j]){
                    found = true;
                    uniquesNumbers[j] = 0;
                    uniqueNumbersVectorSize--;
                }
            }
            if(found){
                uniquesNumbers[i] = 0;
                uniqueNumbersVectorSize--;
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

    cout << "\nThere were " << uniqueNumbersVectorSize << " out of " << numbers.size() << " numbers that were not repeated." << endl;

    return 0;
}

void printVector(vector<int> vector, int size){

    for(int i = 0; i < size; i++){
        cout << vector[i] << " ";
    }
    cout << endl;
}
//
// Created by Jose Ramos on 2/20/20.
//

// 6.52 (Function Template maximum ) Write a program that uses a
// function template called maximum to determine the larger of two
// arguments. Test the program using integer, character and
// floating-point number arguments.

#include <iostream>

using namespace std;

template <typename T>
void maximum(T val1, T val2){

    T maximumVal = val1>val2? val1: val2;
    cout << "The maximum value between " << val1 << " and " << val2 << " is " << maximumVal << endl;
}

int main(){

    maximum(59,38);
    maximum('9','z');
    maximum(48.2,48.99);
    return 0;

}


//
// Created by Jose Ramos on 2/20/20.
//

// 6.51 (Function Template minimum ) Write a program that uses a function template called minimum to determine the smaller of two
// arguments. Test the program using integer, character and
// floating-point number arguments.

#include <iostream>

using namespace std;

template <typename T>
void minimum(T val1, T val2){

    T minimumVal = val1<val2? val1: val2;
    cout << "The minimum value between " << val1 << " and " << val2 << " is " << minimumVal << endl;
}

int main(){

    minimum(59,38);
    minimum('9','z');
    minimum(38.42,20.34);
    return 0;

}

//
// Created by Jose Ramos on 2/16/20.
//

// 4.28 (Printing the Decimal Equivalent of a Binary Number) Input an integer containing only 0s and 1s (i.e., a “binary”
// integer) and print its decimal equivalent. Use the remainder and division operators to pick off the “binary” number’s
// digits one at a time from right to left. Much as in the decimal number system, where the rightmost digit has a positional
// value of 1, the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number
// system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4, then
// 8, and so on. Thus the decimal number 234 can be interpreted as 2 * 100 + 3 * 10 + 4 * 1. The decimal equivalent of
// binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8, or 13. [Note: To learn more about binary numbers,
// refer to Appendix D.]

#include <iostream>
#include <string>

using namespace std;

int main() {

    int binaryInput{0};
    int decimalOutput{0};
    cout << "Enter a binary number:" << std::endl;
    cin >> binaryInput;

    for(int i = binaryInput, h = 1; i> 0; i= i/10, h = h*2){
        if(i%2 == 1){
            decimalOutput += 1*h;
        }
    }
    cout << "\nThe binary number " << binaryInput << " in decimal is " << decimalOutput << std::endl;
}

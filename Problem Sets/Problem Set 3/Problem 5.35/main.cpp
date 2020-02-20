//
// Created by Jose Ramos on 2/16/20.
//

// 5.35 (Displaying the Interest Rate in the DollarAmount Example) Enhance the main program in Fig. 5.7 to display the
// interest rate based on the two integers entered by the user. For example, if the user enters 2 and 100, display 2.0%,
// and if the user enters 2015 and 100000, display 2.015%.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class DollarAmount {
public:

    //DollarAmount();

    explicit DollarAmount(double value) : dollars(value), cents(int (value * 100) % 100) { }
    explicit DollarAmount(int64_t bills, int64_t pennies) : dollars(bills), cents(pennies) { }

    void add(DollarAmount right){
        dollars += right.dollars;
        cents += right.cents;
        if(cents >= 100){
            dollars += cents /100;
            cents %= 100;
        }
    }

    void subtract(DollarAmount right){

        double d1 =  (dollars) + (double (cents)/100);
        double d2 =  (right.dollars) + (double (right.cents)/100);
        double total = d1 - d2;

        dollars = int(total);
        cents = abs(int(total * 100)%100);

    }

    void addInterest(int rate, int divisor){
        DollarAmount interest {
                (double (dollars +  (double (cents)/100)) * rate ) / divisor
        };
        //cout << interest.toString()<< endl;
        add(interest);
    }

    std::string toString() const {
        //std::string dollars{std::to_string(amount/100)};
        //std::string cents{std::to_string(std::abs(amount % 100))};
        return to_string(dollars) + "." + (cents < 10 ? "0" : "") + to_string(cents);
    }

private:
    //int64_t amount{0};
    int dollars{0}, cents{0};
};

int main() {
    DollarAmount d1{123.45};
    DollarAmount d2{15.76};

    cout << "After adding d2 (" << d2.toString() <<  ") into d1 (" << d1.toString() << "), d1 = ";
    d1.add(d2);
    cout << d1.toString() << "\n";

    cout << "After subtracting d2 (" << d2.toString() <<  ") from d1 (" << d1.toString() << "), d1 = ";
    d1.subtract(d2);
    cout << d1.toString() << "\n";

    cout << "After subtracting d1 (" << d1.toString() <<  ") from d2 (" << d2.toString() << "), d2 = ";
    d2.subtract(d1);
    cout << d2.toString() << "\n\n";

    cout << "Enter integer interest rate and divisor. For example:\n"
        << "for     2%,enter:    2 100\n"
        << "for   2.3%,enter:   23 1000\n"
        << "for  2.37%,enter:  237 10000\n"
        << "for 2.375%,enter: 2375 100000\n";

    int rate;
    int divisor;
    cin >> rate >> divisor;

    DollarAmount balance{100000};
    cout << "\nInitial balance: " << balance.toString() << endl;
    balance.addInterest(rate,divisor);
    cout << "\nBalance after interest applied: " << balance.toString() <<  endl;

}
//
// Created by Jose Ramos on 2/16/20.
//

// 5.33 (DollarAmount with dollars and cents Data Members) Reimplement class DollarAmount from Exercise 5.32 to store
// data members dollars and cents , rather than amount . Modify the body of each constructor and member function
// appropriately to manipulate the dollars and cents data members.

#include <iostream>
#include <string>

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
        dollars -= right.dollars;
        cents -= right.cents;
        if(cents<0){
            dollars -= 1;
            cents *= -1;
        }
    }

    void addInterest(int rate, int divisor){
        DollarAmount interest {
                (double (dollars + double (cents/100)) * rate + divisor / 2) / divisor
        };

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
    DollarAmount myMoney(100, 54);
    cout << myMoney.toString() << std::endl;
    myMoney.add(DollarAmount(100));
    cout << myMoney.toString() << std::endl;
    myMoney.subtract(DollarAmount(0.10));
    cout << myMoney.toString() << std::endl;
}
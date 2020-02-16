//
// Created by Jose Ramos on 2/16/20.
//

// 5.30 (DollarAmount Constructor with Two Parameters)
// Enhance class DollarAmount (Fig. 5.8) with a constructor that
// receives two parameters representing the whole number of dollars and the whole number of cents. Use these to calculate
// and store in the data member amount the total number of pennies. Test the class with your new constructor.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class DollarAmount {
public:

    //DollarAmount();

    explicit DollarAmount(int64_t value) : amount{value} { }
    explicit DollarAmount(int64_t bills, int64_t pennies) : amount{bills*100 + pennies} { }

    void add(DollarAmount right){
        amount += right.amount;
    }

    void subtract(DollarAmount right){
        amount -= right.amount;
    }

    void addInterest(int rate, int divisor){
        DollarAmount interest {
                (amount * rate + divisor / 2) / divisor
        };

        add(interest);
    }

    std::string toString() const {
        std::string dollars{std::to_string(amount/100)};
        std::string cents{std::to_string(std::abs(amount % 100))};
        return dollars + "." + (cents.size() == 1 ? "0" : "") + cents;
    }

private:
    int64_t amount{0};
};

int main() {
    DollarAmount myMoney(100, 54);
    cout << myMoney.toString() << std::endl;
    myMoney.add(DollarAmount(100));
    cout << myMoney.toString() << std::endl;


}

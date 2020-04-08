//
// Created by Jose Ramos on 4/7/20.
//

#ifndef PROBLEM_SET_7_ACCOUNT_H
#define PROBLEM_SET_7_ACCOUNT_H


#include <cmath>

class Account {
public:
    Account(double);
    double getBalance(void);
    void credit(double);
    void debit(double);

private:
    double balance;
};


#endif //PROBLEM_SET_7_ACCOUNT_H

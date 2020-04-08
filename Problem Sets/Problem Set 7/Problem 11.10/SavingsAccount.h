//
// Created by Jose Ramos on 4/7/20.
//

#ifndef PROBLEM_SET_7_SAVINGSACCOUNT_H
#define PROBLEM_SET_7_SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount: public Account {

public:
    SavingsAccount(double initialAmount, double interestRate);
    double calculateInterest();
    void addInterest();

private:
    double interestRate;
    double balance;
};


#endif //PROBLEM_SET_7_SAVINGSACCOUNT_H

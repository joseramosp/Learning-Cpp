//
// Created by Jose Ramos on 4/7/20.
//

#ifndef PROBLEM_SET_7_CHECKINGACCOUNT_H
#define PROBLEM_SET_7_CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
public:
    CheckingAccount(double initialAmount, double feePerTransaction);
    double getFeePerTransaction();
    void credit(double amount);
    void debit(double amount);

private:
    double feePerTransaction;

};


#endif //PROBLEM_SET_7_CHECKINGACCOUNT_H

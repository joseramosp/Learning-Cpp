//
// Created by Jose Ramos on 4/7/20.
//

#include "CheckingAccount.h"
#include <iostream>

using namespace std;

CheckingAccount::CheckingAccount(double initialAmount, double feePerTransaction) : Account(initialAmount), feePerTransaction(feePerTransaction) {}

double CheckingAccount::getFeePerTransaction() {
    return feePerTransaction;
}

void CheckingAccount::debit(double amount) {
    if(amount < 0 || amount > getBalance() + getFeePerTransaction()){
        cout << "The amount entered is invalid." << endl;
    } else{
        Account::debit(amount + getFeePerTransaction());
    }
}

void CheckingAccount::credit(double amount) {
    if(amount < 0 || getFeePerTransaction() > amount + Account::getBalance()){
        cout << "The amount entered is invalid." << endl;
    } else{
        Account::credit(amount - getFeePerTransaction());
    }
}
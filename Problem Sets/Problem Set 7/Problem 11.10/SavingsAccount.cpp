//
// Created by Jose Ramos on 4/7/20.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double initialAmount, double interestRate) : Account(initialAmount), interestRate(interestRate) {}

double SavingsAccount::calculateInterest() {
    return getBalance() * (interestRate/100);
}

void SavingsAccount::addInterest() {
    credit(calculateInterest());
}
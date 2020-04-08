//
// Created by Jose Ramos on 4/7/20.
//

#include "Account.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Account::Account(double initialBalance) {
    if(initialBalance < 0){
        balance = 0;
        cout << "The initial balance was invalid." << endl;
    } else {
        balance = initialBalance;
    }
}

void Account::credit(double amount) {
    if(amount < 0){
        cout << "The amount entered is invalid." << endl;
    } else{
        balance += amount;
    }
}

void Account::debit(double amount) {
    if(amount < 0 || amount > balance){
        cout << "The amount entered is invalid." << endl;
    } else{
        balance -= amount;
    }
}

double Account::getBalance() {
    return balance;
}
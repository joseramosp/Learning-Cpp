//
// Created by Jose Ramos on 3/25/20.
//

#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main() {
    std::cout << "Hello, welcome to my bank!\n" << std::endl;

    cout << "******************* ACOUNT *******************\n" << endl;

    Account myAccount = Account(25850);
    myAccount.debit(100000);
    myAccount.credit(330);
    myAccount.debit(2550);
    cout << "The balance in my account is: $" << myAccount.getBalance() << endl;

    cout << "\n*************** SAVINGS ACOUNT ***************\n" << endl;

    SavingsAccount mySavingsAccount = SavingsAccount(25850,4);
    mySavingsAccount.debit(100000);
    mySavingsAccount.credit(330);
    mySavingsAccount.debit(2550);
    cout << "The balance in my account is: $" << mySavingsAccount.getBalance() << endl;
    cout << "The interest earned in my account is: $" << mySavingsAccount.calculateInterest() << endl;
    mySavingsAccount.addInterest();
    cout << "The balance in my account is: $" << mySavingsAccount.getBalance() << endl;

    cout << "\n*************** CHECKING ACOUNT ***************\n" << endl;

    CheckingAccount myCheckingAccount = CheckingAccount(300, .25);
    myCheckingAccount.debit(300);
    myCheckingAccount.debit(299.80);
    myCheckingAccount.debit(50);
    cout << "The balance in my checking account is: $" << myCheckingAccount.getBalance() << endl;
    myCheckingAccount.credit(14050);
    cout << "The balance in my checking account is: $" << myCheckingAccount.getBalance() << endl;


    return 0;
}

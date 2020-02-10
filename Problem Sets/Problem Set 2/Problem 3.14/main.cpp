//
// Created by Jose Ramos on 2/9/20.
//

// 3.14 (C++11 List Initializers) Write a statement that uses list
// initialization to initialize an object of class Account which provides a constructor that receives an unsigned int , two
// string s and a double to initialize the accountNumber , firstName ,
// lastName and balance data members of a new object of the class.

#include <iostream>
#include <string>

using namespace std;

class Account{

public:

    Account(unsigned int accountNumber, const string &firstName, const string &lastName, double balance)
            : accountNumber(accountNumber), firstName(firstName), lastName(lastName), balance(balance) {};

    unsigned int getAccountNumber() const {
        return accountNumber;
    }

    void setAccountNumber(unsigned int accountNumber) {
        Account::accountNumber = accountNumber;
    }

    const string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        Account::firstName = firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        Account::lastName = lastName;
    }

    double getBalance() const {
        return balance;
    }

    void setBalance(double balance) {
        Account::balance = balance;
    }

private:

    unsigned int accountNumber{0};
    std::string firstName, lastName;
    double balance{0};

};

void displayAccount(Account accountToDisplay){
    cout << accountToDisplay.getFirstName() << "'s account balance is $" << accountToDisplay.getBalance() << std::endl;
}

int main() {

    Account account1{23451, "Jose", "Ramos", 250000};
    displayAccount(account1);
}
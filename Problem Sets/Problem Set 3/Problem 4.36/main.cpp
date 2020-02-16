//
// Created by Jose Ramos on 2/16/20.
//

// 4.36 (Modified Account Class) Modify class Account (Exercise 3.9) to represent the balance data member as type double.
// Also, display all double amounts with two digits to the right of the decimal point.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Account{

public:

    Account(std::string accountName, double initialBalance): name{accountName} {

        if(initialBalance>0){
            balance = initialBalance;
        }
    }

    void deposit(double depositAmount){
        if(depositAmount>0){
            balance = balance + depositAmount;
        }
    }

    double getBalance() const {
        return balance;
    }

    void setName(std::string accountName){
        name = accountName;
    }

    std:: string getName() const {
        return name;
    }

    void withdraw(double withdrawalAmount){

        if(withdrawalAmount<=balance){
            balance = balance - withdrawalAmount;
        }
        else{
            cout << fixed << setprecision(2) << "Your withdrawal account balance is: " << balance << std::endl;
        }
    }

private:

    std::string name;
    double balance{0};
};

void displayAccount(Account accountToDisplay){
    cout << fixed << setprecision(2) << accountToDisplay.getName() << "'s account balance is $" << accountToDisplay.getBalance() << std::endl;
}

int main() {
    Account account1{"Jose Ramos", 50};
    Account account2{"Miguel Pena", -7};
    double depositAmount;

    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account1: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance" << std::endl;
    account1.deposit(depositAmount);

    displayAccount(account1);
    displayAccount(account2);

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance" << std::endl;
    account2.deposit(depositAmount);

    // display balances
    displayAccount(account1);
    displayAccount(account2);

}
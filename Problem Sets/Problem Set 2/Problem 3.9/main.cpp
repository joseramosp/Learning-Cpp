//
// Created by Jose Ramos on 2/9/20.
//

//3.9 (Modified Account Class) Modify class Account (Fig. 3.8) to
//provide a member function called withdraw that withdraws
//money from an Account . Ensure that the withdrawal amount
//does not exceed the Account ’s balance. If it does, the balance
//should be left unchanged and the member function should display a message indicating "Withdrawal
//account balance." Modify class AccountTest (Fig. 3.9) to test member function withdraw.

#include <iostream>
#include <string>

using namespace std;

class Account{

public:

    Account(std::string accountName, int initialBalance): name{accountName} {

        if(initialBalance>0){
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount){
        if(depositAmount>0){
            balance = balance + depositAmount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName){
        name = accountName;
    }

    std:: string getName() const {
        return name;
    }

    void withdraw(int withdrawalAmount){

        if(withdrawalAmount<=balance){
            balance = balance - withdrawalAmount;
        }
        else{
            cout << "Your withdrawal account balance is: " << balance << std::endl;
        }
    }

private:

    std::string name;
    int balance{0};
};

int main() {
    Account account1{"Jose Ramos", 50};
    Account account2{"Miguel Pena", -7};
    int depositAmount;
    int withdrawalAmount;

    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << std::endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl;

    cout << "\n\nEnter deposit amount for account1: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account1 balance" << std::endl;
    account1.deposit(depositAmount);

    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << std::endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl;

    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to account2 balance" << std::endl;
    account2.deposit(depositAmount);

    // display balances
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << std::endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl;

    // Withdraw
    cout << "\n\nEnter withdrawal amount for account1: ";
    cin >> withdrawalAmount;
    cout << "withdrawing " << withdrawalAmount << " from account1 balance" << std::endl;
    account1.withdraw(withdrawalAmount);

    // display balances
    cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance() << std::endl;
    cout << "account2: " << account2.getName() << " balance is $" << account2.getBalance() << std::endl;

}

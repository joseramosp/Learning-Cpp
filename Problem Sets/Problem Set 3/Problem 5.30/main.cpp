//
// Created by Jose Ramos on 2/9/20.
//

// 3.13 (Removing Duplicated Code in the main Function) In
// Fig. 3.9, the main function contains six statements (lines 14– 15, 16–17, 26–27, 28–29, 37–38 and 39–40) that each display
// an Account object’s name and balance . Study these statements
// and you’ll notice that they differ only in the Account object being
// manipulated—account1 or account2. In this exercise, you’ll
// define a new displayAccount function that contains one copy of
// that output statement. The member function’s parameter will be an Account object and the member function will output the
// object’s name and balance. You’ll then replace the six duplicated statements in main with calls to displayAccount , passing as an argument the specific Account object to output. Modify Fig. 3.9 to define the following displayAccount function after the using directive and before main :
// void displayAccount(Account accountToDisplay) {
//    // place the statement that displays
//    // accountToDisplay’s name and balance here
// }
// Replace the comment in the member function’s body with a statement that displays accountToDisplay ’s name and balance .
// Once you’ve completed displayAccount ’s declaration, modify main to replace the statements that display each Account ’s name and balance with calls to displayAccount of the form:
// In each call, the argument should be the account1 or account2
// object, as appropriate. Then, test the updated program to
// ensure that it produces the same output as shown in Fig. 3.9.

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

void displayAccount(Account accountToDisplay){
    cout << accountToDisplay.getName() << "'s account balance is $" << accountToDisplay.getBalance() << std::endl;
}

int main() {
    Account account1{"Jose Ramos", 50};
    Account account2{"Miguel Pena", -7};
    int depositAmount;

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

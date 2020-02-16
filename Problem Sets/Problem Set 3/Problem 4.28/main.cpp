//
// Created by Jose Ramos on 2/9/20.
//

//3.10 (Invoice Class) Create a class called Invoice that a hardware store might use to represent an invoice for an item
//sold at the store. An Invoice should include four data members —a part number (type string ), a part description (type string ), a quantity of the item being purchased (type int ) and a price
//amount
//exceeded
//per item (type int). Your class should have a constructor that
//initializes the four data members. Provide a set and a get function for each data member. In addition, provide a member function named getInvoiceAmount that calculates the invoice
//amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int value. If the quantity is not
//positive, it should be set to 0 . If the price per item is not positive, it should be set to 0 . Write a test program that demonstrates class Invoice ’s capabilities.

#include <iostream>
#include <string>

using namespace std;

class Invoice{

public:

    Invoice(std::string partNumber,std::string partDescription, int partPrice, int partQuantity) :description{partDescription}, number{partNumber}{
        if(partPrice>0){
            price = partPrice;
        }
        if(partQuantity>0){
            quantity = partQuantity;
        }
    };

    void setNumber(std::string partNumber){
        number = partNumber;
    };

    std::string getNumber(){
        return number;
    }

    void setDescription(std::string partNumber){
        number = partNumber;
    };

    std::string getDescription(){
        return description;
    }

    int getQuantity() const {
        return quantity;
    }

    void setQuantity(int quantity) {
        Invoice::quantity = quantity;
    }

    int getPrice() const {
        return price;
    }

    void setPrice(int price) {
        Invoice::price = price;
    }

    int getInvoiceAmount(){

        if(quantity>0 && price>0){
            return quantity * price;
        }
        else{
            return 0;
        }
    }

private:

    int quantity{0};
    int price{0};

    std::string number, description;

};

int main() {

    std::string partNumber;
    std::string partDescription;
    int partPrice, partQuantity;

    cout << "Enter the part number: ";
    cin >> partNumber;

    cout << "Enter the description: ";
    cin >> partDescription;

    cout << "Enter the price of the part: ";
    cin >> partPrice;

    cout << "Enter the quantity of parts: ";
    cin >> partQuantity;

    Invoice invoice{partNumber, partDescription, partPrice, partQuantity};

    cout << "Part ID: " << invoice.getNumber() << "\nPart description: " << invoice.getDescription() << "\nPart price: " << invoice.getPrice() << "\nQuantity: " << invoice.getQuantity() << std::endl;
    cout << "Your total is: " << invoice.getInvoiceAmount() << std::endl;

}

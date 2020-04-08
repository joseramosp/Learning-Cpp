//
// Created by Jose Ramos on 4/7/20.
//

#include "Person.cpp"

using namespace std;

class Package{

public:
    Package(const Person &sender, const Person &recipient, double weight, double costPerOunces): sender(sender), recipient(recipient), weight(weight), costPerOunces(costPerOunces) {}
    double calculateCost(){
        return weight * costPerOunces;
    }

    double getWeight() const {
        return weight;
    }

private:
    Person sender;
    Person recipient;
    double weight;
    double costPerOunces;

};
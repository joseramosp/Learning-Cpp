//
// Created by Jose Ramos on 4/7/20.
//

#include "Package.cpp"

class TwoDayPackage : public Package{
public:
    TwoDayPackage(const Person &sender, const Person &recipient, double weight, double costPerOunces, double flatFee)
            : Package(sender, recipient, weight, costPerOunces), flatFee(flatFee) {}
    double calculateCost(){
        return Package::calculateCost() + flatFee;
    }
private:
    double flatFee;
};
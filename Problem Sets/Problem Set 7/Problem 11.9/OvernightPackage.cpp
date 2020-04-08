//
// Created by Jose Ramos on 4/7/20.
//

#include "TwoDayPackage.cpp"

class OvernightPackage : public Package{
public:
    OvernightPackage(const Person &sender, const Person &recipient, double weight, double costPerOunces, double overnightFeePerOunces)
            : Package(sender, recipient, weight, costPerOunces), overnightFeePerOunces(overnightFeePerOunces) {}

    double calculateCost(){
        return Package::calculateCost() + (overnightFeePerOunces * Package::getWeight());
    }

private:
    double overnightFeePerOunces;
};
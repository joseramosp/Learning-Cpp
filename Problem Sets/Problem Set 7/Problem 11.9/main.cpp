//
// Created by Jose Ramos on 3/25/20.
//

// 11.9 (Package Inheritance Hierarchy) Package-delivery
// services, such as FedEx®, DHL® and UPS®, offer a number of different shipping options, each with specific costs associated.
// Create an inheritance hierarchy to represent various types of packages. Use class Package as the base class of the
// hierarchy, then include classes TwoDayPackage and OvernightPackage that derive from Package .
// Base-class Package should include data members representing
// the name, address, city, state and ZIP code for both the sender and the recipient of the package, in addition to data members that store the weight (in ounces) and cost per ounce to ship the package. Package ’s constructor should initialize these data
// members. Ensure that the weight and cost per ounce contain positive values. Package should provide a public member
// function calculateCost that returns a double indicating the cost
// associated with shipping the package. Package ’s calculateCost
// function should determine the cost by multiplying the weight by the cost per ounce.
// Derived-class TwoDayPackage should inherit the functionality of
// base-class Package , but also include a data member that represents a flat fee that the shipping company charges for
// two-day-delivery service. TwoDayPackage ’s constructor should
// receive a value to initialize this data member. TwoDayPackage
// should redefine member function calculateCost so that it
// computes the shipping cost by adding the flat fee to the weight- based cost calculated by base-class Package ’s calculateCost
// function.
// Class OvernightPackage should inherit directly from class
// Package and contain an additional data member representing
// an additional fee per ounce charged for overnight-delivery service. OvernightPackage should redefine member function
// calculateCost so that it adds the additional fee per ounce to the
// standard cost per ounce before calculating the shipping cost. Write a test program that creates objects of each type of
// Package and tests member function calculateCost .

#include <iostream>
#include "OvernightPackage.cpp"

using namespace std;

int main() {

    Package regularPackage = Package(Person("Jose","4 Real St.","Santo Domingo","MA","032343"),Person("Miguel","8 No-Real St.","Santo Domingo","MA","032343"), 30, 0.45);
    cout << "This is the cost of your regular shipping package: $" << regularPackage.calculateCost() << endl;

    TwoDayPackage twoDayPackage = TwoDayPackage(Person("Jose","4 Real St.","Santo Domingo","MA","032343"),Person("Miguel","8 No-Real St.","Santo Domingo","MA","032343"), 30, 0.45,15);
    cout << "This is the cost of your two days shipping package: $" << twoDayPackage.calculateCost() << endl;

    OvernightPackage overnightPackage = OvernightPackage(Person("Jose","4 Real St.","Santo Domingo","MA","032343"),Person("Miguel","8 No-Real St.","Santo Domingo","MA","032343"), 30, 0.45,1.5);
    cout << "This is the cost of your overnight shipping package: $" << overnightPackage.calculateCost() << endl;

    return 0;
}

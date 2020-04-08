//
// Created by Jose Ramos on 4/7/20.
//

#include <iostream>

using namespace std;

class Person{

public:

    Person(const string &name, const string &address, const string &city, const string &state, const string &zipCode)
            : name(name), address(address), city(city), state(state), zipCode(zipCode) {}

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Person::name = name;
    }

    const string &getAddress() const {
        return address;
    }

    void setAddress(const string &address) {
        Person::address = address;
    }

    const string &getCity() const {
        return city;
    }

    void setCity(const string &city) {
        Person::city = city;
    }

    const string &getState() const {
        return state;
    }

    void setState(const string &state) {
        Person::state = state;
    }

    const string &getZipCode() const {
        return zipCode;
    }

    void setZipCode(const string &zipCode) {
        Person::zipCode = zipCode;
    }

private:
    string name;
    string address;
    string city;
    string state;
    string zipCode;
};
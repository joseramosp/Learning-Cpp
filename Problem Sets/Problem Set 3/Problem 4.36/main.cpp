//
// Created by Jose Ramos on 2/9/20.
//

// 3.11 (Employee Class) Create a class called Employee that includes three pieces of information as data members—a first
// name (type string ), a last name (type string ) and a monthly
// salary (type int). Your class should have a constructor that
// initializes the three data members. Provide a set and a get function for each data member. If the monthly salary is not positive, set it to 0 . Write a test program that demonstrates
// class Employee ’s capabilities. Create two Employee objects and display each object’s yearly salary. Then give each Employee a 10 percent raise and display each Employee ’s yearly salary again.

#include <iostream>
#include <string>

using namespace std;

class Employee{

public:

    Employee(std::string fName, std::string lName, int monthlySalary) : firstName{fName}, lastName{lName}, salary{monthlySalary} {};

    const string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        Employee::firstName = firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        Employee::lastName = lastName;
    }

    int getSalary() const {
        return salary;
    }

    void setSalary(int salary) {
        if(salary > 0)
        {
            Employee::salary = salary;
        }
    }

    int getYearlySalary(){
        return salary*12;
    }

    void giveASalaryRaise(){
        salary = salary + (salary/10);
    }

private:

    std::string firstName, lastName;
    int salary{0};

};

int main() {

    Employee employee1("Jose", "Ramos", 15000);
    Employee employee2("Flamp", "Lopez", 17500);

    cout << employee1.getFirstName() << " yearly salary is " << employee1.getYearlySalary() << std::endl;
    cout << employee2.getFirstName() << " yearly salary is " << employee2.getYearlySalary() << std::endl;

    employee1.giveASalaryRaise();
    employee2.giveASalaryRaise();

    cout << employee1.getFirstName() << " yearly salary is " << employee1.getYearlySalary() << std::endl;
    cout << employee2.getFirstName() << " yearly salary is " << employee2.getYearlySalary() << std::endl;
}
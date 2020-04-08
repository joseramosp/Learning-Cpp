//
// Created by Jose Ramos on 3/25/20.
//

// 10.10 (RationalNumber Class) Create a RationalNumber (fractions) class like the one in Exercise 9.6.
// Provide the following capabilities:
// A. Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies fractions that are not in
// reduced form and avoids negative denominators.
// B. Overload the addition, subtraction, multiplication and division operators for this class.
// C. Overload the relational and equality operators for this class.

#include <iostream>
#include <cstdlib>
#include <array>
#include "Rational.cpp"

using namespace std;

//Rational Rational::operator+(const Rational &a){
//
//}

int main() {

    Rational a = Rational(84,8);
    Rational b = Rational(26,8);
    Rational c = Rational(26,0);
    Rational d = Rational(54,4);

    Rational result = Rational();

    result.add(a,b);


    cout <<  "a = " << a.toRationalString() << endl;
    cout <<  "b = " << b.toRationalString() << endl;
    cout <<  "c = " << c.toRationalString() << endl;
    cout <<  "d = " << d.toRationalString() << endl;
    cout <<  "a+b = " << result.toRationalString() << endl;

    result = a + d;
    cout <<  "a+d = " << result.toRationalString() << endl;

    return 0;
}
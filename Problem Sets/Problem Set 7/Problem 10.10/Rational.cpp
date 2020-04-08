//
// Created by Jose Ramos on 4/7/20.
//

#include <iostream>
#include <cstdlib>

using namespace std;

class Rational {

public:
    Rational()= default;
    Rational(int numerator, int denominator) {
        if (denominator < 1) {
            cout << "The denominator can not be 0 or a negative number." << endl;
        }
        else {
            this->numerator = numerator;
            this->denominator = denominator;
            simplify();
        }
    }
    void add(Rational number1, Rational number2){
        numerator = (number1.numerator * number2.denominator) + (number2.numerator * number1.denominator);
        denominator = number1.denominator * number2.denominator;
        simplify();
    }
    void subtract(Rational number1, Rational number2){
        numerator = (number1.numerator * number2.denominator) - (number2.numerator * number1.denominator);
        denominator = number1.denominator * number2.denominator;
        simplify();
    }
    void multiply(Rational number1, Rational number2){
        numerator = number1.numerator * number2.numerator;
        denominator = number1.denominator * number2.denominator;
        simplify();
    }
    void divide(Rational number1, Rational number2){
        numerator = number1.numerator * number2.denominator;
        denominator = number1.denominator * number2.numerator;
        simplify();
    }
    string toRationalString(){
        return to_string(numerator) + "/" + to_string(denominator);
    }
    double toDouble(){
        return double(numerator) / denominator;
    }

    Rational operator+(const Rational &number2){
        Rational sum;
        sum.numerator = (numerator * number2.denominator) + (number2.numerator * denominator);
        sum.denominator = denominator * number2.denominator;
        sum.simplify();
        return sum;
    }
    Rational operator-(const Rational &a){

    }
    Rational operator*(const Rational &a){

    }
    Rational operator/(const Rational &a){

    }

private:

    int numerator = 0;
    int denominator = 1;
    void simplify(){
        int gcd = 1;
        int largerNumber = (numerator > denominator) ? numerator : denominator;

        for(int i = 2; i <= largerNumber; i++){
            if(numerator % i == 0 && denominator % i == 0){
                gcd = i;
            }
        }

        numerator /= gcd;
        denominator /= gcd;
    }

};
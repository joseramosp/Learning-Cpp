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

using namespace std;

//int main() {
//    std::cout << "Hello, World!" << std::endl;
//
//
//    return 0;
//}

class Rational
{
    public:
        Rational( int = 0, int = 1 );
        Rational addition( const Rational & ) const;
        Rational subtraction( const Rational & ) const;
        Rational multiplication( const Rational & ) const;
        Rational division( const Rational & ) const;
        void printRational () const;

    private:
        int numerator;
        int denominator;
        void reduce();



};

int main()
{
    char s1;
    int s2, s3, s4, s5;

    Rational x;
    while(cin >> s1 >> s2 >> s3 >> s4 >> s5)
    {
        if(cin.eof())
        {
            break;
        }
        Rational c(s2, s3), d(s4, s5);
        if(s1 == '+')
        {
            x = c.addition( d );
            x.printRational();
            cout << ' ';
        }
        else if(s1 == '-')
        {
            x = c.subtraction( d );
            x.printRational();
            cout << ' ';
        }
        else if(s1 == '*')
        {
            x = c.multiplication( d );
            x.printRational();
            cout << ' ';
        }
        else if(s1 == '/')
        {
            x = c.division( d );
            x.printRational();
            cout << ' ';
        }
    }
}

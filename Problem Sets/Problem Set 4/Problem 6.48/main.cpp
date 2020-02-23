//
// Created by Jose Ramos on 2/20/20.
//

// 6.48 (Circle Area) Write a C++ program that prompts the user
// for the radius of a circle, then calls inline function circleArea to calculate the area of that circle.

#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

inline double circleArea(float radius){

    return (pow(radius,2) * M_PI);
}

int main(){

    double radius{0};
    double area{0};

    cout << "Please enter the radius of the circle:" << endl;
    cin >> radius;

    area = circleArea(radius);

    cout << "The are of a circle with a radius " << radius << " is " << area << endl;


    return 0;
}

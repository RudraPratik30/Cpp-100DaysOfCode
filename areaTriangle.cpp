// find area of triangle

#include<iostream>
#include<cmath>
using namespace std;

int main () {

    float b, h, a;

    cout<<"Enter the base of the triangle";
    cin>>b;
    cout<<"Enter the height of the triangle";
    cin>>h;

    a = float(((b * h)/2));

    cout<<"Area of triangle ="<< a;

    return 0;
}
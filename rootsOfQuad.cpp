#include<iostream>
#include<cmath>
using namespace std;

int main () {

    float a, b, c, p, q;

    cout<<"If equation is ax2 + bx + c = 0, enter the value of:";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"c = ";
    cin>>c;

    p = float(((-1 * b) + sqrt(b*b - (4*a*c)))/(2*a));
    q = float(((-1 * b) - sqrt(b*b - (4*a*c)))/(2*a));

    cout<<"Solutions of the equation are "<<p<<" and "<<q;

    return 0;
}
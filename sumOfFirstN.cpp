// find the sum of first N natural numbers

#include<iostream>
#include<cmath>
using namespace std;

int main () {

    int n, s;

    cout<<"Enter the value of N ";
    cin>>n;

    s = (n * (n + 1))/2;

    cout<<"Sum of first "<<n<<" natural numbers is "<<s;
    
    return 0;
}
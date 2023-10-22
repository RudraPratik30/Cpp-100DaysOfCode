// Take input and print a welcome msg with users name

#include<iostream>
using namespace std;

int main () {
    string name;

    cout<<"Hey! What is your name?";
    // cin>>name;
    // cin takes only one word as input so it might be problematic when user have more than one word in his/her name
    getline(cin, name);
    // we can use getline which takes the whole line as input
    cout<<"Welcome Mr./Ms."<<name;

    return 0;
}
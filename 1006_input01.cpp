#include <iostream>
#include <string>
using namespace std;

int main()
{
    // declare variable
    int Number;

    cout << "Enter an integer: ";

    //store entered number
    cin >> Number;

    // declare a variable to store string
    string Name;

    // read name
    cout << "Enter your name: ";
    cin >> Name;

    // print Number
    cout << Name << " entered " << Number << endl;

    return 0;
}
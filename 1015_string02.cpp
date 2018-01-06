/*
std::string
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string hello("Hello");
    cout << "What is your name?" << endl;
    string name;
    getline(cin, name);
    cout << hello << " " << name << endl;
    cout << name.length() << endl;
 
    return 0;
}
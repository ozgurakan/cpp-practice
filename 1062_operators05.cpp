/*
equality operator
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;

    Human(string inName): name(inName) {}

    bool operator == (const Human& inHuman)
    {
        if (name.compare(inHuman.name) == 0)
            return true;
        else
            return false;        
    }

    bool operator != (const Human& inHuman)
    {
        return !(this->operator==(inHuman));
    }
};

class Animal
{
public:
    string name;

    Animal(string inName): name(inName) {}
};

int main(void) 
{
    Human joe("joe");
    Human marry("joe");

    if (joe == marry)
        cout << "Same names" << endl;
    else
        cout << "Different names" << endl;

    Animal a1("joe");
    Animal a2("joe");

    if (a1 == a2) // error: invalid operands to binary expression
        cout << "Same names" << endl;
    else
        cout << "Different names" << endl;



    return 0;
}
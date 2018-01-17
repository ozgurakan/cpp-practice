/*
Constructors with Initialization Lists
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string givenName = "Joe", int givenAge = 0)
    :name(givenName), age(givenAge)
    {
        cout << name << " : " << age << endl;
    }
};

int main(void)
{
    Human joe;
    Human marry("Marry", 11);
    Human* jack = new Human("Jack", 12);
    delete jack;

    return 0;
}
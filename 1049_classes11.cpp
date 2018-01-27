/*
size of an object
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
    string name;
    string lastName;
    int age;
public:
    void SetAge(int givenAge)
    {
        age = givenAge;
    }
    
    void SetName(string givenName)
    {
        name = givenName;
    }

    void SetLastname(string givenLastname)
    {
        lastName = givenLastname;
    }
};

class SuperHuman: public Human
{
    string nickName;
public:
    SuperHuman(string gName, string gLastName, int gAge)
    {
        SetName(gName);
        SetLastname(gLastName);
        SetAge(gAge);
    }

    void SetNickName(string name)
    {
        nickName = name;
    }
};

int main(void)
{
    Human* h1 = new Human();
    cout << "h1: " << sizeof(h1) << endl;
    h1->SetName("Jill");
    cout << "h1: " << sizeof(h1) << endl;
    h1->SetLastname("Blue");
    cout << "h1: " << sizeof(h1) << endl;

    SuperHuman* h2 = new SuperHuman("Dan", "Latte", 12);
    cout << "h2: " << sizeof(h2) << endl;

    return 0;
}
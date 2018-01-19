/*
class example
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
        cout << "Created " << name << " who is ";
        cout << age << " years old." << endl;
    }

    ~Human();
    void SetName(string);
    void SetAge(int);
};

int main(void)
{
    // automaticall cleaned
    Human joe("Joe", 13);

    // manually, you need to clean
    Human* mary = new Human("Mary", 11);
    mary->SetName("Maria");
    mary->SetAge(22);
    delete mary;

    return 0;    
}


Human::~Human()
{
    cout << "Deleting " << name << "." << endl;
}

void Human::SetName(string givenName)
{
    cout << name << " has changed her name to ";
    cout << givenName << endl;
    name = givenName;
}

void Human::SetAge(int givenAge)
{    
    age = givenAge;
    cout << name << "'s age is now " << age << endl;
}
/*
destructor
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    int age;
    string name;

public:
    Human(int givenAge = 18, string givenName = "Name")
    :age(givenAge), name(givenName)
    {
        cout << name << " : " << age << endl;
    }
    ~Human()
    {
        cout << name << " deleted" << endl;
    }
};

int main(void)
{
    Human joe(11, "Joe");
    
    return 0;
}
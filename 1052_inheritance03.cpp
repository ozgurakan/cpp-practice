/*
overriding base class methods
invoking base class methods
*/
#include <iostream>
#include <string>
using namespace std;

class Thing
{
public:
    string name;

    Thing(string gName): name(gName)
    {
        cout << "Set name of Thing to: " << name << endl;
    }

    void Identify()
    {
        cout << "This thing is called: " << name << endl;
    }
};

class Pencil: public Thing
{
public:
    Pencil(string gName): Thing(gName) {}
    
    void Identify()
    {
        cout << "This pencil is called: " << name << endl;
    }    
};

int main(void)
{
    Thing something("book");
    something.Identify();
    Pencil redPencil("red");
    redPencil.Identify();
    redPencil.Thing::Identify();

    return 0;
}
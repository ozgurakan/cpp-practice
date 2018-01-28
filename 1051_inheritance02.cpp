/*
base class constructor
*/
#include <iostream>
#include <string>
using namespace std;

class Bird 
{
protected:
    string name;
    string eats;
public:
    Bird(string gName): name(gName) {}
        
    string GetName()
    {
        return name;
    }
    
    void Eats(string gEats)
    {
        eats = gEats;
    }

    string GetEats()
    {
        return eats;
    }
    
};

class Eagle: public Bird
{
public:
    Eagle(): Bird("Eagle") {}
};

int main(void)
{
    Eagle eagle;
    eagle.Eats("mice");
    cout << eagle.GetName() << " eats " << eagle.GetEats() << endl;
    return 0;
}
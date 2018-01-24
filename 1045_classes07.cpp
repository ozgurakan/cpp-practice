/*
copy assignment operator
*/
#include <iostream>
#include <string>
using namespace std;

class OzOs
{
private:
    string name;
    int version;

public:
    OzOs(string givenName = "noname", int givenVersion = 0)
    :name(givenName), version(givenVersion)
    {
        cout << "Created " << name << " version " << version << " @ " << this << endl;
    }

    OzOs(const OzOs& newOs)
    {
        cout << "Duplicating " << newOs.name << endl;
        name = newOs.name;
        version = newOs.version;
    }

    OzOs& operator= (const OzOs& newOs)
    {
        cout << "Assigning " << newOs.name << endl;
        if (this != &newOs)
        {
            name = newOs.name;
            if (version != newOs.version)
                version = newOs.version+1000;
        }
        return *this;
    }

    ~OzOs();

    const string getName()
    {
        return name;
    }
};

OzOs::~OzOs()
{
    cout << "Destructing " << name << " version " << version << " @ " << this << endl;
}

void testFunc(OzOs newOs)
{
    cout << "In testFunc which passes " << newOs.getName() << " by value" << endl;
    cout << "&newObject: " << &newOs << endl;
}

int main(void)
{
    OzOs first("first", 1);
    OzOs* second = new OzOs("second", 2);    

    OzOs third("third", 3);
    cout << "third.getName() = " << third.getName() << endl;
    testFunc(third);

    first = third;
    cout << "first.getName() = " << first.getName() << endl;

    delete second;   

    return 0;
}
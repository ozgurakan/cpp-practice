/*
singleton classes
*/
#include <iostream>
#include <string>
using namespace std;

class One
{
private:    
    One() {};
    One(const One&);
    const One& operator= (const One&);

    string name;

public:
    static One& GetInstance()
    {
        static One justOne;
        return justOne;
    }

    string GetName()
    {
        return name;
    }

    void SetName(string givenName)
    {
        name = givenName;
    }

};

int main(void)
{
    One& person = One::GetInstance();
    person.SetName("Jack");

    cout << "Name: " << person.GetName() <<  " @ " << &person << endl;

    cout << "Create another instance " << endl;
    One& secondPerson = One::GetInstance();
    cout << "New person: " << secondPerson.GetName() << " @ " << &secondPerson << endl;

    return 0;
}
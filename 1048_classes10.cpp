/*
A constructor with a single non-default parameter (until C++11) that is declared 
without the function specifier explicit is called a converting constructor. Both 
constructors (other than copy/move) and user-defined conversion functions may be 
function templates; the meaning of explicit doesn't change.
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
    int age;
public:
    explicit Human(int givenAge) : age(givenAge) {}
    int GetAge()
    {
        return age;
    }
};

int main(void)
{
    Human* h1 = new Human(1);
    cout << "h1: " << h1->GetAge() << endl;
    
    Human h2(2);
    cout << "h2: " << h2.GetAge() << endl;

    Human h3 = Human(3);
    cout << "h3: " << h3.GetAge() << endl;

    Human h4(4);
    cout << "h4: " << h4.GetAge() << endl;

    Human h5 = 5;
    cout << "h5: " << h5.GetAge() << endl;

    return 0;
}
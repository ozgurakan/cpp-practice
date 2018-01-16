/*
classes
private public constructor
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    string species;
    int age;

public:
    void SetAge(int inputAge)
    {
        age = inputAge;
    }

    int GetAge()
    {
        return age;
    }
};

int main(void)
{
    using namespace std;
    
    Animal* person = new Animal();
    person->SetAge(11);
    cout << "Age: " << person->GetAge() << endl;

    delete person;

    return 0;
}
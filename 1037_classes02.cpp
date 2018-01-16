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
    Animal()
    {
        age = 0;
        species = "Human";
    }

    void SetAge(int inputAge)
    {
        age = inputAge;
    }

    int GetAge()
    {
        return age;
    }

    void SetSpecies(string);

    string GetSpecies()
    {
        return species;
    }
};

void Animal::SetSpecies(string name)
{
    if (name != species)
        cout << "Converting " << species << " to " << name << endl;
    species = name;
}

int main(void)
{
    using namespace std;
    
    Animal* person = new Animal();
    person->SetAge(11);
    //person->age = 12; // wouldn't work
    cout << "Age: " << person->GetAge() << endl;
    cout << "Species: " << person->GetSpecies() << endl;
    person->SetSpecies("Donkey");
    cout << "Species: " << person->GetSpecies() << endl;

    delete person;

    return 0;
}
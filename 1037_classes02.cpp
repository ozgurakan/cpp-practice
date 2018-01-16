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

    Animal(int inputAge)
    {
        age = inputAge;
    }

    Animal(int inputAge, string name)
    {
        age = inputAge;
        species = name;
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

    Animal* animal = new Animal(33, "Animal");
    cout << animal->GetSpecies() << " age: " << animal->GetAge() << endl;

    return 0;
}
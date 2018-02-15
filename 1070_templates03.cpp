/*
template classes
holding a class
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
    bool is_alive;
    bool is_male;

protected:    
    string type;

public:
    Animal(bool in_is_male = true)
    : is_male(in_is_male) { 
        is_alive = true;
        type = "animal";
    }
    
    const bool IsAlive() {
        return is_alive;
    }

    const bool IsMale() {
        return is_male;
    }

    void Died() {
        is_alive = false;
    }

    const string GetType() {
        return type;
    }

    string GetStatus() {
        if (is_alive)
            return "alive";
        else
            return "dead";
    }

    virtual const string GetName() = 0;

    virtual ~Animal() {}
};

class Monkey: public Animal
{
private:
    string name;

public:
    Monkey(bool in_is_male, string in_name = "monkey")
    : Animal(in_is_male), name(in_name) {
        type = "monkey";
    }

    const string GetName() {
        return name;
    }

    ~Monkey() {}
};

class Human: public Animal
{
private:
    string name;

public:
    Human(bool in_is_male, string in_name)
    : Animal(in_is_male), name(in_name) {
        type = "human";
    }

    void SetName(string in_name) {
        name = in_name;
    }

    const string GetName() {
        return name;
    }

    ~Human() {}
};

void GetInfo(Animal* animal) {
    string sex;
    if (animal->IsMale())
        sex = "male";
    else
        sex = "female";
    Monkey* monkey = dynamic_cast<Monkey*>(animal);
    if (monkey)
        cout << monkey->GetType() << ":" << monkey->GetName() << " is " << monkey->GetStatus() << endl;
    
    Human* human = dynamic_cast<Human*>(animal);
    if (human)
        cout << human->GetType() << ":" << human->GetName() << " is " << sex << " and " << human->GetStatus() << endl;
}

template <class T>
class Parents
{
private:
    T* male;
    T* female;
public:
    Parents(T* in_parent1, T* in_parent2) { 
        if (in_parent1->IsMale() != in_parent2->IsMale()) {
            if (in_parent1->IsMale()) {
                male = in_parent1;
                female = in_parent2;
            } else {
                female = in_parent1;
                male = in_parent2;
            }                
        } else
            throw invalid_argument("need opposite sexes to have a baby");
    }

    T* GetMale() {
        return male;
    }

    T* GetFemale() {
        return female;
    }

    T* CreateBoy(string name) {
        T* child = new T(false, name);
        return child;
    }

    T* CreateChild(string name);

    ~Parents() {}

};

template <class T>
T* Parents<T>::CreateChild(string name)
{
    srand(time(NULL));
    int index = rand() % 2;
    bool sex[] = {true, false};
    return new T(sex[index], name);
}

int main(void)
{
    Monkey* monkey = new Monkey("joe");
    GetInfo(monkey);
    monkey->Died();
    GetInfo(monkey);

    Human* man = new Human(true, "Jack");
    Human* woman = new Human(false, "Julie");
    GetInfo(man);
    GetInfo(woman);
    
    Parents<Human> parents(man, woman);
    // or alternatively
    //Parents<Human> parents = Parents<Human>(man, woman);
    Human* child = parents.CreateBoy("Baby");
    GetInfo(child);

    Parents<Human>* parents2 = new Parents<Human>(man, woman);
    Human* child2 = parents2->CreateChild("Baby2");
    child2->SetName("Sea");
    GetInfo(child2);

    return 0;
}
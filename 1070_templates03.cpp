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

protected:    
    string type;

public:
    Animal(bool in_is_alive = true) : is_alive(in_is_alive) { 
        type = "animal";
    }
    
    bool IsAlive() {
        return is_alive;
    }

    void Died() {
        is_alive = false;
    }

    string GetType() {
        return type;
    }

    string GetStatus() {
        if (is_alive)
            return "alive";
        else
            return "dead";
    }

    virtual string GetName() = 0;

    virtual ~Animal() {}
};

class Monkey: public Animal
{
private:
    string name;

public:
    Monkey(string in_name = "monkey") : Animal(true), name(in_name) {
        type = "monkey";
    }

    string GetName() {
        return name;
    }

    ~Monkey() {}
};

class Human: public Animal
{
private:
    string name;

public:
    Human(string in_name): Animal(), name(in_name) {
        type = "human";
    }

    string GetName() {
        return name;
    }

    ~Human() {}
};

void GetInfo(Animal* animal) {
    Monkey* monkey = dynamic_cast<Monkey*>(animal);
    if (monkey)
        cout << monkey->GetType() << ":" << monkey->GetName() << " is " << monkey->GetStatus() << endl;
    
    Human* human = dynamic_cast<Human*>(animal);
    if (human)
        cout << human->GetType() << ":" << human->GetName() << " is " << human->GetStatus() << endl;
}

template <class T>
class Parents
{
private:
    T* male;
    T* female;
public:
    Parents(T* in_male, T* in_female): male(in_male), female(in_female) { }

    T* GetMale() {
        return male;
    }

    T* GetFemale() {
        return female;
    }

    T* CreateChild(string name) {
        T* child = new T(name);
        return child;
    }

    T* CreateChildv2(string name);

    ~Parents() {}

};

template <class T>
T* Parents<T>::CreateChildv2(string name)
{
    return new T(name);
}

int main(void)
{
    Monkey* monkey = new Monkey("joe");
    GetInfo(monkey);
    monkey->Died();
    GetInfo(monkey);

    Human* man = new Human("Jack");
    Human* woman = new Human("Julie");
    GetInfo(man);
    GetInfo(woman);
    
    Parents<Human> parents(man, woman);
    // or alternatively
    //Parents<Human> parents = Parents<Human>(man, woman);
    Human* child = parents.CreateChild("Baby");
    GetInfo(child);

    Parents<Human>* parents2 = new Parents<Human>(man, woman);
    Human* child2 = parents2->CreateChildv2("Baby2");
    GetInfo(child2);


    //TODO: set male, female objects static
    return 0;
}
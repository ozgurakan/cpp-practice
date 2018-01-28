/*
class inheritance
*/
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    bool canFly;
    string name;

public:
    void Move()
    {
        if (canFly)
            cout << name << " flies" << endl;
        else
            cout << name << " walks" << endl;
    }
};

class Cat: public Animal
{
public:
    Cat()
    {
        name = "Cat";
        canFly = false;
    }
};

class Bird: public Animal
{
public:
    Bird()
    {
        name = "Bird";
        canFly = true;
    }
};

int main(void)
{

    Cat cat;
    cat.Move();

    Bird bird;
    bird.Move();

    return 0;
}
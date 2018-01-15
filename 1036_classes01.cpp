/*
classes
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;
    int age;

    void Hello()
    {
        cout << "I am " + name << ", I am ";
        cout << age << " years old." << endl;
    }
};

int main(void)
{
    Human human;
    human.age = 22;
    human.name = "Superman";
    human.Hello();

    Human* human2 = new Human();
    human2->age = 11;
    human2->name = "AI";
    human2->Hello();
    (*human2).Hello();
    delete human2;

    return 0;
}
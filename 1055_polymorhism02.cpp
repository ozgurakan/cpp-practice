/*
virtual desctructors

Always declare the base class destructor as virtual:

*/
#include <iostream>
#include <string>
using namespace std;

class Object {
public:
    string name;

    Object(string gName = "Object"): name(gName) { }

    virtual void Identify() {
        cout << "This is: " << name << ", made of Object" << endl;
    }

    virtual ~Object() {
        cout << "Object::Desctructing: " << name << endl;
    }
};

class Pencil: public Object {
public:
    Pencil(string gName = "Pencil"): Object(gName) { }

    void Identify() {
        cout << "This is: " << name << ", made of Pencil" << endl;
    }

    ~Pencil() {
        cout << "Pencil::Desctructing: " << name << endl;
    }    
};

void Identify(Object& object) {
    object.Identify();
}

void DeleteObject(Object* object) {
    delete object;
}

int main(void) {
    Object object1("Object1");
    Identify(object1);

    Pencil* pencil = new Pencil("Pencil1");
    Identify(*pencil);
    delete pencil;

    Pencil* pencil2 = new Pencil("Pencil2");
    Identify(*pencil2);
    DeleteObject(pencil2);


    return 0;
}
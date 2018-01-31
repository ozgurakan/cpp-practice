/*
abstract classes

pure virtual method
*/
#include <iostream>
#include <string>
using namespace std;

class Object {
public:
    string name, type;

    Object() {
        type = "object";
        cout << "in object constructor" << endl;
    }

    void SetName(string gName) {
        name = gName;
    }
    
    virtual void Does() = 0;

    void Identify() {
        cout << "This " << type << " is named: " << name << endl;
    };

    virtual ~Object(){
        cout << "in object destructor for " << name << endl;
    }

};

class Pencil: public Object {
public:
    Pencil() {
        type = "pencil";
        cout << "in pencil constructor" << endl;
    }

    void Does() {
        cout << "Pencil writes" << endl;
    }

    ~Pencil() {
        cout << "in pencil destructor for " << name << endl;
    }
};

class Paper: public Object {
public:
    Paper() {
        type = "paper";
        cout << "in paper constructor" << endl;
    }

    void Does() {
        cout << "Paper is white." << endl;
    }

    ~Paper() {
        cout << "in paper destructor for " << name << endl;
    }
};

int main(void) {
    Pencil pencil;
    pencil.SetName("pencil1");
    pencil.Identify();
    pencil.Does();

    Paper* paper = new Paper();
    paper->SetName("paper1");
    paper->Does();
    delete paper;
    
    return 0;
}

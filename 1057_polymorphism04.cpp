/*
override keyword

The compiler to checks whether
- The base class function is virtual.
- The signature of the base class virtual function exactly matches the signature of the derived class function declared to override.

final is used to prevent from further overriding
*/
#include <iostream>
#include <string>
using namespace std;

class Phone {
public:
    string model;

    virtual void GetType() = 0;
};

class CellPhone: public Phone {
public:
    virtual void GetType() {
        cout << "cell phone" << endl;
    }
};

class IPhone: public CellPhone {
public:
    void GetType() override final {
        cout << "iPhone" << endl;
    }
};

int main(void) {
    return 0;
}
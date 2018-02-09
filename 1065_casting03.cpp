/*
const_cast

In an ideal world, a display function should be read-only and should not be allowed to 
call non-const member functions—that is, should not be allowed to call a function that 
can change the state of the object. 
*/
#include <iostream>
#include <string>
using namespace std;

class Phone
{
private:
    string brand;

public:
    Phone(string in_brand): brand(in_brand) {
        cout << brand << " phone is created" << endl;
    }

    string GetBrand1() {
        return brand;
    }

    string GetBrand2() const {
        return brand;
    }


    virtual ~Phone() {}
};

class IPhone: public Phone
{
private:
    string model;
public:
    IPhone(string in_model): Phone("Apple"), model(in_model) {}

    string GetModel() {
        return model;
    }
};

class Android: public Phone
{
private:
    string model;
public:
    Android(string in_brand, string in_model): Phone(in_brand), model(in_model) { }

    string GetModel() {
        return model;
    }
};


void DisplayInfo1(const Phone* phone) {
    Phone* inPhone = const_cast<Phone*>(phone);
    cout << inPhone->GetBrand1() << endl;
}

void DisplayInfo2(const Phone* phone) {
    cout << phone->GetBrand2() << endl;
}

void DisplayInfo3(Phone* phone) {
    IPhone* iphone = dynamic_cast<IPhone*> (phone);
    if (iphone)
        cout << iphone->GetModel() << endl;

    Android* android = dynamic_cast<Android*> (phone);
    if (android)
        cout << android->GetModel() << endl;

}

int main(void)
{
    Phone* iphone = new Phone("Apple");
    Phone* android = new Phone("Samsung");

    DisplayInfo1(iphone);
    DisplayInfo2(iphone);

    Android* samsung = new Android("Samsung", "Galaxy");

    DisplayInfo3(samsung);

    return 0;
}
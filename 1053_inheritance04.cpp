/*
preventing inheritance with final
*/
#include <iostream>

class Base final
{
public:
    Base() {}
};

class Derived: public Base // error!!!
{
    Derived (): Base() {}
};


int main(void)
{
    Base base;
    Derived derived;
    return 0;
}

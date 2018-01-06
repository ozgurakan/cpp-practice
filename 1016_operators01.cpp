/*
operators
*/
#include <iostream>
using namespace std;

bool xorFunc(bool, bool);

int main()
{
    const int constNumber = 33;
    cout << "Const number: " << constNumber << endl;

    // wouldn't work as constNumber is const
    //cout << "My number: " << constNumber++ << endl;

    int number = 6;
    cout << "My number: " << number << endl;
    // prefix
    cout << "Number: " << number++ << endl;
    //postfix
    cout << "Number: " << ++number << endl;
    cout << constNumber << " / " << number << " = " << constNumber / number << endl;
    cout << constNumber << " % " << number << " = " << constNumber % number << endl;

    double dNumber = constNumber;
    cout << dNumber << " / " << number << " = " << dNumber / number << endl;

    cout << boolalpha << (true ^ true) << endl;
    cout << xorFunc(true, true) << endl;
    cout << xorFunc(true, false) << endl;
    cout << xorFunc(false, true) << endl;    
    cout << xorFunc(false, false) << endl;

    auto test = xorFunc(false, false);
    cout << "size : " << sizeof(test) << " byte(s)" << endl;

    // bitwise shift
    int beforeShift = 10;
    cout << beforeShift << " -> shift 1 bit -> " <<  (beforeShift << 1) << endl;

    return 0;
}

bool xorFunc(bool a, bool b)
{
    if (a ^ b) {
        return true;
    } else {
        return false;
    }
}
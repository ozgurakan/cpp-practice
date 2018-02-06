/*
binary operators
*/
#include <iostream>
using namespace std;

class Test {
private:
    int number;

public:
    Test(int inNumber): number(inNumber) {}

    Test operator + (Test second) {
        /*
        cout << "number: " << number << endl;
        cout << "second: " << second.GetNumber() << endl;
        cout << "added: " << number + second.GetNumber() << endl;
        */
        return Test(number + second.GetNumber());
    }

    int GetNumber() {
        return number;
    }

    operator const char* () { // fix this!, prints "??"
        cout << ""; // this line fixes "??"
        return to_string(this->GetNumber()).c_str();
    }

};

int main(void) {
    Test test1(11);
    Test test2(22);
    Test test3 = test1 + test2;
    cout << test3 << endl;
    cout << test3.GetNumber() << endl;
    return 0;
}
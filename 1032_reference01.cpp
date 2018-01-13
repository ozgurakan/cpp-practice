/*
reference example
*/
#include <iostream>
using namespace std;

int main(void)
{
    int num = 12;
    int& ref = num;
    int& ref2 = ref;

    cout << "num:  " << num << "  &num: " << &num << endl;
    cout << "ref:  " << ref << "  &ref: " << &ref << endl;
    num = 13;
    cout << "num:  " << num << "  &num: " << &num << endl;
    cout << "ref:  " << ref << "  &ref: " << &ref << endl;
    
    cout << "ref2: " << ref2 << " &ref2: " << &ref2 << endl;

    return 0;
}
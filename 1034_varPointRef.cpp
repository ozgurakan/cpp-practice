/*
variable, pointer and reference
*/
#include <iostream>
using namespace std;

int main(void)
{
    int number = 12;
    int* pointer = &number;
    int& ref = number;

    cout << "number  : " << number << endl;
    cout << "&number : " << &number << endl;    
    cout << "pointer : " << pointer << endl;
    cout << "&pointer: " << &pointer << endl;
    cout << "*pointer: " << *pointer << endl;
    cout << "&ref    : " << &ref << endl;
    cout << "ref     : " << ref << endl;

    cout << "pointer+1 : " << pointer+1 << endl;
    cout << "&ref+1    : " << &ref+1 << endl;

    return 0;
}
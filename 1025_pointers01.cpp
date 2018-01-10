/*
pointers and references
*/
#include <iostream>

int main()
{
    using namespace std;

    int* intPointer = NULL;
    double* doublePointer = NULL;
    cout << intPointer << endl;
    cout << sizeof(intPointer) << " " << sizeof(doublePointer) << endl;

    int number1 = 33;
    int number2 = 44;

    intPointer = &number1;
    cout << intPointer << " -> " << *intPointer << endl;
    
    intPointer = &number2;
    cout << intPointer << " -> " << *intPointer << endl;
    
    intPointer = &number1;
    *intPointer = 55;
    cout << &number1 << " -> " << number1 << endl;

    return 0;
}
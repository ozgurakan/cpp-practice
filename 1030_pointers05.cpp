/*
const keyword with pointers
*/
#include <iostream>
using namespace std;

int main(void)
{
    int number = 30;
    int age = 11;

    cout << "number : " << number << " age :" << age << endl;
    cout << "&number : " << &number << " &age :" << &age << endl;

    // The address contained in the pointer is constant and cannot be changed
    int* const pNum1 = &number;
    //pNum1 = &age; // error
    *pNum1 = 22;
    cout << "number : " << number << " pNum1 :" << pNum1 << endl;

    // Data pointed to is constant and cannot be changed
    const int* pNum2 = &number;
    pNum2 = &age;
    //*pNum2 = 22;
    cout << "number : " << number << " pNum2 :" << pNum2 << endl;

    // Both the address contained in the pointer and the value 
    // being pointed to are constant and cannot be changed
    const int* const pNum3 = &number;
    //pNum3 = &age; // error
    //*pNum3 = 22;
    cout << "number : " << number << " pNum3 :" << pNum3 << endl;

    return 0;
}
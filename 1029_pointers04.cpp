/*
Array is a pointers?
An array is a pointer to the first element in it!
*/
#include <iostream>
using namespace std;

int main(void)
{
    int numbers[5] = {1,22,333,4444,55555};
    int* pNumbers = numbers;

    cout << "numbers     : " << numbers << endl;
    cout << "&numbers[0] : " << &numbers[0] << endl;
    cout << "pNumbers    : " << pNumbers << endl;

    cout << "pNumbers++" << endl;
    cout << "pNumbers+1       : " << pNumbers+1 << endl;
    cout << "*(pNumbers+1)    : " << *(pNumbers+1) << endl;
    cout << "pNumbers[1]      : " << pNumbers[1] << endl;
    cout << "numbers[1]       : " << numbers[1] << endl;

    
    return 0;
}
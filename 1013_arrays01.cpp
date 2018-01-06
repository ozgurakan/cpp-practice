/*
arrays
static arrays with fixed number of elements
these use fixed amount of memory
*/
#include <iostream>
using namespace std;

int main()
{
    // array with 5 integers all assigned 0
    int myArray1[5] = {0};

    // array with 5 integers all assigned 0
    int myArray2[5] = {};

    // array with 4 integers
    int myArray3[] = {1, 22, 333, 4444};

    // first and second elements assigned
    int myArray4[5] = {1,22};
    cout << "1st element: " << myArray4[1] << endl;
    cout << "3rd element: " << myArray4[2] << endl;
    
    myArray4[2] = 333;
    cout << "3rd element: " << myArray4[2] << endl;

    int myArray5[5];
    // elements have junk values
    cout << "Unassinged element in the array has value: " << myArray5[0] << endl;
    cout << "Unassinged element in the array has value: " << myArray5[1] << endl;
    cout << "Unassinged element in the array has value: " << myArray5[2] << endl;
    cout << "Unassinged element in the array has value: " << myArray5[3] << endl;
    cout << "Unassinged element in the array has value: " << myArray5[4] << endl;

    // multidimensional array
    int multiDimensional[2][3] = {{1,2,3}, {4,5,6}};
    cout << multiDimensional[0][1] << endl;
}
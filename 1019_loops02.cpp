/*
for loop
range based for loop is new in C++11
g++ 1019_loops02.cpp -std=c++11;./a.out
*/
#include <iostream>
using namespace std;

int main()
{

    for (int i = 0; i < 3; i++)
    {
        cout << "Loop #" << i << endl;
    }

    int myArray[] = {1, 22, 333, 4444, 5555};

    cout << "for with three expressions" << endl;
    // find size of the array
    // sizeof(myArray)/sizeof(myArray[0])
    for (int i = 0; i < sizeof(myArray)/sizeof(myArray[0]); i++)
    {
        cout << myArray[i] << endl;
    }

    cout << "for with two expressions" << endl;
    for (int i = 0; i < 3;)
    {
        cout << ++i << endl;
    }

    cout << "for with two variables" << endl;
    for (int i = 0, j = 6; i != j; i++, j--)
    {
        cout << "i: " << i << " j: " << j << endl;
    }

    cout << "range based for loop" << endl;
    int numbers[] = {1, 22, 333, 4444, 55555};
    for (int i: numbers)
    {
        cout << i << endl;
    }

    return 0;
}
/*
function overloading
*/
#include <iostream>
using namespace std;

int Calculate(int);
int Calculate(int, int);
int Calculate(int[], int);

int main() {
    cout << Calculate(2) << endl;
    cout << Calculate(2,3) << endl;
    int numbers[] = {2, 3, 4, 5};
    cout << Calculate(numbers, sizeof(numbers)/sizeof(numbers[0])) << endl;
    return 0;
}

int Calculate(int a)
{
    return a * a;
}

int Calculate(int a, int b)
{
    return a * b;
}

int Calculate(int numbers[], int size)
{
    int result = 1;
    // sizeof(numbers) don't work here
    // as numbers is just a pointer to numbers[]
    // so its size is 1 byte
    // instead, passed size as a parameter
    for (int i = 0; i < size; ++i)
    {
        result = result * numbers[i];
    }
    return result;
}
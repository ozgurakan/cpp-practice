/*
function overloading
*/
#include <iostream>
using namespace std;

int Calculate(int);
int Calculate(int, int);
int Calculate(int[], int);
void CalculateRef(int, int&);

int main() {
    cout << Calculate(2) << endl;
    cout << Calculate(2,3) << endl;
    int numbers[] = {2, 3, 4, 5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    cout << "numbers[0] before function call: " << numbers[0] << endl;
    cout << "size before function call: " << size << endl;
    cout << Calculate(numbers, size) << endl;
    cout << "numbers[0] after function call: " << numbers[0] << endl;
    cout << "size after function call: " << size << endl;

    int result = 0;
    CalculateRef(5, result);
    cout << "using reference: " << result << endl;
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

// passing argument by reference
void CalculateRef(int a, int& result)
{
    result = a * a;
}

int Calculate(int numbers[], int size)
{
    int result = 1;
    // sizeof(numbers) don't work here
    // as numbers is just a pointer to numbers[]
    // so its size is 1 byte
    // instead, passed size as a parameter
    // size passes by value
    for (int i = 0; i < size; ++i)
    {
        result = result * numbers[i];
    }
    numbers[0] = -1;
    size = -1;
    return result;
}
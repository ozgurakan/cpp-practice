#include <iostream>
using namespace std;

// pascal casing used for functions
int AddTwo(int a, int b)
{
    return a + b;
}

int main()
{    
    cout << "Enter the first number : ";
    // declare variables when needed
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter the second number: ";
    // camel casing used for variabale names
    int secondNumber = 0;
    cin >> secondNumber;

    int addition = AddTwo(firstNumber, secondNumber);

    cout << firstNumber << " + " << secondNumber << " = " << addition << endl;

    return 0;
}
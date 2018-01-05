// global variables
#include <iostream>
using namespace std;

/* 
globally defined variables
accessible everywhere
*/

int firstNumber = 0;
int secondNumber = 0;
int addition = 0;

int AddTwo()
{
    return firstNumber + secondNumber;
}

int main()
{    
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    addition = AddTwo();
    cout << firstNumber << " + " << secondNumber << " = " << addition << endl;
    return 0;
}
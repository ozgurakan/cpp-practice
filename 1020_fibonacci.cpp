/*
using loops to calculate Fibonacci series
- In mathematics, the Fibonacci numbers are the numbers 
in the following integer sequence, called the Fibonacci 
sequence, and characterized by the fact that every number 
after the first two is the sum of the two preceding ones
0 1 1 2 3 5 8 13
*/
#include <iostream>
using namespace std;

int main()
{
    int first = 0, second = 1;
    // will hold only an integer can
    int limit = 20;

    // todo: print a triangle
    cout << first << " " << second << " ";
    for (int counter = 0; counter < limit; counter++)
    {
        int temp = first + second;
        first = second;
        second = temp;
        cout << second << " ";
    }
    cout << endl;

    return 0;
}
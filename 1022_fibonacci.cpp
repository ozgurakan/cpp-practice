/*
calculating fibonacci series using
recursive functions
*/
#include <iostream>
using namespace std;

int Fib(int index);

int main()
{
    int iterate = 0;
    cout << "How many iterations do you want? : ";
    cin >> iterate;
    for (int i = 0; i < iterate; i++)
    {
        cout << i << ": " << Fib(i) << endl;
    }
    return 0;
}

int Fib(int index)
{
    // a vector could hold calculated values to speed up
    if (index < 2) return index;
    else{
        return Fib(index-1) + Fib(index-2);
    }
}
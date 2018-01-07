/*
Program flow
*/
#include <iostream>
using namespace std;

int main()
{
    int a = 1, b = 2;

    if (a > b)
        cout << "a is bigger than b" << endl;
    else
        cout << "a is not bigger than b" << endl;

    if (a > b)
    {
        cout << "a is bigger than b" << endl;
    }
    else if (a == b)
    {
        cout << "a is equal to b" << endl;
    }
    else
    {
        cout << "a is smaller than b" << endl;
    }

    bool isSmaller = (a < b) ? true : false;
    if (isSmaller) cout << "a is smaller than b" << endl;
    else cout << "a is not smaller than b" << endl;

    int maxNum = ( a > b) ? a : b;
    cout << "Max number is: " << maxNum << endl;

    return 0;
}
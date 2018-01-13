/*
using references in functions
*/
#include <iostream>
using namespace std;

int Add(int&, int&);
void Squared(const int&, int&);

int main(void)
{
    int a = 1;
    int b = 2;
    int c = Add(a, b);
    cout << "sum = " << c << endl;

    const int& f = a;
    // c = Add(f, b); // won't work
    //cout << "sum = " << c << endl;
    
    int res = 0;
    Squared(c, res);
    cout << "squared = " << res << endl;

    return 0;
}

int Add(int& a, int& b)
{
    int& temp = a;
    temp +=1;
    return a + b;
}

void Squared(const int& a, int& result)
{
    // a = 3; // wouldn't work
    result = a * a;
}
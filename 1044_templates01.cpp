/*
template example
*/
#include <iostream>
using namespace std;

template <typename Type>
//template <class theType> // both works
Type GetMax(Type a, Type b)
{
    return (a>b?a:b);
}

template <typename Type>
const Type GetMaxSafe(const Type& a, const Type& b)
{
    //a = 11111; // would fail
    return (a>b?a:b);
}


int main(void)
{
    cout << GetMax <int> (11,2) << endl;
    cout << GetMax <double> (11.1,2.2) << endl;
    cout << GetMax (11.1,2.2) << endl; // compiler automatically assigns
    cout << GetMax ("John", "Mary") << endl;
    int num1 = 11, num2 = 22;
    const int& max = GetMaxSafe (num1, num2);
    //max = 1111; // would fail
    cout << max << endl;
    return 0;
}
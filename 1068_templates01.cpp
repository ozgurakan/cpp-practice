/*
templates

function templates
*/
#include <iostream>
using namespace std;

template <class T>
const T& GetMax(const T& n1, const T& n2)
{
    return n1 > n2 ? n1 : n2;
}


int main(void)
{
    int num1 = 22;
    int num2 = 2;
    int max = GetMax(num2, num1);
    cout << max << endl;

    float numf1 = 222.1;
    float numf2 = 22.1;
    float maxf = GetMax(numf1, numf2);
    cout << maxf << endl;

    return 0;
}
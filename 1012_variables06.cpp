/*
typedef, constants, constexpr, enumerator
use;
$ g++ 1012_variables06.cpp -std=c++11; ./a.out
*/

#include <iostream>
using namespace std;

constexpr double GetPi() {return 22.0 / 7;}

int main()
{
    const double pi1 = 22.0 / 7;

    typedef const double CONST_DOUBLE;
    CONST_DOUBLE pi2 = 22.0 / 7;

    cout << pi1 << endl << pi2 <<  endl << GetPi() << endl;

    cout << "Enumerator example" << endl;
    enum Choices
    {
        Yes = 1, // if not assigned, starts from 0
        No,
        Maybe
    };

    cout << "Yes: "  << Yes << endl;
    cout << "No: " << No << endl;
    cout << "Maybe: " << Maybe << endl;

    Choices answer = No;
    cout << "answer: " << answer << endl;

    return 0;
}
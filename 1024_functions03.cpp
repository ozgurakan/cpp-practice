/*
inline functions: decreases the overhead for stack
operations. makes the code complicated
*/
#include <iostream>
using namespace std;


inline int Multiply(int, int);

// deduced return type cannot be used before it is defined
inline auto Square(int number)
{
    return number * number;
}

int main()
{
    cout << Square(29) << endl;
    cout << Multiply(29, 29) << endl;
    return 0;
}

inline int Multiply(int number1, int number2)
{
    return number1 * number2;
}

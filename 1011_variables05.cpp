/* 
auto keyword
test this
# g++ 1011_variables05.cpp -std=c++11; ./a.out
*/

#include <iostream>
using namespace std;

int main()
{
    auto myVar1 = 'a';
    cout << "size of myVar1: " << sizeof(myVar1) << endl;

    auto myVar2 = 65;
    cout << "size of myVar2: " << sizeof(myVar2) << endl;

    // assigns int to char
    myVar1 = myVar2;
    // 65 is ASCII value for A
    cout << myVar1 << endl;

    return 0;
}
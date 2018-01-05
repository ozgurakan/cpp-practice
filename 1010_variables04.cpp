/* 
sizeof
chunking operator
signed, unsigned
floating-point types
*/
#include <iostream>
using namespace std;

int main()
{
    if (__cplusplus == 199711) {
        cout << "This is C++11" << endl;
        cout << "It won't support chunking seperator" << endl;
        unsigned short myShort = 65534;
    } else {
        // chunking separators to increase readability
        // C++14
        unsigned short myShort = 65'534;
    }
    
    
    cout << "size of unsigned short: " << sizeof(myShort) << endl;
    cout << myShort << endl;
    cout << ++myShort << endl;
    cout << ++myShort << endl;
    cout << ++myShort << endl;

    signed short mySignedShort = 0;
    cout << "size of signed short: " << sizeof(mySignedShort) << endl;
    cout << --mySignedShort << endl;

    double morePrecisePi = 22.0 / 7;
    cout << "size of double: " << sizeof(morePrecisePi) << endl;
    cout << morePrecisePi << endl;


    return 0; 
}
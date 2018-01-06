/*
C style strings look for '\0' to determine
end of the string which is risky
strlen(), strcpy(), strcat() use '\0'
-> instead use std::string
*/
#include <iostream>

int main()
{
    using namespace std;
    char myName[] = {'O', 'z', '\0', 'a'};
    cout << "My name: " << myName << endl;

    char badStr[] = {'O', 'z', 'g'};
    cout << "My name: " << badStr << endl;
    // outputs => Ozgoz

    return 0;
}
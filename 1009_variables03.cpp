/*
boolean, char variables
*/
#include <iostream>
using namespace std;

void IsSame(bool);

int main()
{
    char myChar = 'a';
    bool isSame = (myChar == 'a');
    IsSame(isSame);
}

void IsSame(bool isSame)
{
    if (isSame) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }   
}
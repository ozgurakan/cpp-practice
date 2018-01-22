/*
pointer examples
*/
#include <iostream>
using namespace std;

int main(void)
{
    int num = 11;
    int num2 = 22;
    int* pnum = &num;
    cout << " num : " << num << endl;
    cout << "&num : " << &num << endl;
    cout << " pnum: " << pnum << endl;
    cout << "*pnum: " << *pnum << endl;

    cout << "num = 13;" << endl;
    num = 13;
    cout << "*pnum: " << *pnum << endl;

    const int* cnum = &num;
    cout << "*cnum: " << *cnum << endl;
    cnum = &num2;
    cout << "*cnum: " << *cnum << endl;
    //*cnum = 22; // won't work

    int* const anum = &num;
    cout << "*anum: " << *anum << endl;
    // anum = &num2; //won't work
    *anum = 44;
    cout << "*anum: " << *anum << endl;
    cout << " num : " << num << endl;

    return 0;
}
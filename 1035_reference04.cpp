/*
reference and pointer examples
*/
#include <iostream>
using namespace std;

int main(void)
{
    int n1 = 11;
    int n2 = 22;
    int n3 = 33;

    int* p1 = new int;
    *p1 = 99;
    int& r1 = *p1;
    int* p2 = new int[3];
    int* p3;
    int* p4[3] = {&n1, &n2, &n3};


    cout << "&n1 :" << &n1 << endl;
    cout << "&n2 :" << &n2 << endl;
    cout << "&n3 :" << &n3 << endl;
    cout << " p1 :" << p1 << endl;
    cout << "*p1 :" << *p1 << endl;
    cout << " r1 :" << r1 << endl;
    cout << "&r1 :" << &r1 << endl;
    cout << "&p1 :" << &p1 << endl;
    cout << " p2 :" << p2 << endl;
    cout << "*p2 :" << *p2 << endl;
    cout << "&p2 :" << &p2 << endl;
    cout << " p3 :" << p3 << endl;
    //cout << "*p3 :" << *p3 << endl; //prints a random number
    //cout << "&p3 :" << &p3 << endl; // segmentation fault

    p1 = &n1;
    p3 = &n3;
    *p2 = n1;
    *(p2 + 1) = n2;
    *(p2 + 2) = n3;

    cout << "\nafter assignments" << endl;
    cout << " p1 :" << p1 << endl;
    cout << "*p1 :" << *p1 << endl;
    cout << " r1 :" << r1 << endl;
    cout << "&r1 :" << &r1 << endl;
    cout << "&p1 :" << &p1 << endl;    
    cout << " p2 :" << p2 << endl;    
    cout << "*p2 :" << *p2 << endl;
    cout << "p2[1] :" << p2[1] << endl;
    cout << "&p2 :" << &p2 << endl;
    cout << " p3 :" << p3 << endl;
    cout << "*p3 :" << *p3 << endl;
    cout << "&p3 :" << &p3 << endl;

    cout << "\n pointer array" << endl;
    cout << " p4[0] :" << p4[0] << endl;
    cout << "*p4[0] :" << *p4[0] << endl;
    cout << " p4[1] :" << p4[1] << endl;
    cout << "*p4[1] :" << *p4[1] << endl;
    cout << " p4[2] :" << p4[2] << endl;
    cout << "*p4[2] :" << *p4[2] << endl;

    // cleanup
    delete p1;
    cout << "r1 "<< r1 << endl;
    delete p4[0];
    delete p4[1];
    delete p4[2];

    return 0;
}
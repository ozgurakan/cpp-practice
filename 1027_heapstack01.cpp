/*
Testing heap and stack

with no variables
$ g++ 1027_heapstack01.cpp ; size a.out 
__TEXT	__DATA	__OBJC	others	dec	hex
4096	0	0	4294971392	4294975488	100002000

// int number = 0;
$ g++ 1027_heapstack01.cpp ; size a.out 
__TEXT	__DATA	__OBJC	others	dec	hex
4096	0	0	4294971392	4294975488	100002000

// int* pNum = new int;
$ g++ 1027_heapstack01.cpp ; size a.out 
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000

// static int number = 1;
$ g++ 1027_heapstack01.cpp ; size a.out 
__TEXT	__DATA	__OBJC	others	dec	hex
4096	4096	0	4294971392	4294979584	100003000
*/
#include <iostream>
using namespace std;

//int Test();

int main()
{

    //int number = 1;
    //static int number;
    int* pNum = new int;
    //int* pNum2 = new int;
    //cout << Test() << endl;
    //int a[100000000000000];
    int* a = new int[10000000000000];
    delete[] a;

    return 0;
}

/*
int Test()
{
    int* val = new int;
    int num = 1;
    val = &num;
    return *val;
}
*/
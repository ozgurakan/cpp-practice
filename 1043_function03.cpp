/*
value by value, reference and pointer
*/
#include <iostream>
using namespace std;

void Value(int);
void Ref(int& num);
void Poin(int* num);
void Test(int, int&);
void Test2(int, int*);

int main(void)
{
    int number = 11;
    cout << "(main) number: " << number << " &number: " << &number << endl;    
    Value(number);    
    cout << "(main) number: " << number << " &number: " << &number << endl;
    Ref(number);
    cout << "(main) number: " << number << " &number: " << &number << endl;    
    Poin(&number);
    cout << "(main) number: " << number << " &number: " << &number << endl;

    int result = 0;
    cout << "(main) number= " << number << ", result= " << result << endl;
    Test(number, result);
    cout << "(main) number= " << number << ", result= " << result << endl;
    number = 11;
    Test2(number, &result);
    cout << "(main) number= " << number << ", result= " << result << endl;
    return 0;
}


void Value(int num)
{
    cout << "(Value) num: " << num << " &num: " << &num << endl;
    num = 22;
    cout << "(Value) num: " << num << " &num: " << &num << endl;
}

void Ref(int& num)
{
    cout << "(Ref) num: " << num << " &num: " << &num << endl;
    num = 22;
    cout << "(Ref) num: " << num << " &num: " << &num << endl;    
}

void Poin(int* num)
{
    cout << "(Pointer) *num: " << *num << " num: " << num << " &num: " << &num << endl;
    *num = 33;
    cout << "(Pointer) *num: " << *num << " num: " << num << " &num: " << &num << endl;
}

void Test(int num, int& res)
{
    res = num * num;
    num = 12;
}

void Test2(int num, int* res)
{
    *res = num * num;
}

/*
functions
*/
#include <iostream>
using namespace std;

// function decleration (prototype)
int Area(int, int);
void HelloWorld();
int Square(int num = 3);


int main()
{
    HelloWorld();
    cout << Area(4,3) << endl;
    cout << Square() << endl;
    cout << Square(2) << endl;

    return 0;
}

// function definition
int Area(int x, int y)
{
    return x * y;
}

// no return value and parameters
void HelloWorld()
{
    cout << "Hello World" << endl;
}

int Square(int num)
{
    return num * num;
}
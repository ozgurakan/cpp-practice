/*
macros
*/
#include <iostream>
using namespace std;

#define NUMBER 5
#define MESSAGE "Hello World"
#define PRINT(m) (cout << (m) << endl)
#define MAX(a,b) ( ((a) > (b)) ? (a) : (b) )

#ifndef NUMBER
#define NUMBER 99
#endif

int main(void) {

    for (int i = 0; i < NUMBER; ++i) {
        PRINT(MESSAGE);
        PRINT(MAX(i, i+1));
    }        
    
    return 0;
}
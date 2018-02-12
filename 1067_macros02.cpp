/*
assert macro
*/
#include <iostream>
#include <assert.h>
using namespace std;

#define NUMBER 10

int main(void) {

    int random_int = 0;
    for (int i = 0; i < 100; ++i) {
        random_int = rand() % 100;
        assert(random_int < 10);
        cout << random_int << endl;
    }

    return 0;
}
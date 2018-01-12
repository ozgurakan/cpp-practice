/*
memory allocation exceptions
 
 __output__
a.out(88471,0x7fff9bf6b3c0) malloc: *** mach_vm_map(size=2251799813685248) failed (error code=3)
*** error: can't allocate region
*** set a breakpoint in malloc_error_break to debug
Memory allocation failed
*/
#include <iostream>
using namespace std;

int main(void)
{
    try
    {
        int* bigPointer = new int[0x1ffffffffffff];
        cout << "Memory allocated" << endl;
        delete[] bigPointer;
    }
    catch (bad_alloc)
    {
        cout << "Memory allocation failed" << endl;
    }

    return 0;
}
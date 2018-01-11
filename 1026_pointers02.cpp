/*
dynamic memory allocation
new, delete
*/
#include <iostream>

int main()
{
    // request memory for an int    
    int* number = new int;
    // release memory
    delete number;
    
    // request memory for an int[5]
    int* numbers = new int[5];
    // release memory, -> [] <-
    delete[] numbers;

    return 0;
}
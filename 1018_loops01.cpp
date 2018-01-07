/*
loops
while
*/
#include <iostream>
using namespace std;

int main()
{
    int counter = 0;

    cout << "First loop" << endl;
    while(true)
    {
        counter++;
        cout << "Loop #" << counter << endl;
        if (counter > 2)
        {
            break;
            cout << "...break";
        }
    }

    cout << "Second loop" << endl;
    counter = 0;
    while(counter < 3)
    {
        counter++;
        cout << "Loop #" << counter << endl;
    }

    cout << "Third loop" << endl;
    counter = 0;
    // run the code at least once
    do
    {
        counter++;
        cout << "Loop #" << counter << endl;
    } while (counter < 3);

    return 0;
}
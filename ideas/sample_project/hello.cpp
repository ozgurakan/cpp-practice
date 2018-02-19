#include <iostream>
#include "thing.hh"
using namespace std;

int main()
{
    cout << "Hello World" << endl;

    /*    
    Being* being = new Being();
    cout << being->can_think() << endl;
    delete being;
    */

    Thing* thing = new Thing();
    cout << thing->is_real() << endl;
    delete thing;

    return 0;
}
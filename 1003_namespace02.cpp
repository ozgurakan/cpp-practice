// pre-processor directive
#include <iostream>

int main()
{
    /* using a more restricted namespace
    not the whole std but two methods
    */
    using std::cout;
    using std::endl;

    cout << "Hello World" << endl;

    return 0;
}
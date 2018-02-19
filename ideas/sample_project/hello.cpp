#include <iostream>
#include <string>
#include "thing.hh"
#include "being.hh"
using namespace std;

int main()
{
    cout << "Hello World" << endl;

    Thing* thing = new Thing();
    thing->set_name("thing1");
    cout << thing->get_name() << " : " << thing->get_type() << endl;
    delete thing;

    Being* being = new Being(true);
    being->set_name("being1");
    cout << being->get_name() << " : " << being->get_type() << endl;
    cout << being->get_name() << " : " << being->Thing::get_type() << endl;
    delete being;


    return 0;
}
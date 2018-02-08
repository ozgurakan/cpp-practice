/*
static casting
*/
#include <iostream>
#include <string>
using namespace std;

class Thing
{
public:
    bool isReal;

    Thing(bool inIsReal): isReal(inIsReal) {
        if (isReal)
            cout << "A real thing is created" << endl;
        else
            cout << "An imaginary thing created" << endl;
    }

    bool IsReal() {
        return isReal;
    }

    virtual string GetName() {
        return "noname";
    }

    virtual ~Thing() {}
};

class RealThing: public Thing
{
private:
    string name;
public:        
    RealThing(string inName): Thing(true), name(inName) {}

    string GetName() {
        return name;
    }
};

int main(void) 
{
    Thing idea(false); //or, Thing* idea = new Thing(false);
    cout << idea.GetName() << " is real: " << idea.IsReal() << endl;
    RealThing book("book");
    cout << book.GetName() << " is real: " << book.IsReal() << endl;

    Thing* newIdea = &book;
    cout << newIdea->GetName() << " is real: " << newIdea->IsReal() << endl;

    RealThing* cup = new RealThing("cup");
    Thing* cup_picture = cup;
    cout << cup_picture->GetName() << " is real: " << cup_picture->IsReal() << endl;

    // can't cast base to derived automatically
    //RealThing* paper = &idea;

    Thing* dream = new Thing(false);
    RealThing* pencil = static_cast<RealThing*>(dream);
    cout << pencil->GetName() << " is real: " << pencil->IsReal() << endl;

    return 0;
}
// inside being.hh
#ifndef BEING_H
#define BEING_H
#include "thing.hh"

class Being: public Thing
{
protected:
    bool brain;

public:
    Being(bool in_brain = false): Thing(false), brain(in_brain) { }
    //TODO: Being(Thing in_thing);

    const bool has_brain();
    const string get_type();

    virtual ~Being() { };
};


#endif
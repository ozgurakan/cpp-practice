// inside being.hh
#ifndef BEING_H
#define BEING_H
#include "thing.hh"

class Being: public Thing
{
protected:
    bool can_think;
public:
    Being(bool in_can_think = false): Thing(true), can_think(in_can_think) { }

    const bool can_think();

    virtual ~Being() { };

};


#endif
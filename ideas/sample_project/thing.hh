// inside thing.h
#ifndef THING_H
#define THING_H
#include <string>

class Thing
{
protected:
    bool is_real;
public:
    Thing(bool in_is_real = true): is_real(in_is_real) { }
    string get_type();
    virtual ~Thing() { };
};

#endif /*THING_H*/
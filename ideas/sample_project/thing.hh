// inside thing.h
#ifndef THING_H
#define THING_H
#include <string>
using namespace std;

class Thing
{
protected:
    bool imaginary;
    string name;
public:
    Thing(bool in_imaginary = false);
    const bool is_real();
    string get_type();
    
    void set_name(string);
    const string get_name();

    virtual ~Thing() { };
};

#endif /*THING_H*/
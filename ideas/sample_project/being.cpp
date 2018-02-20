#include "being.hh"

Being::Being(bool in_brain): Thing(false), brain(in_brain) { }

const bool Being::has_brain() {
    return brain;
}

const string Being::get_type() {
    if (brain)
        return "thinker";
    return "non-thinker";
}
#include "being.hh"

const bool Being::has_brain() {
    return brain;
}

const string Being::get_type() {
    if (brain)
        return "thinker";
    return "non-thinker";
}
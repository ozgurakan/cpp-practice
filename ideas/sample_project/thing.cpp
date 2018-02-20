#include "thing.hh"

Thing::Thing(bool in_imaginary): imaginary(in_imaginary) { }

const bool Thing::is_real() {
    return !imaginary;
}

string Thing::get_type() {
    if (!imaginary)
        return "real";
    return "imaginary";
}

void Thing::set_name(string in_name) {
    name = in_name;
}

const string Thing::get_name() {
    return name;
}

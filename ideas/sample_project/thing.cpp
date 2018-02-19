#include "thing.hh"

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

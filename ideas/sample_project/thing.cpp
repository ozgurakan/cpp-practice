#include "thing.hh"
#include <string>

string Thing::get_type() {
    if (is_real)
        return "real";
    return "imaginary";
}
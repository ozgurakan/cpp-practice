//
//  thing.cpp
//  cpptest
//
//  Created by Akan, Oz on 2/20/18.
//  Copyright © 2018 Akan, Oz. All rights reserved.
//

#include "thing.hpp"

Thing::Thing(string in_name) : name(in_name) {}
Thing::~Thing(){}

const string Thing::get_name()
{
    return name;
}

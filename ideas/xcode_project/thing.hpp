//
//  thing.hpp
//  cpptest
//
//  Created by Akan, Oz on 2/20/18.
//  Copyright © 2018 Akan, Oz. All rights reserved.
//

#ifndef thing_hpp
#define thing_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Thing
{
protected:
    string name;
public:
    Thing(string in_name);
    const string get_name();
    virtual ~Thing();
};

#endif /* thing_hpp */

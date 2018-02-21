//
//  being.hpp
//  cpptest
//
//  Created by Akan, Oz on 2/20/18.
//  Copyright © 2018 Akan, Oz. All rights reserved.
//

#ifndef being_hpp
#define being_hpp

#include <stdio.h>
#include "thing.hpp"

enum Type { animal, plant };

class Being: public Thing
{
protected:
    Type type;
public:
    Being(string in_name, Type in_type);
    ~Being();
};

#endif /* being_hpp */

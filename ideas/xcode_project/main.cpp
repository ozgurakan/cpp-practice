//
//  main.cpp
//  cpptest
//
//  Created by Akan, Oz on 2/20/18.
//  Copyright © 2018 Akan, Oz. All rights reserved.
//

#include <iostream>
#include "thing.hpp"
#include "being.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    Thing* thing = new Thing("thing");
    cout << thing->get_name() << endl;
    delete thing;
    
    Being* being = new Being("being", animal);
    cout << being->get_name() << endl;
    delete being;
    
    return 0;
}

/*
operator overloading
*/
#include <iostream>
#include <string>
using namespace std;

class Human {
public:
    string name;
    
    Human(string inName): name(inName) {}

    operator const char* () {
        return name.c_str();
    }       
};

int main(void) {
    Human human("Joe");
    cout << "Name: " << human << endl;
    return 0;
}

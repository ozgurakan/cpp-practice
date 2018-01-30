/*
virutal methods
*/
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name;
    
    Human(string gName = "Human"): name(gName) {
        cout << "Human is created" << endl;
    }

    virtual void Talent() { // hidden when overridden
        cout << "Hello, I am " << name << " and I can think." << endl;
    }
};

class Superman: public Human {
public:
    Superman(string gName = "Superman"): Human(gName) {
        cout << "Superman is created" << endl;
    }

    void Talent() {
        cout << "Hello, I am " << name << " and I can fly." << endl;
    }
};

void TalkHuman(Human& human) {
    human.Talent();
}

int main(void) {
    Human human;
    TalkHuman(human);

    Superman superman;
    TalkHuman(superman);

    return 0;
}
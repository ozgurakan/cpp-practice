/*
postfix operator

g++ 1059_operators02.cpp -std=c++11
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Choice {
private:
    vector<int> numbers;
    int counter;

    void IncreaseCounter() {
        counter = ++counter % numbers.size();        
    }

public:    
    Choice(int (&inNumbers)[5]) {        
        vector<int> tnumbers (inNumbers, inNumbers + sizeof(inNumbers) / sizeof(int) );
        numbers = tnumbers;
        counter = -1;
        cout << "Choice initialized from an array" << endl;
    }

    Choice(vector<int> inNumbers) {
        numbers = inNumbers;
        counter = -1;
        cout << "Choice initialized from a vector" << endl;
    }

    int GetNext() {
        IncreaseCounter();
        return numbers.at(counter);
    }

    int GetCurrent() {
        return numbers.at(counter);
    }


    int GetSize() {
        return numbers.size();
    }

    Choice& operator ++ () { // prefix, preferred
        IncreaseCounter();
        return *this;
    }

    Choice operator ++ (int) { // postfix, creates a copy
        Choice copy(numbers);
        IncreaseCounter();
        return copy;
    }
};

int main(void) {
    //int numbers[] = {11, 22, 33, 44, 55};
    vector<int> numbers = {11, 22, 33, 44, 55, 66};
    Choice choice(numbers);

    cout << "Regular method" << endl;
    for (int i = 0; i < 10; i++ ) {
        cout << "Next: " << choice.GetNext() << endl;
    }
    
    cout << "++ prefix operator" << endl;
    for (int i = 0; i < 10; i++) {
        ++choice;
        cout << "Next: " << choice.GetCurrent() << endl;
    }

    cout << "++ postfix operator" << endl;
    for (int i = 0; i < 10; i++) {
        choice++;
        cout << "Next: " << choice.GetCurrent() << endl;
    }

    return 0;
}
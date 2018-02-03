/*
unary operators
*/
#include <iostream>
#include <string>
using namespace std;

class Choice {
public:
    int* numbers;
    int* selected;
    
    Choice(int gNumbers[5]): numbers(gNumbers) {
        cout << "initialized Choice" << endl;
        selected = numbers;
        //cout << *selected << endl;
    }

    int GetSelection() {
        return *selected;
    }

    Choice& operator ++ () { // prefix increment
        selected = ++numbers;
        // can not increase more than the length of the array
        // a vector would be easier to implement
        return *this;
    }

};

int main(void) {
    int numbers[] = {1,2,3,4,5};
    Choice choice(numbers);
    cout << "Selection: " << choice.GetSelection() << endl;
    ++choice;
    cout << "Selection: " << choice.GetSelection() << endl;
    ++choice;
    cout << "Selection: " << choice.GetSelection() << endl;    
    return 0;
}
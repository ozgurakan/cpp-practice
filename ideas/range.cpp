/*
implements range method similar to python range()
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> range(int start, int finish) {
    int len = finish - start;
    vector<int> numbers(len);
    for (int i = 0; i < len; ++i) {
        numbers[i] = i + start;
    }
    return numbers;
}

vector <int> range(int finish) {
    return range(0, finish);
}


int main(void)
{
    cout << "Hello World" << endl;

    for (auto i: range(2,10)) {
        cout << i << ". Hello World" << endl;
    }
    
    return 0;
}
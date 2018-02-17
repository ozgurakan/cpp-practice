/*
vector example
-std=c++11
*/
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    vector<int> int_array;

    int_array.push_back(11);
    int_array.push_back(22);
    int_array.push_back(33);
    int_array.push_back(44);

    for (auto& number: int_array)
        cout << number << endl;
}
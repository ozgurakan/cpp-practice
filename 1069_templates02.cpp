/*
template class
*/
#include <iostream>
using namespace std;

template <class T>
class NumberStore
{
private:
    static T max_num;
    static T min_num;
public:
    NumberStore(T number) {
        if (number > max_num)
            max_num = number;
        if (number < min_num)
            min_num = number;        
    }

    void MinMax()
    {
        cout << "min:max -> (" << min_num << ":" << max_num << ")" << endl;
    }
};

template <class T>
T NumberStore<T>::max_num = 0;

template <class T>
T NumberStore<T>::min_num = 0;

int main(void)
{
    NumberStore <int>ns0(1);
    NumberStore <int>ns1(10);
    NumberStore <int>ns2(-1);
    NumberStore <int>ns3(-2);

    NumberStore <float>fs0(22.11);
    NumberStore <float>fs1(1.33);
    NumberStore <float>fs2(-1.12);

    // TODO do same for the class variable

    ns2.MinMax();
    fs0.MinMax();
    return 0;
}
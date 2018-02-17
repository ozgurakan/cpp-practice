/*
namespace example
*/
#include <iostream>
using namespace std;

namespace test {
    int num = 1900;

    int DecreaseNumber() {
        return --num;
    }
}

namespace prod {
    int num = 2000;
    
    int IncreaseNumber() {
        return ++num;
    }
}

int main() {
    cout << test::num << endl;
    cout << prod::num << endl;
    cout << prod::IncreaseNumber() << endl;
    cout << prod::IncreaseNumber() << endl;

    using namespace prod;
    cout << IncreaseNumber() << endl;

    using test::DecreaseNumber;
    cout << DecreaseNumber() << endl;

    return 0;
}

/*
a very big sum
*/
#include <iostream>
#include <vector>
using namespace std;

long aVeryBigSum(int n, vector <long> ar) {
    // Complete this function
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += ar[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<long> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    long result = aVeryBigSum(n, ar);
    cout << result << endl;
    return 0;
}
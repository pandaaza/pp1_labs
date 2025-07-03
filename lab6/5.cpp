#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    vector<int> v(b, a);
    return accumulate(v.begin(), v.end(), 1, multiplies<int>());
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b);
    return 0;
}
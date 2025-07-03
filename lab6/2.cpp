#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cin >> n;

    vector<int> seq;
    generate_n(back_inserter(seq), n + 1, [i = 0]() mutable { return fib(i++); });

    cout << seq[n];
    return 0;
}
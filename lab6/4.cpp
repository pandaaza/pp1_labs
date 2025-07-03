#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x;
    cout << "Enter value to count: ";
    cin >> x;

    cout << "Count of " << x << ": " << count(v.begin(), v.end(), x) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;

    return 0;
}
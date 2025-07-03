#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 1, 2, 4, 6, 4, 3};
    int x = 4;

    cout << "Count of " << x << ": " << count(v.begin(), v.end(), x) << endl;
    cout << "Min: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Max: " << *max_element(v.begin(), v.end()) << endl;

    return 0;
}

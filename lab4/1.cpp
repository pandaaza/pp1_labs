#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime> 

using namespace std;

int main() {
    srand(time(0)); 
    vector<int> v;
    for (int i = 0; i < 10; ++i)
        v.push_back(rand() % 100 + 1);

    cout << "Original vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    sort(v.begin(), v.end());

    cout << "Sorted vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    cout << "Min: " << *min_it << ", Max: " << *max_it << "\n";

    auto last = unique(v.begin(), v.end());
    v.erase(last, v.end());

    cout << "Vector without duplicates:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    return 0;
}
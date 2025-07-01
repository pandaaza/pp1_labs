#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v;

    //  Заполнение от 1 до 20
    for (int i = 1; i <= 20; ++i)
        v.push_back(i);
    cout<<"Original vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";
        //  reverse
    reverse(v.begin(), v.end());

    cout << "Reversed vector:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    //  кол четных
    int evenCount = count_if(v.begin(), v.end(), [](int x) {
        return x % 2 == 0;
    });

    cout << "Even numbers count: " << evenCount << "\n";

    // 4. remove_if + erase: убираем кратные 3
    v.erase(remove_if(v.begin(), v.end(), [](int x) {
        return x % 3 == 0;
    }), v.end());

    cout << "Vector without numbers divisible by 3:\n";
    for (int x : v) cout << x << " ";
    cout << "\n";

    return 0;
}
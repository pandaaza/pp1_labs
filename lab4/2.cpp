#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;
    int num;

    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; ++i) {
        cin >> num;
        s.insert(num); 
    }

    cout << "\nSet contains:\n";
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    cout << "\nEnter a number to search in the set: ";
    cin >> num;

    if (s.find(num) != s.end()) {
        cout << "Yes, the number exists in the set.\n";
    } else {
        cout << "No, the number does not exist in the set.\n";
    }

    return 0;
}
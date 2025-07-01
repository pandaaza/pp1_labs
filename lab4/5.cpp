#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> visitors;
    string name;

    cout << "Enter 5 visitor names:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Visitor " << i + 1 << ": ";
        getline(cin, name);
        visitors.push(name);
    }

    cout << "\nServing visitors:\n";
    while (!visitors.empty()) {
        cout << "Now serving: " << visitors.front() << endl;
        visitors.pop(); 
    }

    cout << "Queue is empty.\n";

    return 0;
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    stack<char> s;
    for (char ch : input) {
        s.push(ch);
    }

    cout << "Reversed string: ";
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
    return 0;
}
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool areBracketsBalanced(const string& expr) {
    stack<char> st;

    for (char ch : expr) {
        if (ch == '(') {
            st.push(ch);
        } else if (ch == ')') {
            if (st.empty()) return false; 
            st.pop(); 
        }
    }

    return st.empty(); 
}

int main() {
    string expr;
    cout << "Enter expression: ";
    getline(cin, expr);

    if (areBracketsBalanced(expr)) {
        cout << "Correct\n";
    } else {
        cout << "Incorrect\n";
    }

    return 0;
}
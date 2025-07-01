#include <iostream>
#include <deque>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    deque<char> dq;
    for (char ch : word) {
        dq.push_back(ch);
    }

    bool isPalindrome = true;
    while (dq.size() > 1) {
        if (dq.front() != dq.back()) {
            isPalindrome = false;
            break;
        }
        dq.pop_front();
        dq.pop_back();
    }

    if (isPalindrome)
        cout << "It is a palindrome." << endl;
    else
        cout << "It is not a palindrome." << endl;

    return 0;
}
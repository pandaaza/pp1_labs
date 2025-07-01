#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    cout << "Enter 5 numbers to enqueue: ";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        q.push(num);
    }

    cout << "Dequeued: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

double average(const vector<int>& v) {
    if (v.empty()) return 0;

    int sum = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        sum += *it;
    }

    return static_cast<double>(sum) / v.size();
}

int main() {
    vector<int> numbers;
    int num;

    cout << "Enter 5 integers:\n";
    for (int i = 0; i < 5; ++i) {
        cin >> num;
        numbers.push_back(num);
    }

    double result = average(numbers);
    cout << "Average: " << result << endl;

    return 0;
}
//booleans
#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;

    cin >> age >> hasID;

    bool allowed = (age >= 18 && hasID);

    if (allowed)
        cout << "Welcome to the club!" << endl;
    else
        cout << "Access denied." << endl;

    return 0;
}
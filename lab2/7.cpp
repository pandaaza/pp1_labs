//while loop
#include <iostream>
using namespace std;

int main() {
    string password;

    do {
        cout << "Enter password: ";
        cin >> password;
    } while (password != "1234");

    cout << "Access granted." << endl;
    return 0;
}
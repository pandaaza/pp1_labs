//break continue
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        if (i == 13) continue;
        if (i == 17) break;

        cout << i << " ";
    }

    cout << endl;
    return 0;
}
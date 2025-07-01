#include <iostream>
using namespace std;

int main() {
    int matrix[4][4];

    cout << "Enter 4x4 matrix:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nMain diagonal: ";
    for (int i = 0; i < 4; i++) {
        cout << matrix[i][i] << " ";
    }

    cout << "\nSecondary diagonal: ";
    for (int i = 0; i < 4; i++) {
        cout << matrix[i][3 - i] << " ";
    }

    cout << endl;
    return 0;
}
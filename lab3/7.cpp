#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nTranspose:\n";
    for (int j = 0; j < 3; j++) {         // rows
        for (int i = 0; i < 3; i++) {     // colums
            cout << matrix[i][j] << " ";
        }
        cout << endl;                    
    }
    return 0;

}
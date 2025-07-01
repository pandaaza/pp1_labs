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

    int maxSum = -1;
    int maxRow = -1;

    for (int i = 0; i < 4; i++) {
        int rowSum = 0;

        for (int j = 0; j < 4; j++) {
            rowSum += matrix[i][j];
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    cout << "\nRow " << (maxRow + 1) << " has the maximum sum: " << maxSum << endl;

    return 0;
}
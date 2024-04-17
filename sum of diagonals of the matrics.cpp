#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    // Initialize the matrix with size n x n
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input elements for the matrix
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Calculate the sum of the main diagonal
    int mainDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    // Calculate the sum of the secondary diagonal
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        secondaryDiagonalSum += matrix[i][n - 1 - i];
    }

    // Output the sums
    cout << "Sum of the main diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}

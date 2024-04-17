#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    vector<vector<int>> matrix;

public:
    Matrix(int rows, int cols) {
        // Initialize the matrix with zeros
        matrix.resize(rows, vector<int>(cols, 0));
    }

    void insertElement(int row, int col, int value) {
        if (row < 0 || row >= matrix.size() || col < 0 || col >= matrix[0].size()) {
            cout << "Invalid row or column index." << endl;
            return;
        }

        matrix[row][col] = value;
    }

    int getElement(int row, int col) const {
        if (row < 0 || row >= matrix.size() || col < 0 || col >= matrix[0].size()) {
            cout << "Invalid row or column index." << endl;
            return -1; // Return some default value indicating error
        }

        return matrix[row][col];
    }

    void displayMatrix() const {
        for (const auto& row : matrix) {
            for (int value : row) {
                cout << value << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    // Create a 3x3 matrix
    Matrix mat(3, 3);

    // Insert some elements
    mat.insertElement(0, 0, 1);
    mat.insertElement(0, 1, 2);
    mat.insertElement(0, 2, 3);
    mat.insertElement(1, 0, 4);
    mat.insertElement(1, 1, 5);
    mat.insertElement(1, 2, 6);
    mat.insertElement(2, 0, 7);
    mat.insertElement(2, 1, 8);
    mat.insertElement(2, 2, 9);

    // Display the matrix
    cout << "Matrix:" << endl;
    mat.displayMatrix();

    // Retrieve an element
    cout << "Element at (1,1): " << mat.getElement(1, 1) << endl;

    return 0;
}

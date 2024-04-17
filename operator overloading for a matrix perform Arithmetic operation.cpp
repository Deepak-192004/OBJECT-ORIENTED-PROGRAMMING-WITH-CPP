#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    // Constructor
    Matrix(int rows, int cols) : data(rows, std::vector<int>(cols, 0)) {}

    // Overloading + operator for matrix addition
    Matrix operator+(const Matrix& other) const {
        Matrix result(data.size(), data[0].size());
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Overloading - operator for matrix subtraction
    Matrix operator-(const Matrix& other) const {
        Matrix result(data.size(), data[0].size());
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // Overloading * operator for matrix multiplication
    Matrix operator*(const Matrix& other) const {
        int m = data.size();
        int n = data[0].size();
        int p = other.data.size();
        int q = other.data[0].size();

        Matrix result(m, q);
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < q; ++j) {
                for (int k = 0; k < n; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Function to display matrix
    void display() const {
        for (size_t i = 0; i < data.size(); ++i) {
            for (size_t j = 0; j < data[0].size(); ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m1(2, 2);
    m1.display();
    std::cout << std::endl;

    Matrix m2(2, 2);
    m2.display();
    std::cout << std::endl;

    Matrix sum = m1 + m2;
    std::cout << "Sum:\n";
    sum.display();
    std::cout << std::endl;

    Matrix diff = m1 - m2;
    std::cout << "Difference:\n";
    diff.display();
    std::cout << std::endl;

    Matrix product = m1 * m2;
    std::cout << "Product:\n";
    product.display();

    return 0;
}

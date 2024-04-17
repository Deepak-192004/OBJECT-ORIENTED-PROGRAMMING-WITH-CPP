#include <iostream>
using namespace std;

// Class declaration
class FloydTriangle {
private:
    int rows;

public:
    // Constructor to initialize rows
    FloydTriangle(int r) : rows(r) {
        cout << "Constructing Floyd's Triangle with " << rows << " rows..." << endl;
    }

    // Destructor
    ~FloydTriangle() {
        cout << "Destructing Floyd's Triangle..." << endl;
    }

    // Function to print Floyd's Triangle
    void printTriangle() {
        int num = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
};

int main() {
    // Number of rows for Floyd's Triangle
    int rows;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;

    // Create object of FloydTriangle class
    FloydTriangle floyd(rows);

    // Print Floyd's Triangle
    floyd.printTriangle();

    return 0;
}

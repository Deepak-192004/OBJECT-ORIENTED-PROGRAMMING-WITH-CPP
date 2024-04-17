#include <iostream>
using namespace std;

class RightAngleTriangle {
public:
    RightAngleTriangle() {} // Default constructor

    // Constructor with parameter to set the size of the triangle
    RightAngleTriangle(int size) : triangleSize(size) {}

    // Constructor with parameter to set the size of the triangle and the repeating number
    RightAngleTriangle(int size, int num) : triangleSize(size), repeatNumber(num) {}

    // Function to print the right-angled triangle pattern
    void printTriangle() {
        for (int i = 1; i <= triangleSize; i++) {
            for (int j = 1; j <= i; j++) {
                cout << repeatNumber << " ";
            }
            cout << endl;
        }
    }

private:
    int triangleSize = 5; // Default triangle size
    int repeatNumber = 1; // Default repeating number
};

int main() {
    RightAngleTriangle triangle1; // Create an instance using default constructor
    cout << "Default pattern:" << endl;
    triangle1.printTriangle();

    cout << "\nPattern with size 4:" << endl;
    RightAngleTriangle triangle2(4); // Create an instance with size 4
    triangle2.printTriangle();

    cout << "\nPattern with size 3 and repeating number 3:" << endl;
    RightAngleTriangle triangle3(3, 3); // Create an instance with size 3 and repeating number 3
    triangle3.printTriangle();

    return 0;
}


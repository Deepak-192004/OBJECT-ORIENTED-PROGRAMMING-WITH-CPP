#include <iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator() {} // Default constructor
    CubeCalculator(int n) : limit(n) {} // Constructor with parameter

    void setLimit(int n) {
        limit = n;
    }

    void displayCubes() {
        for (int i = 1; i <= limit; i++) {
            cout << "Cube of " << i << ": " << (i * i * i) << endl;
        }
    }

private:
    int limit;
};

int main() {
    int n;
    cout << "Enter the limit to display cubes: ";
    cin >> n;

    CubeCalculator calculator; // Create an instance using the default constructor
    calculator.setLimit(n); // Set the limit using a member function
    calculator.displayCubes(); // Call the displayCubes function

    return 0;
}


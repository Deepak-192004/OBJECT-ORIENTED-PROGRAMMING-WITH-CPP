#include <iostream>
using namespace std;

class CubeCalculator {
public:
    CubeCalculator(int n) : limit(n) {} // Constructor to set the limit
    ~CubeCalculator() {} // Destructor (no specific cleanup needed for this task)

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

    CubeCalculator calculator(n); // Create an instance of the CubeCalculator class
    calculator.displayCubes(); // Call the displayCubes function

    return 0;
}


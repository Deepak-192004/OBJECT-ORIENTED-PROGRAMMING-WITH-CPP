#include <iostream>
using namespace std;

// Function to calculate the sum of four integers with default arguments
int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int num1, num2, num3, num4;

    cout << "Enter four integers (separated by spaces): ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Call the sum function with default arguments
    int result = sum(num1, num2, num3, num4);

    cout << "Sum of the four integers: " << result << endl;

    return 0;
}


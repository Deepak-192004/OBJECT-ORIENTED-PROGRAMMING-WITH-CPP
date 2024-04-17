#include <iostream>
#include <cmath> // for sqrt function

using namespace std;

// Function to find the square root of a number and print the result
void findSquareRoot(double number) {
    if (number < 0) {
        cout << "Square root of negative number is not defined." << endl;
        return;
    }

    double result = sqrt(number);
    cout << "Square root of " << number << " is: " << result << endl;
}

// Inline function to increment a number
inline void increment(int& num) {
    num++;
}

// Inline function to decrement a number
inline void decrement(int& num) {
    num--;
}

int main() {
    double number;
    int num;

    // Input for finding square root
    cout << "Enter a number to find its square root: ";
    cin >> number;
    findSquareRoot(number);

    // Input for increment and decrement
    cout << "Enter a number for increment and decrement: ";
    cin >> num;

    cout << "Original number: " << num << endl;

    // Increment using inline function
    increment(num);
    cout << "After increment: " << num << endl;

    // Decrement using inline function
    decrement(num);
    cout << "After decrement: " << num << endl;

    return 0;
}

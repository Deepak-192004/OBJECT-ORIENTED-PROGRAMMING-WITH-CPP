#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;

    cout << "Enter a positive integer: ";
    cin >> number;

    // Store the original number
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to its reverse
    if (originalNumber == reversedNumber) {
        cout << originalNumber << " is a palindrome." << endl;
    } else {
        cout << originalNumber << " is not a palindrome." << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter an integer number: ";
    cin >> number;

    // Using conditional statement to check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }

    return 0;
}


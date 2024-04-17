#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Input temperature in Celsius from the user
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Output the converted temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;

    return 0;
}


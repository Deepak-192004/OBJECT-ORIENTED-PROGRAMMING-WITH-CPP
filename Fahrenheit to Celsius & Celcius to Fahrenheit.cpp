#include <iostream>
using namespace std;
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
int main() {
    double temperature;
    char choice;
    cout << "Enter temperature: ";
    cin >> temperature;
    cout << "Enter 'c' to convert Celsius to Fahrenheit, or 'f' to convert Fahrenheit to Celsius: ";
    cin >> choice;
    switch (choice) {
        case 'c':
        case 'C':
            cout << temperature << " Celsius is " << celsiusToFahrenheit(temperature) << " Fahrenheit." << endl;
            break;
        case 'f':
        case 'F':
            cout << temperature << " Fahrenheit is " << fahrenheitToCelsius(temperature) << " Celsius." << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 'c' or 'f'." << endl;
    }
    return 0;
}

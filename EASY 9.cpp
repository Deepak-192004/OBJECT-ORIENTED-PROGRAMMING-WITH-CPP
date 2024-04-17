#include <iostream>
using namespace std;

// Function to calculate simple interest for senior citizen (12% rate)
double calculateInterestSeniorCitizen(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

// Function to calculate simple interest for other customers (10% rate)
double calculateInterestOther(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

int main() {
    double principal, rate, time;
    char customerType;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter time period (in years): ";
    cin >> time;

    cout << "Are you a senior citizen? (Y/N): ";
    cin >> customerType;

    if (customerType == 'Y' || customerType == 'y') {
        rate = 12.0; // 12% rate for senior citizens
        cout << "Interest for senior citizen: " << calculateInterestSeniorCitizen(principal, rate, time) << endl;
    } else {
        rate = 10.0; // 10% rate for other customers
        cout << "Interest for other customer: " << calculateInterestOther(principal, rate, time) << endl;
    }

    return 0;
}


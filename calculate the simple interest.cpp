#include <iostream>

using namespace std;

// Function to calculate simple interest
double calculateSimpleInterest(double principal, double rate, double time) {
    return (principal * rate * time) / 100.0;
}

// Function to calculate interest based on customer type
double calculateInterestForCustomer(double principal, double time, bool isSeniorCitizen) {
    double rate = (isSeniorCitizen) ? 12.0 : 10.0;
    return calculateSimpleInterest(principal, rate, time);
}

int main() {
    double principal, time;
    char customerType;

    // Input principal amount and time period
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter time period (in years): ";
    cin >> time;

    // Input customer type
    cout << "Are you a senior citizen? (Y/N): ";
    cin >> customerType;

    bool isSeniorCitizen = (customerType == 'Y' || customerType == 'y');

    // Calculate and display simple interest
    double interest = calculateInterestForCustomer(principal, time, isSeniorCitizen);
    cout << "Simple interest: " << interest << endl;

    return 0;
}

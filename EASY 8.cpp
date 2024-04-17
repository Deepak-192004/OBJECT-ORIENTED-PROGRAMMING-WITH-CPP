#include <iostream>
using namespace std;

// Function to get the person's age
int getPerson() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    return age;
}

// Function to check eligibility for voting and calculate years left if not eligible
void checkEligibility(int age) {
    const int votingAge = 18;
    if (age >= votingAge) {
        cout << "You are eligible to vote." << endl;
    } else {
        int yearsLeft = votingAge - age;
        cout << "You are not eligible to vote. You need to wait " << yearsLeft << " more years." << endl;
    }
}

int main() {
    int age = getPerson();
    checkEligibility(age);
    return 0;
}


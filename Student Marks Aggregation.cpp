#include <iostream>
using namespace std;

int main() {
    // Define variables to store marks and aggregate
    int marks[4];
    int total = 0;
    float aggregate;

    // Input marks for each subject
    cout << "Enter marks of student in four subjects: ";
    for (int i = 0; i < 4; ++i) {
        cin >> marks[i];
        total += marks[i];
    }

    // Calculate aggregate
    aggregate = static_cast<float>(total) / 4.0;

    // Display total and aggregate
    cout << "Total marks: " << total << endl;
    cout << "Aggregate: " << aggregate << endl;

    // Determine grade based on aggregate
    char grade;
    if (aggregate > 75) {
        grade = 'A';
    } else if (aggregate >= 60 && aggregate < 75) {
        grade = 'B';
    } else if (aggregate >= 50 && aggregate < 60) {
        grade = 'C';
    } else if (aggregate >= 40 && aggregate < 50) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Display grade
    cout << "Grade obtained by the student: ";
    switch (grade) {
        case 'A':
            cout << "Distinction";
            break;
        case 'B':
            cout << "First Division";
            break;
        case 'C':
            cout << "Second Division";
            break;
        case 'D':
            cout << "Third Division";
            break;
        case 'F':
            cout << "Fail";
            break;
    }

    return 0;
}

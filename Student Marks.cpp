#include <iostream>

using namespace std;

int main() {
    // Declare variables to store marks in four subjects
    double marks1, marks2, marks3, marks4;

    // Input marks for each subject
    cout << "Enter marks for Subject 1: ";
    cin >> marks1;

    cout << "Enter marks for Subject 2: ";
    cin >> marks2;

    cout << "Enter marks for Subject 3: ";
    cin >> marks3;

    cout << "Enter marks for Subject 4: ";
    cin >> marks4;

    // Calculate total marks
    double totalMarks = marks1 + marks2 + marks3 + marks4;

    // Calculate aggregate
    double aggregate = (totalMarks / 400) * 100;

    // Display total marks and aggregate
    cout << "\nTotal Marks: " << totalMarks << endl;
    cout << "Aggregate: " << aggregate << "%" << endl;

    // Determine the grade based on aggregate
    cout << "Grade: ";
    if (aggregate > 75) {
        cout << "Distinction" << endl;
    } else if (aggregate >= 60 && aggregate < 75) {
        cout << "First Division" << endl;
    } else if (aggregate >= 50 && aggregate < 60) {
        cout << "Second Division" << endl;
    } else if (aggregate >= 40 && aggregate < 50) {
        cout << "Third Division" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}

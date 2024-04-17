#include <iostream>
using namespace std;
// Function to add two integers
int add(int a, int b) {
    return a + b;
}
// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}
// Function to add two doubles
double add(double a, double b) {
    return a + b;
}
int main() {
    // Adding two integers
    int sum1 = add(5, 3);
    cout << "Sum of 5 and 3 is: " << sum1 << endl;
    // Adding three integers
    int sum2 = add(5, 3, 2);
    cout << "Sum of 5, 3, and 2 is: " << sum2 << endl;
    // Adding two doubles
    double sum3 = add(3.5, 2.5);
    cout << "Sum of 3.5 and 2.5 is: " << sum3 << endl;
    return 0;
}

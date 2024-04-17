#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Square root of negative numbers is not defined!" << endl;
    }
    else {
        double squareRoot = sqrt(num); 
        cout << "Square root of " << num << " is: " << squareRoot << endl;
    }
    return 0;
}

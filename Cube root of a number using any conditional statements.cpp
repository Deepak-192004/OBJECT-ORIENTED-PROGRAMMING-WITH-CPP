#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0) {
        cout << "Cube root of negative numbers is not defined!" << endl;
    } else {
        double cubeRoot;
        if (num == 0) {
            cubeRoot = 0;
        } else if (num > 0) {
            cubeRoot = pow(num, 1.0/3.0); 
        }

        cout << "Cube root of " << num << " is: " << cubeRoot << endl;
    }
    return 0;
}

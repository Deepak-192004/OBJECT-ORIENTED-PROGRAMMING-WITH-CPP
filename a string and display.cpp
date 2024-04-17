#include <iostream>
using namespace std;

int main() {
    // Create a double variable
    double value = 3.14159;

    // Create a pointer to a double and point it to the address of the variable
    double* ptrToDouble = &value;

    // Display the value of the double through the pointer
    cout << "Value through pointer: " << *ptrToDouble << endl;

    return 0;
}

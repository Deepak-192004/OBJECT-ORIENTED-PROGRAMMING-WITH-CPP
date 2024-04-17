#include <iostream>

int main() {
    double doubleValue = 3.14159; // Define a double variable
    double *doublePtr = &doubleValue; // Create a pointer to the double variable

    // Display the value of the double using the pointer
    std::cout << "Value of the double: " << *doublePtr << std::endl;

    return 0;
}
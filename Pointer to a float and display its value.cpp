#include <iostream>

int main() {
    float floatValue = 3.14f; // Define a float variable
    float *floatPtr = &floatValue; // Create a pointer to the float variable

    // Display the value of the float using the pointer
    std::cout << "Value of the float: " << *floatPtr << std::endl;

    return 0;
}
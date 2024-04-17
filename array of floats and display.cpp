#include <iostream>

int main() {
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f}; // Define an array of floats
    float *floatPtr = floatArr; // Create a pointer to the array

    // Display the value of the array using the pointer
    std::cout << "Value of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(floatPtr + i) << " "; // Dereference the pointer to access array elements
    }
    std::cout << std::endl;

    return 0;
}
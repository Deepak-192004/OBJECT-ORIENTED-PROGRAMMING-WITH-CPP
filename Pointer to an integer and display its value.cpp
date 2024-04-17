#include <iostream>
int main() {
    int num = 10; // Define an integer variable
    int *ptr = &num; // Create a pointer to the integer variable

    // Display the value of the integer using the pointer
    std::cout << "Value of the integer: " << *ptr << std::endl;

    return 0;
}
#include <iostream>

int main() {
    char charValue = 'A'; // Define a char variable
    char *charPtr = &charValue; // Create a pointer to the char variable

    // Display the value of the char using the pointer
    std::cout << "Value of the char: " << *charPtr << std::endl;

    return 0;
}
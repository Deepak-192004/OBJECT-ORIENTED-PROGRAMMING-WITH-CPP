#include <iostream>
#include <string>

int main() {
    std::string stringValue = "Hello, world!"; // Define a string variable
    std::string *stringPtr = &stringValue; // Create a pointer to the string variable

    // Display the value of the string using the pointer
    std::cout << "Value of the string: " << *stringPtr << std::endl;

    return 0;
}
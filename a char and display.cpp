#include <iostream>

int main() {
    // Declare a char variable
    char myChar = 'A';

    // Declare a pointer to a char and initialize it with the address of myChar
    char *charPtr = &myChar;

    // Display the value of the char using the pointer
    std::cout << "Value of charPtr: " << *charPtr << std::endl;

    return 0;
}

#include <iostream>

int main() {
    char charArr[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // Define an array of characters (string)
    char *charPtr = charArr; // Create a pointer to the array

    // Display the value of the array using the pointer
    std::cout << "Value of the array: ";
    while (*charPtr != '\0') {
        std::cout << *charPtr; // Dereference the pointer to access array elements
        charPtr++; // Move the pointer to the next element
    }
    std::cout << std::endl;

    return 0;
}
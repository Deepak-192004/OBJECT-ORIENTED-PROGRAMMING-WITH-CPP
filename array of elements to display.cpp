#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Define an array of integers
    int *arrPtr = arr; // Create a pointer to the array

    // Display the values of the array using the pointer
    std::cout << "Values of the array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << *(arrPtr + i) << " "; // Dereference the pointer to access array elements
    }
    std::cout << std::endl;

    return 0;
}
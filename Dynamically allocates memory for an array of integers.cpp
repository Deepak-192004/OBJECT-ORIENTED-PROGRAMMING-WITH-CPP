#include <iostream>
#include <cstdlib> // For std::exit

int main() {
    int size;
    
    // Ask user for the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Dynamically allocate memory for the array
    int* arr = new (std::nothrow) int[size];
    if (arr == nullptr) {
        std::cerr << "Failed to allocate memory. Exiting program.\n";
        std::exit(EXIT_FAILURE);
    }

    // Input elements into the array
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    // Print the elements of the array
    std::cout << "The elements of the array are:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Deallocate the dynamically allocated memory
    delete[] arr;

    return 0;
}

#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a pointer to a function that takes two integers as arguments and returns an integer
    int (*funcPtr)(int, int);

    // Assign the address of the add function to the pointer
    funcPtr = &add;

    // Call the function using the pointer
    int result = funcPtr(3, 4);

    // Display the result
    std::cout << "Result of adding 3 and 4: " << result << std::endl;

    return 0;
}
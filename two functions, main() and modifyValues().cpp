#include <iostream>

// Function prototype
void modifyValues(int *ptr1, int *ptr2);

int main() {
    int num1 = 10;
    int num2 = 20;

    std::cout << "Before calling modifyValues() function:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    // Call modifyValues function, passing pointers to num1 and num2
    modifyValues(&num1, &num2);

    std::cout << "After calling modifyValues() function:" << std::endl;
    std::cout << "num1 = " << num1 << ", num2 = " << num2 << std::endl;

    return 0;
}

// Function to modify the values of variables pointed to by pointers
void modifyValues(int *ptr1, int *ptr2) {
    *ptr1 = 100; // Modify value of num1 through pointer ptr1
    *ptr2 = 200; // Modify value of num2 through pointer ptr2
}

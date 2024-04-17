#include <iostream>

int main() {
    int num1, num2, num3;
    double average;

    // Input
    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    // Compute average
    average = (num1 + num2 + num3) / 3.0;

    // Output
    std::cout << "The average of the three numbers is: " << average << std::endl;

    return 0;
}

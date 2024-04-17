#include <iostream>

int main() {
    int integerNumber;
    float floatNumber;
    std::cout << "Enter an integer number: ";
    std::cin >> integerNumber;
    std::cout << "Enter a float number: ";
    std::cin >> floatNumber;
    if (integerNumber != 0) {
        float result = floatNumber / integerNumber;
        std::cout << "Result of floatNumber / integerNumber = " << result << std::endl;
    } else {
        std::cout << "Cannot divide by zero." << std::endl;
    }
    
    return 0;
}


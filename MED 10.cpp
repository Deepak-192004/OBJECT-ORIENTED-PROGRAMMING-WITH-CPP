#include <iostream>
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
     
        unsigned long long fact = factorial(number);
        std::cout << "Factorial of " << number << " is: " << fact << std::endl;
    }

    return 0;
}


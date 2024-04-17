#include <iostream>

int main() {
    try {
        // Outer try block
        try {
            // Inner try block
            int numerator = 10;
            int denominator = 5;
            int result = numerator / denominator; // This will throw an exception
            std::cout << "Result: " << result << std::endl;
        } catch(const std::exception& e) {
            std::cerr << "Inner Exception caught: " << e.what() << std::endl;
        }

        // This code block will still execute even if an exception occurred in the inner try block
        std::cout << "Outside inner try block" << std::endl;

        // Simulating another exception
        throw std::runtime_error("Outer Exception");
    } catch(const std::exception& e) {
        std::cerr << "Outer Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

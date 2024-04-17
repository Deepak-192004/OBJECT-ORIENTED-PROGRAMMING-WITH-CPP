#include <iostream>
#include <stdexcept> // Including the <stdexcept> header for std::runtime_error

int main() {
    try {
        int numerator = 10;
        int denominator = 0;

        if (denominator == 0) {
            // Throwing a std::runtime_error
            throw std::runtime_error("Denominator cannot be zero");
        }

        int result = numerator / denominator; // This will throw an exception
        std::cout << "Result: " << result << std::endl;
    } catch(const std::runtime_error& e) {
        std::cerr << "Runtime Error caught: " << e.what() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Standard Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

#include <iostream>
#include <stdexcept>

void functionA() {
    int numerator = 10;
    int denominator = 0;

    if (denominator == 0) {
        throw std::runtime_error("Denominator cannot be zero");
    }

    int result = numerator / denominator;
    std::cout << "Result: " << result << std::endl;
}

void functionB() {
    throw std::logic_error("Logic Error occurred");
}

int main() {
    try {
        // Calling functionA
        functionA();
    } catch(const std::runtime_error& e) {
        std::cerr << "Runtime Error caught: " << e.what() << std::endl;
    } catch(const std::logic_error& e) {
        std::cerr << "Logic Error caught: " << e.what() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Standard Exception caught: " << e.what() << std::endl;
    }

    try {
        // Calling functionB
        functionB();
    } catch(const std::logic_error& e) {
        std::cerr << "Logic Error caught: " << e.what() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Standard Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

#include <iostream>
#include <stdexcept> // Including the <stdexcept> header for std::runtime_error

void checkNumber(int number) {
    if (number <= 0) {
        throw std::runtime_error("Number must be positive");
    }
}

int main() {
    try {
        int userInput;
        std::cout << "Enter a positive number: ";
        std::cin >> userInput;

        checkNumber(userInput);

        std::cout << "You entered: " << userInput << std::endl;
    } catch(const std::runtime_error& e) {
        std::cerr << "Runtime Error caught: " << e.what() << std::endl;
    }

    return 0;
}

#include <iostream>
#include <stdexcept>

// Custom exception class derived from std::exception
class MyException : public std::exception {
public:
    // Constructor accepting a message
    MyException(const char* message) : m_message(message) {}

    // Override what() function to return the exception message
    const char* what() const noexcept override {
        return m_message.c_str();
    }

private:
    std::string m_message;
};

int main() {
    try {
        int userInput;
        std::cout << "Enter a positive number: ";
        std::cin >> userInput;

        if (userInput <= 0) {
            // Throw custom exception if input is not positive
            throw MyException("Input must be a positive number");
        }

        std::cout << "You entered: " << userInput << std::endl;
    } catch(const MyException& e) {
        std::cerr << "Custom Exception caught: " << e.what() << std::endl;
    } catch(const std::exception& e) {
        std::cerr << "Standard Exception caught: " << e.what() << std::endl;
    }

    return 0;
}

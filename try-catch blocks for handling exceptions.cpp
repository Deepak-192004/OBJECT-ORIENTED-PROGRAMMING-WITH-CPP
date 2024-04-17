#include <iostream>

int main() {
    try {
        int numerator, denominator;
        
        // Prompt user for input
        std::cout << "Enter the numerator: ";
        std::cin >> numerator;
        std::cout << "Enter the denominator: ";
        std::cin >> denominator;

        // Check if denominator is zero
        if (denominator == 0) {
            throw "Division by zero error";
        }

        // Perform the division
        double result = static_cast<double>(numerator) / denominator;

        // Output the result
        std::cout << "Result of division: " << result << std::endl;
    } catch (const char* message) {
        // Catch block for handling exceptions of type const char*
        std::cerr << "Exception caught: " << message << std::endl;
    } catch (const std::exception& e) {
        // Catch block for handling other standard exceptions
        std::cerr << "Standard Exception caught: " << e.what() << std::endl;
    } catch (...) {
        // Catch block for handling any other types of exceptions
        std::cerr << "Unknown Exception caught" << std::endl;
    }

    return 0;
}

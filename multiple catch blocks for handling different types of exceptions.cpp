#include <iostream>
#include <stdexcept>

void divide(int a, int b) {
    try {
        if (b == 0) {
            throw std::runtime_error("Division by zero error");
        }
        int result = a / b;
        std::cout << "Result of division: " << result << std::endl;
    } catch (const std::runtime_error& e) {
        std::cerr << "Runtime error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown exception occurred" << std::endl;
    }
}

int main() {
    int x, y;
    std::cout << "Enter two integers (x and y): ";
    std::cin >> x >> y;

    divide(x, y);

    return 0;
}

#include <iostream>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Print leading spaces
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        // Print left half of the pattern
        for (int j = i; j < i * 2; ++j) {
            std::cout << j;
        }

        // Print right half of the pattern
        for (int j = i * 2 - 2; j >= i; --j) {
            std::cout << j;
        }

        std::cout << std::endl;
    }

    return 0;
}

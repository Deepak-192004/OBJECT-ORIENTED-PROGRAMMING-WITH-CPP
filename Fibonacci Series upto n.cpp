#include <iostream>

// Function to calculate the Fibonacci sequence recursively
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter the number of terms for Fibonacci sequence: ";
    std::cin >> n;

    std::cout << "Fibonacci sequence up to " << n << " terms:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << fibonacci(i) << " ";
    }

    return 0;
}

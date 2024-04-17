#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int max = num1; 

    if (num2 > max) {
        max = num2; 
    }

    if (num3 > max) {
        max = num3; 
    }

    
    std::cout << "The maximum of " << num1 << ", " << num2 << ", and " << num3 << " is: " << max << std::endl;

    return 0;
}

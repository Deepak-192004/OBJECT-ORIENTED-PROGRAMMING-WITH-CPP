#include <iostream>
using namespace std;

class Adder {
public:
    Adder() {} // Default constructor

    Adder(int num1, int num2) : number1(num1), number2(num2) {} // Constructor with parameters

    int sum() const {
        return number1 + number2;
    }

private:
    int number1;
    int number2;
};

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    Adder adder(num1, num2); // Create an instance with the given numbers
    int result = adder.sum(); // Calculate the sum

    cout << "Sum of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}


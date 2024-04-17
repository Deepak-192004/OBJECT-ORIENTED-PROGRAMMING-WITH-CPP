#include <iostream>
using namespace std;

class NumberReverser {
public:
    NumberReverser() {} // Default constructor

    // Constructor with parameter to set the number
    NumberReverser(int num) : number(num) {}

    // Function to reverse the number
    int reverseNumber() {
        int reversed = 0;
        int remainder;
        int temp = number;

        while (temp != 0) {
            remainder = temp % 10;
            reversed = reversed * 10 + remainder;
            temp /= 10;
        }

        return reversed;
    }

private:
    int number;
};

int main() {
    int num;

    cout << "Enter a number to reverse: ";
    cin >> num;

    NumberReverser reverser(num); // Create an instance with the given number
    int reversedNumber = reverser.reverseNumber(); // Reverse the number

    cout << "Reverse of " << num << " is: " << reversedNumber << endl;

    return 0;
}


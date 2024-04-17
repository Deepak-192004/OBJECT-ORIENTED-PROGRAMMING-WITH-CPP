#include <iostream>
#include <cmath>
using namespace std;

// Class declaration
class DecimalToBinary {
private:
    long long binary;

public:
    // Constructor to convert decimal to binary
    DecimalToBinary(int decimal) {
        binary = 0;
        int remainder, i = 0;
        while (decimal != 0) {
            remainder = decimal % 2;
            binary += remainder * pow(10, i);
            decimal /= 2;
            i++;
        }
    }

    // Function to display binary
    void displayBinary() {
        cout << "Binary representation: " << binary << endl;
    }
};

int main() {
    // Input decimal number
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    // Create object of DecimalToBinary class
    DecimalToBinary obj(decimal);

    // Display binary representation
    obj.displayBinary();

    return 0;
}

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class BinaryToOctalConverter {
public:
    BinaryToOctalConverter() {} // Default constructor

    // Constructor with parameter to set the binary number
    BinaryToOctalConverter(const string& binary) : binaryNumber(binary) {}

    // Function to perform binary to octal conversion
    string convertToOctal() {
        // Convert binary string to decimal integer
        int decimalNumber = binaryToDecimal(binaryNumber);

        // Convert decimal to octal
        string octal = decimalToOctal(decimalNumber);

        return octal;
    }

private:
    string binaryNumber;

    // Function to convert binary string to decimal integer
    int binaryToDecimal(const string& binary) {
        int decimalNumber = 0;
        for (size_t i = 0; i < binary.length(); i++) {
            decimalNumber = decimalNumber * 2 + (binary[i] - '0');
        }
        return decimalNumber;
    }

    // Function to convert decimal to octal
    string decimalToOctal(int decimal) {
        stringstream ss;
        ss << oct << decimal; // Set the stream to interpret integers as octal
        return ss.str();
    }
};

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctalConverter converter(binary); // Create an instance with the given binary number
    string octalNumber = converter.convertToOctal(); // Perform binary to octal conversion

    cout << "Octal equivalent: " << octalNumber << endl;

    return 0;
}


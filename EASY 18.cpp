#include <iostream>
using namespace std;

class ComplexNumber {
public:
    ComplexNumber(double real, double imaginary) : realPart(real), imaginaryPart(imaginary) {}

    void printValues() const {
        cout << "The real part is " << realPart << endl;
        cout << "The imaginary part is " << imaginaryPart << endl;
    }

private:
    double realPart;
    double imaginaryPart;
};

int main() {
    ComplexNumber number(1, 54);
    ComplexNumber* ptrNumber = &number;

    ptrNumber->printValues();

    return 0;
}


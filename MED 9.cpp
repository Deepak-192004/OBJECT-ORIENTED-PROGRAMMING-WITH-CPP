#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
   
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    
    void display() const {
        std::cout << real << (imaginary >= 0 ? "+" : "") << imaginary << "i" << std::endl;
    }
};

int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.5, 2.5);
    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    std::cout << "Sum: ";
    sum.display();
    std::cout << "Difference: ";
    difference.display();

    return 0;
}


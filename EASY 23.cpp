#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for calculating area
};

class Square : public Shape {
public:
    Square(double length) : sideLength(length) {}

    double area() const override {
        return sideLength * sideLength;
    }

private:
    double sideLength;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius(radius) {}

    double area() const override {
        return 3.14159 * radius * radius;
    }

private:
    double radius;
};

int main() {
    double circleRadius, squareLength;

    cout << "Enter radius of the circle: ";
    cin >> circleRadius;

    cout << "Enter the length of the square: ";
    cin >> squareLength;

    Square square(squareLength);
    Circle circle(circleRadius);

    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() << endl;

    return 0;
}


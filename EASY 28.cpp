#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    Shape() {} // Default constructor

    Shape(int s) : side(s) {} // Constructor with parameter

    // Pure virtual function for calculating area
    virtual double area() const = 0;

protected:
    int side;
};

// Derived class Rectangle from Shape
class Rectangle : public Shape {
public:
    Rectangle(int l, int w) : length(l), width(w) {} // Constructor with parameters

    // Override area function to calculate area of rectangle
    double area() const override {
        return length * width;
    }

protected:
    int length;
    int width;
};

// Derived class Cuboid from Rectangle and Shape
class Cuboid : public Rectangle {
public:
    Cuboid(int l, int w, int h) : Rectangle(l, w), height(h) {} // Constructor with parameters

    // Calculate volume of cuboid using area of base (rectangle) and height
    double volume() const {
        return area() * height;
    }

private:
    int height;
};

int main() {
    int length, width, height;

    cout << "Enter length of cuboid: ";
    cin >> length;

    cout << "Enter width of cuboid: ";
    cin >> width;

    cout << "Enter height of cuboid: ";
    cin >> height;

    Cuboid cuboid(length, width, height);
    cout << "Area of cuboid: " << cuboid.area() << endl;
    cout << "Volume of cuboid: " << cuboid.volume() << endl;

    return 0;
}


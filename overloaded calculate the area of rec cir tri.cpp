#include <iostream>

// Function to calculate the area of a rectangle
double area_rect(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double area_circle(double radius) {
    return 3.14159265358979323846 * radius * radius;
}

// Function to calculate the area of a triangle
double area_triangle(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    // Rectangle
    double rectangleLength = 5.0;
    double rectangleWidth = 3.0;
    std::cout << "Area of rectangle: " << area_rect(rectangleLength, rectangleWidth) << std::endl;

    // Circle
    double circleRadius = 2.5;
    std::cout << "Area of circle: " << area_circle(circleRadius) << std::endl;

    // Triangle
    double triangleBase = 4.0;
    double triangleHeight = 6.0;
    std::cout << "Area of triangle: " << area_triangle(triangleBase, triangleHeight) << std::endl;

    return 0;
}

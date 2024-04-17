#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

class Shape {
public:
    // Default constructor
    Shape() {}

    // Constructor for Cube
    Shape(double sideLength) {
        volume_cube = sideLength * sideLength * sideLength;
    }

    // Constructor for Cylinder
    Shape(double radius, double height) {
        volume_cylinder = PI * radius * radius * height;
    }

    // Display results
    void displayResults() {
        if (volume_cube > 0)
            std::cout << "Volume of Cube: " << volume_cube << std::endl;
        if (volume_cylinder > 0)
            std::cout << "Volume of Cylinder: " << volume_cylinder << std::endl;
    }

private:
    double volume_cube = 0;
    double volume_cylinder = 0;
};

int main() {
    double sideLength, radius, height;

    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;

    std::cout << "Enter the radius and height of the cylinder: ";
    std::cin >> radius >> height;

    Shape cube(sideLength); // Create cube object
    Shape cylinder(radius, height); // Create cylinder object

    // Display results
    cube.displayResults();
    cylinder.displayResults();

    return 0;
}

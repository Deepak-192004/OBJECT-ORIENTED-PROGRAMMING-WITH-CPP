#include <iostream>
using namespace std;

class Shape {
public:
    Shape() {} // Default constructor

    // Constructor for cube
    Shape(double side) {
        cout << "Volume of Cube: " << side * side * side << " cubic units" << endl;
    }

    // Constructor for cylinder
    Shape(double radius, double height) {
        cout << "Volume of Cylinder: " << 3.14159 * radius * radius * height << " cubic units" << endl;
    }
};

int main() {
    double side, radius, height;

    cout << "Enter the side length of the cube: ";
    cin >> side;
    Shape cube(side);

    cout << "Enter the radius and height of the cylinder: ";
    cin >> radius >> height;
    Shape cylinder(radius, height);

    return 0;
}
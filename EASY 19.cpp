#include <iostream>
using namespace std;

class Rectangle {
public:
    Rectangle() {} // Default constructor

    Rectangle(double l, double w) : length(l), width(w) {} // Constructor with parameters

    double calculateArea() const {
        return length * width;
    }

private:
    double length;
    double width;
};

int main() {
    const int size = 3; // Number of rectangles
    Rectangle rectangles[size];

    // Initialize rectangles with length and width
    rectangles[0] = Rectangle(5, 10);
    rectangles[1] = Rectangle(7, 3);
    rectangles[2] = Rectangle(8, 6);

    // Calculate and print the areas of rectangles
    for (int i = 0; i < size; i++) {
        double area = rectangles[i].calculateArea();
        cout << "Area of rectangle " << (i + 1) << ": " << area << endl;
    }

    return 0;
}



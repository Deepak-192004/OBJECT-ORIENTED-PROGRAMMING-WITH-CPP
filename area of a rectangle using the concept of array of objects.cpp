#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Default constructor
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // Parameterized constructor
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    const int num_rectangles = 3; // Number of rectangles
    Rectangle rectangles[num_rectangles]; // Array of Rectangle objects

    // Input values for each rectangle
    for (int i = 0; i < num_rectangles; ++i) {
        double length, width;
        std::cout << "Enter length and width of rectangle " << i + 1 << ": ";
        std::cin >> length >> width;
        rectangles[i] = Rectangle(length, width);
    }

    // Calculate and print the area of each rectangle
    for (int i = 0; i < num_rectangles; ++i) {
        double area = rectangles[i].calculateArea();
        std::cout << "Area of rectangle " << i + 1 << ": " << area << std::endl;
    }

    return 0;
}

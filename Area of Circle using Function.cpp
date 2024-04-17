#include <iostream>
using namespace std;
const double PI = 3.14159;
double areaOfCircle(double radius) {
    return PI * radius * radius;
}
int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = areaOfCircle(radius);
    cout << "Area of the circle with radius " << radius << " is " << area << endl;
    return 0;
}

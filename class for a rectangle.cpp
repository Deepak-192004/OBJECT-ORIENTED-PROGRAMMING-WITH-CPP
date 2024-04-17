#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
        cout << "Rectangle created with length " << length << " and width " << width << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destroyed with length " << length << " and width " << width << endl;
    }
    double calculateArea() {
        return length * width;
    }
    void displayArea() {
        cout << "Area of the rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle myRectangle(5.0, 3.0); 
    myRectangle.displayArea();
    return 0;
}

#include <iostream>
using namespace std;
class Box {
public:
    // Public member variable
    int length;
    // Setter function to set the value of width
    void setWidth(int w) {
        width = w;
    }
    // Getter function to get the value of width
    int getWidth() {
        return width;
    }
    // Function to print length and width
    void printDimensions() {
        cout << "Length: " << length << ", Width: " << width << endl;
    }
private:
    // Private member variable
    int width;
};
int main() {
    // Create an object of the Box class
    Box box;
    // Set the values of length and width
    box.length = 10;
    box.setWidth(5);
    // Print the dimensions
    cout << "Dimensions of the box:" << endl;
    box.printDimensions();
    return 0;
}

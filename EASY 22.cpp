#include <iostream>
using namespace std;

class Example {
public:
    Example(int x) {
        this->x = x; // Assign the value of x using the this pointer
    }

    void display() {
        cout << "Value of x using this pointer: " << this->x << endl;
    }

private:
    int x;
};

int main() {
    int x_input = 20; // Input value for x
    Example obj(x_input); // Create an instance of Example class with input value for x
    obj.display(); // Call the display function to show the value of x using the this pointer

    return 0;
}


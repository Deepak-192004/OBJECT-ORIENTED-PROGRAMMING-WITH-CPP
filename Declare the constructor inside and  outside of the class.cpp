#include <iostream>
using namespace std;

// Class declaration
class MyClass {
private:
    int num;

public:
    // Constructor declaration inside the class
    MyClass(int n);

    // Function to display the value of num
    void display();
};

// Constructor definition outside the class
MyClass::MyClass(int n) {
    num = n;
}

// Function definition to display the value of num
void MyClass::display() {
    cout << "Value of num: " << num << endl;
}

int main() {
    // Create an object of MyClass and initialize it with value 10
    MyClass obj(10);

    // Display the value of num using the display function
    obj.display();

    return 0;
}

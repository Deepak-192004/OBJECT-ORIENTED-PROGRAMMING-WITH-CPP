#include <iostream>
using namespace std;

// Base class A
class A {
public:
    A(int xValue) : x(xValue) {}

protected:
    int x;
};

// Derived class B privately inheriting from A
class B : private A {
public:
    B(int xValue) : A(xValue) {}

    void displayX() {
        cout << "Value of x: " << x << endl; // Accessing x, which is now a private member of B
    }
};

int main() {
    // Input value for x
    int xValue = 10;

    // Create an instance of class B
    B obj(xValue);

    // Call member function to display value of x
    obj.displayX();

    return 0;
}


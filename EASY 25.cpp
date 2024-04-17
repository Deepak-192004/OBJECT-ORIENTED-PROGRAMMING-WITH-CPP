#include <iostream>
using namespace std;

// Base class A
class A {
public:
    A(int aValue) : a(aValue) {}

    void displayA() const {
        cout << "Value of a: " << a << endl;
    }

protected:
    int a;
};

// Base class B
class B {
public:
    B(int bValue) : b(bValue) {}

    void displayB() const {
        cout << "Value of b: " << b << endl;
    }

protected:
    int b;
};

// Derived class C inheriting from both A and B
class C : public A, public B {
public:
    C(int aValue, int bValue, int cValue) : A(aValue), B(bValue), c(cValue) {}

    void displayC() const {
        cout << "Value of c: " << c << endl;
    }

private:
    int c;
};

int main() {
    // Input values for a, b, and c
    int aValue = 100;
    int bValue = 200;
    int cValue = 300;

    // Create an instance of class C
    C obj(aValue, bValue, cValue);

    // Call member functions to display values
    obj.displayA();
    obj.displayB();
    obj.displayC();

    return 0;
}


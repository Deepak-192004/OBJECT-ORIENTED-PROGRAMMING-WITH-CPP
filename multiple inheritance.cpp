#include <iostream>

// Base class A
class A {
protected:
    int a;
public:
    A(int value_a) : a(value_a) {}
};

// Base class B
class B {
protected:
    int b;
public:
    B(int value_b) : b(value_b) {}
};

// Derived class C inheriting from A and B
class C : public A, public B {
private:
    int c;
public:
    C(int value_a, int value_b, int value_c) : A(value_a), B(value_b), c(value_c) {}

    void display() {
        std::cout << "Value of a: " << a << std::endl;
        std::cout << "Value of b: " << b << std::endl;
        std::cout << "Value of c: " << c << std::endl;
    }
};

int main() {
    // Input values
    int a_value = 100;
    int b_value = 200;
    int c_value = 300;

    // Create object of class C
    C obj(a_value, b_value, c_value);

    // Display values
    obj.display();

    return 0;
}

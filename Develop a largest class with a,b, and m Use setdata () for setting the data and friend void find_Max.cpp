#include <iostream>

class Largest {
private:
    int a;
    int b;
public:
    Largest() {}

    void setData(int num1, int num2) {
        a = num1;
        b = num2;
    }

    friend void find_Max(Largest obj);
};

// Friend function to find the maximum number
void find_Max(Largest obj) {
    if (obj.a > obj.b) {
        std::cout << "Maximum number is " << obj.a << std::endl;
    } else {
        std::cout << "Maximum number is " << obj.b << std::endl;
    }
}

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    Largest obj;
    obj.setData(num1, num2);

    find_Max(obj);

    return 0;
}

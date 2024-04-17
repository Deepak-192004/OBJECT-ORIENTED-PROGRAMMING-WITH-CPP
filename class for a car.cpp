#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Creating " << brand << " " << model << ", " << year << endl;
    }
    ~Car() {
        cout << "Destroying " << brand << " " << model << ", " << year << endl;
    }
    void displayDetails() {
        cout << "Car Details: " << brand << " " << model << ", " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", "Corolla", 2020); 
    myCar.displayDetails();
    return 0;
}

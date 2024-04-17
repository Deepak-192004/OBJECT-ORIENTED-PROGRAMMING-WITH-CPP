#include <iostream>
#include <string> // Include the <string> header for string usage
using namespace std;

class Car {
private:
    int id;
    string name;
    int marks;
    static int count;

public:
    // Constructor to initialize member variables
    Car(int id, string name, int marks) {
        this->id = id;
        this->name = name;
        this->marks = marks;
        count++;
    }

    // Function to display details of a car
    void display() {
        cout << "Id of the Car: " << id << endl;
        cout << "Name of the Car: " << name << endl;
        cout << "Marks: " << marks << endl << endl;
    }

    // Static function to display the count of objects created
    static void displayCount() {
        cout << "No. of objects created in the class: " << count << endl;
    }
};

// Initialize the static member variable
int Car::count = 0;

int main() {
    // Create car objects
    Car car1(101, "Ferrari", 10);
    Car car2(205, "Mercedes", 9);

    // Display details of car objects
    car1.display();
    car2.display();

    // Display count of objects created
    Car::displayCount();

    return 0;
}

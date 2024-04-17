#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
    char gender;
public:
    // Constructor
    Person(std::string n, int a, char g) : name(n), age(a), gender(g) {}

    // Function to display attributes
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Gender: " << gender << std::endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person("John", 30, 'M');

    // Create a pointer to the object
    Person *personPtr = &person;

    // Display attributes using the pointer
    std::cout << "Attributes of the person:" << std::endl;
    personPtr->display(); // Access object's member function using pointer

    return 0;
}
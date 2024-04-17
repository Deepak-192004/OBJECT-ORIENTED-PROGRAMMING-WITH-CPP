#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;

public:
    Student(string studentName, int studentId) : name(studentName), id(studentId) {
        cout << "Student created: " << name << " with ID: " << id << endl;
    }
    ~Student() {
        cout << "Student destroyed: " << name << " with ID: " << id << endl;
    }
    void displayDetails() {
        cout << "Student Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Student student1("Alice", 101);
    student1.displayDetails();
    return 0;
}

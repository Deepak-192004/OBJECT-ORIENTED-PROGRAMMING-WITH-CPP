#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;

public:
    // Function to get data
    void getData() {
        cout << "Enter name: ";
        cin >> name;
    }

    // Function to display data
    void displayData() {
        cout << "Name: " << name << endl;
    }

    // Virtual function for bonus calculation
    virtual double calculateBonus(double salary) = 0;
};

// Derived class Admin
class Admin : public Person {
public:
    // Override getData
    void getData() {
        Person::getData();
    }

    // Override displayData
    void displayData() {
        Person::displayData();
    }

    // Override calculateBonus
    double calculateBonus(double salary) {
        return salary * 1.1; // 10% bonus for Admin
    }
};

// Derived class Account
class Account : public Person {
public:
    // Override getData
    void getData() {
        Person::getData();
    }

    // Override displayData
    void displayData() {
        Person::displayData();
    }

    // Override calculateBonus
    double calculateBonus(double salary) {
        return salary * 1.1; // 10% bonus for Account
    }
};

// Derived class Master
class Master : public Admin, public Account {
public:
    // Override getData to get data from both Admin and Account
    void getData() {
        Admin::getData();
        Account::getData();
    }

    // Override displayData to display data from both Admin and Account
    void displayData() {
        Admin::displayData();
        Account::displayData();
    }

    // Override calculateBonus to calculate the bonus based on Admin's bonus
    double calculateBonus(double salary) {
        return Admin::calculateBonus(salary);
    }
};

int main() {
    double salary;
    cout << "Enter salary: ";
    cin >> salary;

    Master m;
    m.getData();

    cout << "Bonus = " << m.calculateBonus(salary) << endl;

    return 0;
}

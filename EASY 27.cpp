#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    virtual int calculateBonus(int salary) const = 0;
};

class Admin : public Person {
public:
    int calculateBonus(int salary) const override {
        return salary * 0.1; // 10% bonus for admins
    }
};

class Account : public Person {
public:
    int calculateBonus(int salary) const override {
        return salary * 0.1 + 1000; // 10% bonus plus additional 1000 for accounts
    }
};

int main() {
    Admin adminEmployee;
    Account accountEmployee;
    int salary;

    cout << "Admin Employee:" << endl;
    adminEmployee.getData();
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Salary: " << salary << endl;
    cout << "Bonus: " << adminEmployee.calculateBonus(salary) << endl;
    cout << "Total Salary: " << salary + adminEmployee.calculateBonus(salary) << endl;

    cout << "\nAccount Employee:" << endl;
    accountEmployee.getData();
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Salary: " << salary << endl;
    cout << "Bonus: " << accountEmployee.calculateBonus(salary) << endl;
    cout << "Total Salary: " << salary + accountEmployee.calculateBonus(salary) << endl;

    return 0;
}

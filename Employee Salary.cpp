#include <iostream>
#include <string>

using namespace std;

// Base class Employee
class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(string empName, int empId, double empSalary) : name(empName), id(empId), salary(empSalary) {}

    // Getter and setter functions
    string getName() const { return name; }
    int getId() const { return id; }
    double getSalary() const { return salary; }

    void setName(string empName) { name = empName; }
    void setId(int empId) { id = empId; }
    void setSalary(double empSalary) { salary = empSalary; }
};

// Derived class Manager
class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    // Constructor
    Manager(string empName, int empId, double empSalary, string dept, double mgrBonus)
        : Employee(empName, empId, empSalary), department(dept), bonus(mgrBonus) {}

    // Getter and setter functions for Manager class
    string getDepartment() const { return department; }
    double getBonus() const { return bonus; }

    void setDepartment(string dept) { department = dept; }
    void setBonus(double mgrBonus) { bonus = mgrBonus; }
};

// Derived class Engineer
class Engineer : public Employee {
private:
    string specialty;
    int hours;

public:
    // Constructor
    Engineer(string empName, int empId, double empSalary, string spec, int engHours)
        : Employee(empName, empId, empSalary), specialty(spec), hours(engHours) {}

    // Getter and setter functions for Engineer class
    string getSpecialty() const { return specialty; }
    int getHours() const { return hours; }

    void setSpecialty(string spec) { specialty = spec; }
    void setHours(int engHours) { hours = engHours; }
};

int main() {
    // Create Manager object
    Manager manager("John Doe", 1001, 80000.0, "IT", 5000.0);

    // Create Engineer object
    Engineer engineer("Jane Smith", 2001, 60000.0, "Software", 40);

    // Print Manager details
    cout << "Manager Details:" << endl;
    cout << "Name: " << manager.getName() << endl;
    cout << "ID: " << manager.getId() << endl;
    cout << "Salary: $" << manager.getSalary() << endl;
    cout << "Department: " << manager.getDepartment() << endl;
    cout << "Bonus: $" << manager.getBonus() << endl;

    // Print Engineer details
    cout << "\nEngineer Details:" << endl;
    cout << "Name: " << engineer.getName() << endl;
    cout << "ID: " << engineer.getId() << endl;
    cout << "Salary: $" << engineer.getSalary() << endl;
    cout << "Specialty: " << engineer.getSpecialty() << endl;
    cout << "Hours: " << engineer.getHours() << endl;

    return 0;
}

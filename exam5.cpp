#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;

public:

    Employee(string n = "", double s = 0.0) : name(n), salary(s) {}

    void setName(const string& n) {
        name = n;
    }
    string getName() const {
        return name;
    }

    void setSalary(double s) {
        if (s >= 0) {
            salary = s;
        } else {
            cerr << "Salary must be non-negative." << endl;
        }
    }

    double getSalary() const {
        return salary;
    }

    Employee operator+(const Employee& other) const {
        Employee combined;
        combined.salary = this->salary + other.salary;
        return combined;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    Employee emp1("Alice", 50000.0);
    Employee emp2("Bob", 60000.0);

    
    Employee totalSalary = emp1 + emp2;
    cout << "Total Salary of " << emp1.getName() << " and " << emp2.getName() << " = " << totalSalary.getSalary() << endl;

    return 0;
}

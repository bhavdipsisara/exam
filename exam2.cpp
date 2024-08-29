#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;
    string designation;

public:
  
    Employee(string n = "", double s = 0.0, string d = "") 
        : name(n), salary(s), designation(d) {}

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

    void setDesignation(const string& d) {
        designation = d;
    }

    string getDesignation() const {
        return designation;
    }
};

int main() {
    Employee emp;

    emp.setName("John Doe");
    emp.setSalary(50000.0);
    emp.setDesignation("Software Engineer");

    cout << "Employee Name: " << emp.getName() << endl;
    cout << "Employee Salary: " << emp.getSalary() << endl;
    cout << "Employee Designation: " << emp.getDesignation() << endl;

    return 0;
}

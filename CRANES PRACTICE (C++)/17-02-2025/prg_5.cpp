#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    double salary;

public:
    void setDetails();  
    void displayDetails();  
};

void Employee::setDetails() {
    cout << "Enter Employee ID: ";
    cin >> empId;
    cout << "Enter Salary: ";
    cin >> salary;
}

void Employee::displayDetails() {
    cout << "\nEmployee Details:\n";
    cout << "Employee ID: " << empId << endl;
    cout << "Salary: $" << salary << endl;
}

int main() {
    Employee emp;
    emp.setDetails();
    emp.displayDetails();

    return 0;
}
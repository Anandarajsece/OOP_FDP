#include <iostream>
using namespace std;

class Employee {
private:
    static int totalEmployees; // Shared by all employees
    int empID;

public:
    // Constructor
    Employee(int id) {
        empID = id;
        totalEmployees++; // Increment static variable
    }

    // Normal Member Function (Object-Specific)
    void showEmpID() {
        cout << "Employee ID: " << empID << endl;
    }

    // Static Member Function (Class-Specific)
    static void showTotalEmployees() {
        cout << "Total Employees: " << totalEmployees << endl;
    }
};

// Initialize Static Member
int Employee::totalEmployees = 0;

int main() {
    Employee e1(101), e2(102), e3(103); // Creating employees

    e1.showEmpID(); // Instance function
    Employee::showTotalEmployees(); // Static function

    return 0;
}

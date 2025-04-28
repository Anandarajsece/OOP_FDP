#include <iostream>
using namespace std;

// Base class 1
class Person {
public:
    string name;
    int age;

    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }

    void showPersonDetails() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

// Base class 2
class Academic {
public:
    int studentID;
    float marks;

    void setAcademicDetails(int id, float m) {
        studentID = id;
        marks = m;
    }

    void showAcademicDetails() {
        cout << "Student ID: " << studentID << "\nMarks: " << marks << endl;
    }
};

// Derived class
class Student : public Person, public Academic {
public:
    void showStudentDetails() {
        cout << "\n--- Student Details ---\n";
        showPersonDetails();
        showAcademicDetails();
    }
};

// Main function
int main() {
    Student s;
    s.setPersonDetails("Sri Eshwar", 20);
    s.setAcademicDetails(1001, 89.5);
    s.showStudentDetails();
    return 0;
}

//Aggregation is a "has-a" relationship where one class contains another class as a member.
// It is used to represent a whole-part relationship.
// For example, a Department has a Professor as its head.
#include <iostream>
using namespace std;

class Professor 
{
public:
    void display() {
        cout << "Professor" << endl;
    }
};

class Department 
{
private:
    Professor* prof; // Aggregation: only a reference/pointer
public:
    Department(Professor* p) {
        prof = p;
    }

    void display() {
        cout << "Department" << endl;
        prof->display(); // Accessing the Professor object
    }
};

int main() {
    Professor prof;
    Department dept(&prof); // Passing external Professor object
    dept.display();

    return 0;
}

// In this example, the Department class contains a Professor object as a member.
// The Department class can access the Professor class's methods and attributes.
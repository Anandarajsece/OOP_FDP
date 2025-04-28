#include <iostream>
using namespace std;

class Demo {
private:
    int *ptr;  // Pointer for dynamic allocation

public:
    // Dynamic Constructor
    Demo(int val) {
        cout << "Dynamic Constructor Called!" << endl;
        ptr = new int;  // Allocate memory dynamically
        *ptr = val;  // Assign value
    }

    // Display Function
    void display() {
        cout << "Value: " << *ptr << endl;
    }

    // Destructor to Free Memory
    ~Demo() {
        cout << "Destructor Called! Freeing Memory." << endl;
        delete ptr;  // Free allocated memory
    }
};

int main() {
    Demo obj(10);  // Object creation, calls dynamic constructor
    obj.display(); // Display value

    return 0;  // Destructor is automatically called when obj goes out of scope
}

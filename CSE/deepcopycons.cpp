#include <iostream>
using namespace std;

class DeepCopyExample {
public:
    int *data;

    // Constructor
    DeepCopyExample(int value) 
    {
        data = new int(value); // Dynamically allocate memory
    }

    // Copy Constructor (Deep Copy)
    DeepCopyExample(const DeepCopyExample &obj) 
    {
        data = new int(*obj.data); // Allocating new memory and copying value
    }

    void display() 
    {
        cout << "Value: " << *data << endl;
    }

    // Destructor
    ~DeepCopyExample() 
    {
        delete data; // Properly deallocating memory
    }
};

int main() {
    DeepCopyExample obj1(10);
    DeepCopyExample obj2 = obj1; // Calls deep copy constructor

    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();

    // Modify obj1 to show that obj2 is independent
    *obj1.data = 20;
    cout << "\nAfter modifying obj1:\n";
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display(); // Should still have the old value (10)

    return 0;
}

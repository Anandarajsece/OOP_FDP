#include <iostream>
using namespace std;

class ShallowCopyExample {
public:
    int *data;

    // Constructor
    ShallowCopyExample(int value) 
    {
        data = new int(value); // Dynamically allocate memory
    }

    // Copy Constructor (Shallow Copy)
    ShallowCopyExample(const ShallowCopyExample &obj) 
    {
        data = obj.data;  // Copies the pointer, not the actual data
    }

    void display() 
    {
        cout << "Value: " << *data << endl;
    }

    // Destructor
    ~ShallowCopyExample()
     {
        delete data; // Deletes the dynamically allocated memory
    }
};

int main() {
    ShallowCopyExample obj1(10);
    ShallowCopyExample obj2 = obj1; // Shallow copy

    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();

    // Modify obj1
    *obj1.data = 30;
    cout << "\nAfter modifying obj1:\n";
    cout << "Object 1: ";
    obj1.display();
    cout << "Object 2: ";
    obj2.display();
    

    // Problem: When obj1 and obj2 go out of scope, both will try to delete the same memory location
    return 0;
}

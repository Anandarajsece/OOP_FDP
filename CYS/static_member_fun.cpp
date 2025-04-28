#include <iostream>
using namespace std;

class Example {
private:
    int instanceVar; // Instance (non-static) variable
    static int staticVar; // Static variable

public:
    // Constructor
    Example(int val) {
        instanceVar = val;
        staticVar++;
    }

    // Normal Member Function
    void display() { 
        cout << "Instance Variable: " << instanceVar << endl;
        cout << "Static Variable: " << staticVar << endl;
    }
};

// Initialize static member
int Example::staticVar = 0;

int main() {
    Example obj1(10), obj2(20);
    
    obj1.display(); // Called using object
    obj2.display(); // Called using another object

    return 0;
}

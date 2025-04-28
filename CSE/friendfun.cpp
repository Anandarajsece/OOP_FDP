#include <iostream>
using namespace std;
// This program demonstrates the use of friend functions in C++
// A friend function is a function that is defined outside a class but is allowed to access the private and protected members of the class.
class ClassName {
    private:
        // Private members
        int privateData;
    public:
        // Constructor to initialize privateData
        ClassName(int value) : privateData(value) {}
    
        // Friend function declaration
        friend void friendFunction(ClassName &obj);
    };
    
    void friendFunction(ClassName &obj) {
        // Friend function can access private members directly
        cout << "Private Data: " << obj.privateData << endl;
    }
    
    int main() {
        ClassName obj(42);  // Create an object of ClassName
        friendFunction(obj);  // Call friend function
    
        return 0;
    }
    
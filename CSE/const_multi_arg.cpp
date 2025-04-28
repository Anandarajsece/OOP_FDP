#include <iostream>
using namespace std;
class Example {
    private:
        int *ptr;
    public:
        Example(int val) {  // Dynamically allocate memory
            ptr = new int(val);
        }
    
        void display() {
            cout << "Stored value: " << *ptr << endl;
        }
    
        ~Example() {  // Destructor to free memory
            delete ptr;
        }
    };
    
    int main() {
        Example obj(42);
        obj.display();
        return 0;
    }
    
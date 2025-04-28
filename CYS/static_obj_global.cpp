//static global object 
#include <iostream>
using namespace std;

class Global {
public:
    Global() { 
        cout << "Global Static Object Created" << endl; 
    }
    ~Global() { 
        cout << "Global Static Object Destroyed" << endl; 
    }
};

// Static object with global scope
static Global g;

int main() {
    cout << "Main Function Execution" << endl;
    return 0;
}

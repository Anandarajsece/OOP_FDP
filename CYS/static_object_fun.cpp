#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { 
        cout << "Constructor Called" << endl; 
    }
    
    ~Demo() { 
        cout << "Destructor Called" << endl; 
    }

    void show() {
        cout << "Static Object is alive" << endl;
    }
};

void createStaticObject() {
    static Demo obj;  // Static Object (Initialized only once)
    obj.show();
}

int main() {
    cout << "First Call:" << endl;
    createStaticObject();  // Calls the function

    cout << "\nSecond Call:" << endl;
    createStaticObject();  // The object is not re-created

    cout << "\nEnd of main()" << endl;
    return 0; // Destructor is called at the end of the program
}

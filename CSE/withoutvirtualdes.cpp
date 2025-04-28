#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show function" << endl;
    }
    ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    Base* b = new Derived();
    b->show();
    delete b; // Undefined behavior: Only Base's destructor is called, Derived's destructor is not
    return 0;
}

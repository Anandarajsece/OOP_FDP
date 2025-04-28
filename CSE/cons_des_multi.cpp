#include <iostream>
using namespace std;

class Grandparent {
    public:
        Grandparent() { cout << "Grandparent Constructor\n"; }
        ~Grandparent() { cout << "Grandparent Destructor\n"; }
    };
    
    class Parent : public Grandparent {
    public:
        Parent() { cout << "Parent Constructor\n"; }
        ~Parent() { cout << "Parent Destructor\n"; }
    };
    
    class Child : public Parent {
    public:
        Child() { cout << "Child Constructor\n"; }
        ~Child() { cout << "Child Destructor\n"; }
    };
    
    int main() {
        Parent p; // Grandparent constructor and destructor will be called
        return 0;
    }
    
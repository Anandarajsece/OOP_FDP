//dynamic cast 
#include <iostream>
using namespace std;
class Base {
public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
};
class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};
class AnotherDerived : public Base {
    public:
    void show() override {
        cout << "AnotherDerived class show function called." << endl;
    }
};
int main()
 {
    Base* base = new Derived();
    Derived* derived = dynamic_cast<Derived*>(base);
    
    //dynamic cast to check if base is actually a Derived object
    if (derived != nullptr) {
        //if it is, then we can call the Derived class show function
        derived->show();
    }
    else
    {
        cout << "Base is not a Derived object." << endl;
        }
        return 0;
    }

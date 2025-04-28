//virtual constructors and virtual destructors
// virtual constructors and virtual destructors are used to create and destroy objects of derived classes
// when the base class pointer is used to point to the derived class object
#include <iostream>
using namespace std;
class Base
{
    public:
    virtual void show()
    {
        cout << "Base class show function" << endl;
    }
    virtual ~Base() // virtual destructor
    {
        cout << "Base class destructor" << endl;
    }
};
class Derived : public Base
{
    public:
    void show()
    {
        cout << "Derived class show function" << endl;
    }
    ~Derived() // destructor
    {
        cout << "Derived class destructor" << endl;
    }
};
int main()
{
    
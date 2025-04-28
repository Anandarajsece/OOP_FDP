//public, protected and private inheritance in C++
#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
protected:
    void show()
    {
        cout << "Base class show function" << endl;
    }
private:
    void print()
    {
        cout << "Base class print function" << endl;
    }
};
class Derived : public Base // Public inheritance
{
public:
    void displayDerived()
    {
        cout << "Derived class display function" << endl;
        show(); // Accessible due to protected inheritance
        // print(); // Not accessible due to private inheritance
    }
};
class Derived2 : protected Base // Protected inheritance
{
public:
    void displayDerived2()
    {
        cout << "Derived2 class display function" << endl;
        show(); // Accessible due to protected inheritance
        // print(); // Not accessible due to private inheritance
    }
};
class Derived3 : private Base // Private inheritance
{
public:
    void displayDerived3()
    {
        cout << "Derived3 class display function" << endl;
        show(); // Accessible due to protected inheritance
        // print(); // Not accessible due to private inheritance
    }
};
int main()
{
    Derived objDerived;
    objDerived.display(); // Calls Base class display function
    objDerived.displayDerived(); // Calls Derived class display function

    Derived2 objDerived2;
    objDerived2.displayDerived2(); // Calls Derived2 class display function

    Derived3 objDerived3;
    objDerived3.displayDerived3(); // Calls Derived3 class display function

    return 0;
}
// Output:
// Base class display function
// Derived class display function
// Derived2 class display function
// Derived3 class display function


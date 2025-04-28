//parameterized constructor destructor inheritance
#include <iostream>
using namespace std;
class Base
{
    public:
    int x;
    //parameterized constructor
    Base(int i)
    {
        x = i;
        cout << "Base class Parameterized Constructor\n";
    }
    //destructor
    ~Base()
    {
        cout << "Base class Destructor\n";
    }
};
class Derived : public Base
{
    public:
    int y;
    //parameterized constructor
    Derived(int j) : Base(j) //Explicitly calling base class constructor
    {
        y = j;
        cout << "Derived class Parameterized Constructor\n";
   }
    //destructor
    ~Derived()
    {
        cout << "Derived class Destructor\n";
    }

};
int main()
{
    
    Derived d(10); //automatically executes both derived and base class constructors and destructors because of inheritance
    return 0;
}
//Output:
//Base class Parameterized Constructor
//Derived class Parameterized Constructor
//Derived class Destructor
//Base class Destructor
//hybrid inheritance 
#include <iostream>
using namespace std;
class A
{
    public:
     void display()
     {
         cout<<"Base class A"<<endl;
     }
     void show()
     {
         cout<<"Base class A show function"<<endl;
     }
};
class B:public virtual A
{
    public:
     void display()
     {
         cout<<"Derived class B"<<endl;
     }
};
class C:public virtual A
{
    public:
     void display()
     {
         cout<<"Derived class C"<<endl;
     }
     void print()
     {
         cout<<"Derived class C print function"<<endl;
     }
};
class Hybrid:public B,public C
{
    public:
     void display()
     {
         cout<<"Derived class Hybrid"<<endl;
     }
};
int main()
{
    Hybrid h;
    //h.A::display(); // Ambiguity resolved by specifying the class name
    h.display(); // Ambiguity resolved by specifying the class name
    h.B::display(); // Ambiguity resolved by specifying the class name
    h.C::display(); // Ambiguity resolved by specifying the class name
    h.Hybrid::display(); // Ambiguity resolved by specifying the class name
    h.print(); // No ambiguity, directly calls the print function of class C
    h.show(); // No ambiguity, directly calls the show function of class A
    return 0;
}
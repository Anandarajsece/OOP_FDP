//hybrid inheritance 
#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
    public:
    void display()
    {
        cout << "Class B" << endl;
    }
};
class C : public A
{
    public:
    void display()
    {
        cout << "Class C" << endl;
    }
};
class D : public B, public C
{
    public:
    void display()
    {
        cout << "Class D" << endl;
    }
};
int main()
{
    D obj;
    obj.B::display(); // Ambiguity resolved by specifying the class name
    obj.C::display(); // Ambiguity resolved by specifying the class name
    obj.D::display(); // Calls display() of class D
    return 0;
}
// Output:      
// Class B
// Class C
// Class D
// The program demonstrates hybrid inheritance in C++. Class D inherits from both class B and class C, which in turn inherit from class A.
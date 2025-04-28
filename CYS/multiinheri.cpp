//multiple inheritance
// This program demonstrates multiple inheritance in C++.
#include <iostream>
using namespace std;
class Father
{
public:
    void showFather()
    {
        cout << "Father's method" << endl;
    }   
    void show()
    {
        cout << "Father's show method" << endl;
    }
};
class Mother
{
public:
    void showMother()
    {
        cout << "Mother's method" << endl;
    }  
    void show()
    {
        cout << "Mother's show method" << endl;
    } 
};
class Child : public Father, public Mother
{
public:
    void showChild()
    {
        cout << "Child's method" << endl;
    }  
    void show()
    {
        cout << "Child's show method" << endl;
    }
};
int main()
{
    Child c;
    c.showFather(); // Accessing method from Father class
    c.showMother(); // Accessing method from Mother class
    c.showChild();  // Accessing method from Child class
   // c.Father::show();
   //c.Mother::show(); // Accessing method from Mother class
    c.show(); // Accessing method from Child class
    return 0;
}
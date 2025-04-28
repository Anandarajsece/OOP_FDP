#include<iostream>
using namespace std;
class Base
{
    public:
    void print()
    {
        cout << "Base class print function\n";
    }
};
class Derived : public Base
{
    public:
    void print()
    {
        cout << "Derived class print function\n";
    }
};
int main()
{
   
    
    return 0;
}
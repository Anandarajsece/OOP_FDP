#include<iostream>
using namespace std;
class Box
{
    private:
    static int a,b; // static members
    public:
    static void print() // static member function
    {
        cout<<a<<" "<<b<<endl;
    }
};
int Box::a=10; // initializing static members values stored in stack memory so faster access 
int Box::b=20; // initializing static members
int main()
{
    Box::print(); // 10 20
    return 0;
}
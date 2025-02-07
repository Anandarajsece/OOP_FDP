//copy constructor
#include<iostream>
using namespace std;
class Box
{
    int a,b;
    public:
    Box() //default constructor
    {
        a=0;
        b=0;
    }
    Box(int x,int y) //parameterized constructor
    {
        a=x;
        b=y;
    }
    Box(const Box &obj) //copy constructor
    {
        a=obj.a;
        b=obj.b;
    }
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Box obj1(10,20);//8 bytes
    Box obj2(obj1);//8 bytes
    obj1.print();
    obj2.print();
    return 0;
}
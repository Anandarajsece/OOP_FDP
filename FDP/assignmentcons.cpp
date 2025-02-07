//copy assignment operator
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
   
    void print()
    {
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    Box obj1(10,20);//8 bytes
    Box obj2;
    obj2=obj1;//no need to write extra fees of code its saves memory 
    obj1.print();
    obj2.print();
    return 0;
}
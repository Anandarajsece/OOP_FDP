//friend class is used to give access to the private members of a class to another class. In the above code, we have given access to the private members of class Box to the function display. Now, let's see how to give access to the private members of class Box to another class.
#include<iostream>
using namespace std;
class Box
{
    private:
    int a,b;
    public:
    Box(int x,int y)
    {
        a=x;
        b=y;
    }
    friend class outerbox;
};
class outerbox
{
    public:
    void display(Box obj)
    {
        cout<<obj.a<<endl;
        cout<<obj.b<<endl;
    }
};
int main()
{
    Box obj(10,20);
    outerbox obj1;
    obj1.display(obj);
}
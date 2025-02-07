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
    friend void display(Box);
};
void display(Box obj)
{
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
}
int main()
{
    Box obj(10,20);
    display(obj);
}
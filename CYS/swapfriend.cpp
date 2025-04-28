//swap two values using friend class 
#include <iostream>
using namespace std;
class B; // Forward declaration of class B
class A
{
    friend class B;
    private:
    int a;
    public:
    void getdata()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
    }
};
class B
{
    private:
    int b;
    public:
    void getdata()
    {
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    void display()
    {
        cout<<"The value of b is: "<<b<<endl;
    }
    void swap(A &x)
    {
        int temp = x.a;
        x.a = b;
        b = temp;
        cout<<"Values swapped successfully!"<<endl;
    } // Friend function of class B

};
int main()
{
    A obj1;
    B obj2;
    obj1.getdata();
    obj2.getdata();
    cout<<"Before swapping: "<<endl;
    obj1.display();
    obj2.display();
    obj2.swap(obj1); // Call the swap function to swap values
    cout<<"After swapping: "<<endl;
    obj1.display();
    obj2.display();
    return 0;
}
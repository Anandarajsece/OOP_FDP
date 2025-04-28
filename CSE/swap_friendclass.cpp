//swap two values using friend class
#include <iostream>
using namespace std;
class B;
class A
{
    friend class B; // class B is friend of class A
    private:
        int x;
    public:
        void getdata()
        {
            cout << "Enter value of x: ";
            cin >> x;
        }
        void showdata()
        {
            cout << "x = " << x << endl;
        }
};
class B
{
    private:
        int y;
    public:
        void getdata()
        {
            cout << "Enter value of y: ";
            cin >> y;
        }
        void showdata()
        {
            cout << "y = " << y << endl;
        }
        void swap(A &a)
        {
            int temp;
            temp = a.x;
            a.x = y;
            y = temp;
        }
 };
int main()
{
    A a;
    B b;
    a.getdata();
    b.getdata();
    cout << "Before swapping:" << endl;
    a.showdata();
    b.showdata();
    b.swap(a);
    cout << "After swapping:" << endl;
    a.showdata();
    b.showdata();
    return 0;
}
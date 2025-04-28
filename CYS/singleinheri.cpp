//single inheritance
#include <iostream>
using namespace std;
class Vehicle
{
    protected:
        int speed;
    public:
        void setSpeed(int s)
        {
            speed=s;
        }
        void display()
        {
            cout<<"Speed: "<<speed<<endl;
        }
};
class Car:public Vehicle
{
    private:
        string brand;
    public:
        void setBrand(string b)
        {
            brand=b;
        }
        void display()
        {
            cout<<"Brand: "<<brand<<endl;
            cout<<"Speed: "<<speed<<endl;
        }
};
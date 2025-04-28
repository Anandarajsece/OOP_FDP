#include<iostream>
using namespace std;
class Car
{
    private:
    string brand;
    int speed;
    public:
    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
    }
    Car()
    {
        brand = "BMW";
        speed = 200;
    }
    Car(string b, int s)
    {
        brand = b;
        speed = s;
    }
    ~Car()
    {
        cout<<"Destructor called"<<endl;
    }
};
int main()
{
    Car mycar;
    mycar.display();
    Car mycar1("Audi", 250);
    mycar1.display();
    return 0;
}
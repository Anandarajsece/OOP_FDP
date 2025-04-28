#include<iostream>
using namespace std;
class Car
{
    private:
        int speed;
        string brand;
    public:
    void display()
    {
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
    }
    Car()
    {
        speed=250;
        brand="BMW";
    }
    Car(int s,string b)
    {
        speed=s;
        brand=b;
    }
};
int main()
{
    Car c1;
    Car c2(300,"Audi");
    //c1.speed=280;
    c1.display();
    c2.display();
    return 0;
}

//copy constructor
#include <iostream>
using namespace std;
class car
{
    string name;
    int price;
    public:
     car(string n,int p) // parameterized constructor
    {
        name=n;
        price=p;
    }
    car(car &obj) //copy constructor definition
    {
        name=obj.name;
        price=obj.price;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
    }
};
int main()
{
    car c1("BMW",1000000);
    car c2=c1; //copy constructor called
    car c3(c1); //copy constructor called
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
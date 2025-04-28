//hybrid inheritance
#include <iostream>
using namespace std;
class Vehicle
{
public:
     void display()
    {
        cout << "This is a vehicle" << endl;
    }
    void show()
    {
        cout << "This is a show function" << endl;
    }
};
class Car : public virtual Vehicle
{
public:
    void display()
    {
        cout << "This is a car" << endl;
    }
};
class Bike : public virtual Vehicle
{
public:
    void display()
    {
        cout << "This is a bike" << endl;
    }
};
class Hybrid : public Car, public Bike
{
public:
    void display()
    {
        cout << "This is a hybrid vehicle" << endl;
    }
};
int main()
{
    Hybrid h;
    h.Car::display(); // Calls Car's display function
    h.Bike::display(); // Calls Bike's display function
    h.display(); // Calls Hybrid's display function
    h.show();
    return 0;
}
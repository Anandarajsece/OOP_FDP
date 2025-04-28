//default constructor 
#include <iostream>
using namespace std;
class Car
{
private:
    int price;
    string brand;
public:
    Car()
    {
        price = 1000000;
        brand = "BMW";
        
    }
    Car(int p, string b)
    {
        price = p;
        brand = b;
    }
    void getdata();
    void displaydata();
};
void Car::getdata()
{
    cout << "Enter the price of the car: ";
    cin >> price;
    cout << "Enter the brand of the car: ";
    cin >> brand;
}
void Car::displaydata()
{
    cout << "The price of the car is: " << price << endl;
    cout << "The brand of the car is: " << brand << endl;
}
int main()
{
    Car();
    
    Car Audi;
    Audi.getdata();
    
   
    return 0;
}
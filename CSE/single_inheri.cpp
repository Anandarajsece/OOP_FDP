
#include <iostream>
using namespace std;
class Vehicle
{
 public:
 int speed;
 void StartEngine()
 {
 cout << "Engine started." << endl;
 }
};

class Car : public Vehicle
{
 public:
 void Accelerate()
 {
 cout << "Car is accelerating." << endl;
 }
};

int main()
{
 Car myCar; // object of the Car class
 myCar.speed = 60; // member of the base class
 myCar.StartEngine(); // member function of the base class
 myCar.Accelerate(); // member function of the derived class

 return 0;
}

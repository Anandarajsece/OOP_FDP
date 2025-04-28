#include<iostream>
using namespace std;
class Animal
{
private:
    void eat()
    {
        cout << "Animal eats" << endl;
    }
};
class Dog : private Animal
{
public:
    void bark()
    {
        cout << "Dog barks" << endl;
        eat(); // Calling the base class method
    }
};
int main()
{
    Dog dog;
   // dog.eat(); // Calling the base class method
    dog.bark(); // Calling the derived class method
    return 0;
}
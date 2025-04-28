//single inheritance
#include <iostream>
using namespace std;
class Animal
{
public:
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
        //eat();
    }
};
int main()
{
    Dog d;
    d.eat(); // Inherited from Animal class
    d.bark(); // Dog's own method
    return 0;
}

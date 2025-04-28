//inheritance single
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
class Dog :private Animal
{
    public:
    void bark()
    {
        cout << "Dog barks" << endl;
        eat();
    }
};
int main()
{
    Dog d;
    //d.eat(); // Calling the base class method
    d.bark(); // Calling the derived class method
       
    return 0;
}


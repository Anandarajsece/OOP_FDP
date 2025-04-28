//Hierarchical Inheritance in C++
#include <iostream>
using namespace std;
class Animal { // Base class
public:
    void eat() 
    {
        cout << "Animal eats" << endl;
    }
};
class Mammal : public Animal { // Derived class 1
public:
    void walk() 
    {
        cout << "Mammal walks" << endl;
    }
};
class Bird : public Animal { // Derived class 2
public:
    void fly() 
    {
        cout << "Bird flies" << endl;
    }
};
class Bat : public Mammal, public Bird { // Derived class 3
public:
    void hang() {
        cout << "Bat hangs" << endl;
    }
};
int main() {
    Bat bat;
    bat.eat(); // Accessing base class method
    bat.walk(); // Accessing derived class 1 method
    bat.fly(); // Accessing derived class 2 method
    bat.hang(); // Accessing derived class 3 method
    return 0;
}
// Output:
// Animal eats
// Mammal walks
// Bird flies
// Bat hangs

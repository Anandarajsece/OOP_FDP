//multilevel inheritance 
#include <iostream>
using namespace std;
class Grandparent
{
public:
    void displayGrandparent() {
        cout << "This is the Grandparent class." << endl;
    }
};
class Parent : public Grandparent
{
public:
    void displayParent() {
        cout << "This is the Parent class." << endl;
    }
};
class Child : public Parent
{
public:
    void displayChild() {
        cout << "This is the Child class." << endl;
    }
};
int main() {
    Child obj;
    obj.displayGrandparent(); // Accessing Grandparent class method
    obj.displayParent();      // Accessing Parent class method
    obj.displayChild();       // Accessing Child class method
    return 0;
}
#include <iostream>
using namespace std;
class Animal {
public:
  void eat() {
    cout << "Animal is eating." <<endl;
  }
};
class Dog : public Animal {
public:
  void bark() {
   cout << "Dog is barking." <<endl;
  }
};
int main() {
  Dog dog;
  dog.eat(); // Animal is eating.
  dog.bark(); // Dog is barking.
  return 0;
}
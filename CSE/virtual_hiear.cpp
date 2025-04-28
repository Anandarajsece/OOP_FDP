#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Mammal : virtual public Animal {
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};

class Bird : virtual public Animal {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void hang() {
        cout << "Bat hangs" << endl;
    }
};

int main() {
    Bat bat;
    bat.eat();   // ✅ Now unambiguous
    bat.walk();
    bat.fly();
    bat.hang();
    return 0;
}

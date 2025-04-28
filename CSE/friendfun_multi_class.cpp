#include <iostream>
using namespace std;

class ClassB;

class ClassA {
private:
    int dataA;

public:
    ClassA(int value) : dataA(value) {}

    // Declare ClassB's member function as a friend
    friend void friendFunction(ClassA &a, ClassB &b);
};

class ClassB {
private:
    int dataB;

public:
    ClassB(int value) : dataB(value) {}

    // Declare ClassA's member function as a friend
    friend void friendFunction(ClassA &a, ClassB &b);
};

// Friend function defined outside the classes
void friendFunction(ClassA &a, ClassB &b) {
    cout << "ClassA data: " << a.dataA << ", ClassB data: " << b.dataB << endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    friendFunction(objA, objB);  // Access private data of both classes

    return 0;
}

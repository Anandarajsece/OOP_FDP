#include <iostream>
using namespace std;
class ClassB;  // Forward declaration

class ClassA {
private:
    int dataA;
    
public:
    ClassA() : dataA(100) {}  // Initializing dataA

    // Declare ClassB as a friend
    friend class ClassB;
};

class ClassB {
public:
    void showData(ClassA obj) {
        // Friend class can access private members of ClassA
        cout << "Value of dataA: " << obj.dataA << endl;
    }
};

int main() {
    ClassA a;
    ClassB b;
    b.showData(a);  // Output: Value of dataA: 100
    return 0;
}

#include <iostream>
using namespace std;

class Demo {
private:
    int value;
public:
    // Constructor
    Demo(int v) : value(v) {}

    // Const function: Can be called by constant objects
    void display() const {
        cout << "Value: " << value << endl;
    }

    // Non-const function: Cannot be called by constant objects
    void setValue(int v) {
        value = v;  // Modifies the object (Not allowed for const objects)
    }
};

int main() {
    const Demo obj(10);  // Constant object

    obj.display();  // ✅ Allowed (const function)
    // obj.setValue(20);  ❌ Error: Cannot modify a constant object

    return 0;
}

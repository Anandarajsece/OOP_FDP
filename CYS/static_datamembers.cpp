#include <iostream>
using namespace std;

class Counter {
private:
    static int count;  // Static data member

public:
    Counter() {
        count++;  // Increment count when an object is created
    }

    void displayCount() {
        cout << "Count: " << count << endl;
    }

    static void showCount() {  // Static member function
        cout << "Static Function - Count: " << count << endl;
    }
};

// Definition & Initialization of Static Data Member
int Counter::count = 0;  

int main() {
    Counter obj1, obj2, obj3;  // Three objects created

    obj1.displayCount();  // Displays shared static count
    obj2.displayCount();
    
    Counter::showCount();  // Accessing static function using class name

    return 0;
}

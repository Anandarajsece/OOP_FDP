#include <iostream>
using namespace std;
//
class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Friend function declaration
    friend double calculateArea(Circle &c);
};

// Friend function to calculate the area of the circle
double calculateArea(Circle &c) {
    return 3.14159 * c.radius * c.radius;  // Access private radius directly
}

int main() {
    Circle c1(5.0);
    cout << "Area of the circle: " << calculateArea(c1) << endl;  // Calling the friend function

    return 0;
}

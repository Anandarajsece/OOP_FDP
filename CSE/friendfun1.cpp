#include <iostream>
using namespace std;
// This program demonstrates the use of friend functions in C++
class Box {
private:
    int length, width, height;

public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Friend function declaration
    friend void displayBoxDimensions(Box &b);
};

// Friend function defined outside the class
void displayBoxDimensions(Box &b) {
    cout << "Box Dimensions: " << b.length << " x " << b.width << " x " << b.height << endl;
}

int main() {
    Box box(10, 20, 30);
    displayBoxDimensions(box);  // Calling the friend function

    return 0;
}

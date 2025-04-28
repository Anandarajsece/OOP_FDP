#include <iostream>
using namespace std;

class Box {
private:
    int length, width;

public:
    Box(int l, int w) : length(l), width(w) {}

    // Friend function declaration
    friend void displayFriend(Box &b);

    // Normal function declaration
    void displayNormal(Box &b) {
        cout << "Length: " << b.length << ", Width: " << b.width << endl;
    }
};

// Friend function definition
void displayFriend(Box &b) {
    // Friend function can access private members directly
    cout << "Friend Function Access - Length: " << b.length << ", Width: " << b.width << endl;
}

int main() {
    Box box(10, 20);

    // Using the friend function
    displayFriend(box);  // Output: Friend Function Access - Length: 10, Width: 20

    // Using the normal member function
    box.displayNormal(box);  // Output: Length: 10, Width: 20

    return 0;
}

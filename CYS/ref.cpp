#include <iostream>

// Function to increment the value pointed to by a pointer
void incrementWithPointer(int* ptr) {
    if (ptr) { // Check if the pointer is not null
        (*ptr)++; // Dereference the pointer to increment the value it points to
    }
}

// Function to increment the value referred to by a reference
void incrementWithReference(int& ref) {
    ref++; // Directly increment the referenced value
}

int main() {
    int a = 5;
    int b = 10;

    // Incrementing 'a' using a pointer
    incrementWithPointer(&a);

    // Incrementing 'b' using a reference
    incrementWithReference(b);

    std::cout << "Values after incrementation: \n";
    std::cout << "a = " << a << " (incremented by pointer)\n";
    std::cout << "b = " << b << " (incremented by reference)\n";

    return 0;
}
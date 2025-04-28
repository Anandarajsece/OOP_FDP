#include <iostream>
using namespace std;

class DynamicArray {
private:
    int *arr;  // Pointer for dynamic array
    int size;  // Size of the array

public:
    // Dynamic Constructor
    DynamicArray(int s) {
        size = s;
        arr = new int[size];  // Allocate array dynamically
        cout << "Dynamic Constructor: Array of size " << size << " created." << endl;

        // Initializing array elements
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;  // Assigning values
        }
    }

    // Function to display array elements
    void display() {
        cout << "Array Elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Destructor to free allocated memory
    ~DynamicArray() {
        delete[] arr;  // Free dynamically allocated array
        cout << "Destructor Called! Memory Freed." << endl;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    DynamicArray obj(n);  // Calls dynamic constructor
    obj.display();  // Display array elements

    return 0;  // Destructor is called, memory is freed
}

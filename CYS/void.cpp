/*
Void Data Type (void)
The void data type represents the absence of value. 
We cannot create a variable of void type.
 It is used for pointer and functions that do not return any 
 value using the keyword void.

Syntax

void functionName();
*/

#include <iostream>
using namespace std;

// Function with void return type
void hello() {
    cout << "Hello, World!" << endl;
}

int main() {
      hello();
    return 0;
}
// Output: Hello, World!
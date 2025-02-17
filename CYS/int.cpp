/*
Integer Data Type (int)
Integer data type denotes that the given variable can store the integer numbers. 
The keyword used to define integers is int. 
Its size is 4-bytes (for 64-bit) systems and can store numbers for binary, octal,
decimal and hexadecimal base systems in the range from -2,147,483,648 to 2,147,483,647.

Syntax
int name;

*/

#include <iostream>
using namespace std;

int main() {

      // Creating an integer variable
    int x = 25;
    cout << x << endl;
  
      // Using hexadecimal base value
      x = 0x15;
      cout << x;

    return 0;
}

// C++ program to demonstrate the use of cin.ignore() function
// to skip multiple characters in the input stream.
#include <iostream>
using namespace std;

int main(){
    cout << "Enter a sentence: ";

    // Use cin.ignore() to skip up to 10 characters or until a space is encountered.
    cin.ignore(10, ' ');
    char nextChar;

    // Read the next character from the input stream
    cin >> nextChar;

    // Output the character that was read after ignoring the specified characters
    cout << "Next character after ignoring: " << nextChar << endl;

    return 0;
}
// What is the output of the following code snippet?
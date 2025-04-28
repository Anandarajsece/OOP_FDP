// C++ program to demonstrate the use of cin.ignore() function
// to discard the newline character after reading an integer.
#include <iostream>
using namespace std;

int main(){
    int age;
    char initial;

    // Prompt the user to enter their age
    cout << "Enter your age: ";
    cin >> age;

    // Use cin.ignore() to discard the newline character
    cin.ignore();

    // Prompt the user to enter the first letter of their name
    cout << "Enter the first letter of your name: ";
    cin >> initial;

    // Display the entered age and initial
    cout << "Your age is " << age << " and your initial is " << initial << endl;
    return 0;
}

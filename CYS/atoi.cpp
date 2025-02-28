/*The atoi() method converts string into an integer, 
and returns that integer. The string should start with whitespace or some sort of number, and atoi() function will stop reading from string as soon as a non-numerical character has been read. 
The function is defined in <stdlib.h> header file.*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x;
    x=atoi("512");
    cout<<"value of x = "<<x;
    return 0;
}
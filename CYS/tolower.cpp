/*The tolower() method converts a character to lowercase. 
The function is defined in <ctype.h> header file.*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    char str1='H';

    str1=tolower(str1);
    cout<<"str1 is: "<<str1;
    return 0;
}
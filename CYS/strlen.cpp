#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char s[30];
    cout<<"Enter any string : ";
    gets(s);
    cout<<"Length of the string : "<<strlen(s);
    return 0;
}
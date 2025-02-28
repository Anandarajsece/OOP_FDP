/*strcpy() Method
The strcpy() method copies the string str2 into string str1,
 including null character ('\0'). The function is defined 
 in <string.h> header file.*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str1[50]="string 1";
    char str2[50]="string 2";

    cout<<"str1 before copy: "<<str1<<endl;
    /* this function has copied str2 into str1*/
    strcpy(str1,str2);
    cout<<"str1 after copy: "<<str1;
    return 0;
}
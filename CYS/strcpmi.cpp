
/*strcmpi() Method
The strcmpi() method compares the two strings without their 
case (upper and lower case) and returns an integer value. 
If both the strings are same (equal) then this function 
would return 0 otherwise it may return a negative or positive
 value based on the comparison. 
 The function is defined in <string.h> header file.*/
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str1[30]="Mango";
    char str2[30]="MaNgO";

    if(strcmpi(str1,str2)==0)
    {
        cout<<"str1 and str2 both are same";
    }
    else
    {
        cout<<"str1 and str2 are not same";
    }
    return 0;
}
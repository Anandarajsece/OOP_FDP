#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str1[30]="Mango";
    char str2[30]="Mango";

    if(strcmp(str1,str2)==0)
    {
        cout<<"str1 and str2 both are same";
    }
    else
    {
        cout<<"str1 and str2 are not same";
    }
    return 0;
}
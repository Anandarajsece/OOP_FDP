#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char str1[30]="hello world";

    // convert the str1 into uppercase
    strupr(str1);
    cout<<"str1 is: "<<str1;
    return 0;
}
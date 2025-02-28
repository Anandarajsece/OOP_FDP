#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char data[20];
    int i;

    cout<<"Enter Name ";
    gets(data);

    for(i=0; data[i]!='\0'; i++)
    {
        cout<<data[i]<<endl;
    }
    return 0;
}
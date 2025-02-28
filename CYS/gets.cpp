#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char data[20];
    char city[20];

    cout<<"Enter Name ";
    gets(data);
    printf("Enter City ");
    gets(city);
    cout<<"Name: "<<data<<"  City: "<<city;
    return 0;
}
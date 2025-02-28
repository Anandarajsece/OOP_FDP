#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
#include<string>
using namespace std;
int main()
{
    //string str;
    char str[100];
    cout<<"Enter a string: ";
   // getline(cin,str);
   gets(str);
    cout<<"string len"<<strlen(str);
}
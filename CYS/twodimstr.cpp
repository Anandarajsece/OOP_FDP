#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char list[3][10];
    int r;

    //store the name 3 fruits
    cout<<"Enter 3 fruits name"<<endl;
    for(r=0; r<3; r++)
    {
        cin>>list[r];/
    }

    //access the name of 3 fruits from the array
    cout<<"\nNames of 3 fruits are"<<endl;
    for(r=0; r<3; r++)
    {
        cout<<list[r]<<endl;
    }
    return 0;
}
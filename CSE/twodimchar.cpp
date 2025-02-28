#include<iostream>
using namespace std;
int main()
{
    char name[5][10];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter name: ";
        cin>>name[i];
    }
    cout<<"The names are: ";
    for(int i=0;i<5;i++)
    {
        cout<<name[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int main()
{
    int x=5;//x Lvalue -permanent storage
    int y=x+5;//y Rvalue -temporary storage

    cout<<x<<" "<<y<<endl;
    x=15;
    cout<<x<<" "<<y<<endl;
}
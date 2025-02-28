//inline function
#include<iostream>
using namespace std;
inline int sum(int a, int b, int c)
{
    return (a*b)+c;
}
int main()
{
    int a=10,b=20,c=30;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(10,20,30)<<endl;
    return 0;
}
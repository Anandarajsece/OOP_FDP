//constant parameter reference
#include <iostream>
using namespace std;
int sum(const int &a, const int &b, const int &c)
{
   // a=a+10; //error
    return (a*b)+c;
}
int main()
{
    int a=10,b=20,c=30;
    cout<<sum(a,b,c)<<endl;
    cout<<sum(10,20,30)<<endl;
    return 0;
}
//default parameter
#include <iostream>
using namespace std;
int sum(int a, int b=5, int c=2)
{
    return (a*b)+c;
}
int main()
{
    int a=10,b=20,c=30;
    //cout<<sum(a)<<endl;
    cout<<sum(a,c:30)<<endl;
    //cout<<sum(10,20,30)<<endl;
    return 0;
}
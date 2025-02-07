#include<iostream>
using namespace std;
int main()
{
    auto add=[](int a,int b)->int{return a+b;}; // stored stack mem directly
    cout<<add(10,20)<<endl;
    cout<<add(100,200)<<endl;
    cout<<add(1000,2000)<<endl;
    int x=10,y=20;
    auto sub=[=]{return x-y;}; //u can take value from variable directly
    cout<<sub()<<endl;
     string iy="hello";
     auto greet=[&](){return iy;}; //u can take value from variable directly
    cout<<greet()<<endl;
}
#include<iostream>
#include<array>
using namespace std;
//STL-Array in C++
int main()
{
    array <int,5> a= {10,20,30,40,50};
    array <int,5> b= {100,200,300,400,500};
    cout<<"Array Size : "<<a.size()<<endl;
    for(int x : a)
    {
        cout<<" "<<x;
    }
    cout<<endl;
    cout<<"Array Element At 3 Index : "<<a.at(3)<<endl;
    cout<<"Array Empty or Not : "<<a.empty()<<endl;
    cout<<"Array First Element: "<<a.front()<<endl;
    cout<<"Array Last Element: "<<a.back()<<endl;
    cout<<"Before Swap : "<<endl;
    cout<<"A : ";
    for(int x : a){cout<<" "<<x;}  cout<<endl;
    cout<<"B : ";
    for(int x : b){cout<<" "<<x;}  cout<<endl;
    a.swap(b);
    cout<<"After Swap : "<<endl;
    cout<<"A : ";
    for(int x : a){cout<<" "<<x;}  cout<<endl;
    cout<<"B : ";
    for(int x : b){cout<<" "<<x;}  cout<<endl;
    array <int,5> c;
    c.fill(10);
    cout<<"C : ";
    for(int x : c){cout<<" "<<x;}  cout<<endl;
    return 0;
}
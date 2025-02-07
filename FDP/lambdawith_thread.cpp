#include<iostream>
using namespace std;
int main()
{
    thread t([](int a,int b)->int{return a+b;},10,20);
    t.join();

}
#include<iostream>
using namespace std;
void process(int& x){cout<<x<<"l value\n";}//lvalue
void process(int&& x){cout<<x<<"r value\n";}//rvalue 
template <typename T>
void forward(T&& arg)//universal reference 
{
    process(std::forward<T>(arg));}//process(arg);
int main(){
    int a=10;//lvalue
    forward(a);forward(20);
}
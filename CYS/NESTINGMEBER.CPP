#include <iostream>
using namespace std;
class Average
{
int a,b;
public:
void read();
void print();
int avg();
};
void Average::read()
{
cout<<"\n enter a and b: ";
cin>>a>>b;
}
void Average::print()
{
cout<<"value of a: "<<a;
cout<<"\nvalue of b: "<<b;
cout<<"\naverage is : "<<avg();
}
int Average::avg()
{
return (a+b)/2;
}
main()
{
Average A;
A.read();
A.print();
}
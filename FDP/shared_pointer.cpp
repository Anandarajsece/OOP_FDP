#include<iostream>
#include<memory>
using namespace std;
class Hello
{
    public:
        char name[20]="Hello";
};
int main()
{
    shared_ptr<Hello> ptr(new Hello);
    shared_ptr<Hello> ptr2=ptr;
    cout<<ptr.use_count()<<endl;
    cout<<ptr2.use_count()<<endl;
    return 0;
}
#include<memory>
#include<iostream>
using namespace std;
void hello()
{
    unique_ptr<int> ptr(new int(15));
    int x=20;
    if(x==20)
    {
        return;
    }
    unique_ptr<int> ptr2=move(ptr);
    }
    int main()
    {
        hello();
        return 0;
    }
